#include <gtest/gtest.h>
#include "unique_resource.hpp"

namespace {
struct Counter {
    static int alive;
    Counter() { ++alive; }
    ~Counter() { --alive; }
};
int Counter::alive = 0;
}  // namespace

TEST(UniqueResource, DestroysOnScopeExit) {
    Counter::alive = 0;
    {
        UniqueResource<Counter> r(new Counter);
        EXPECT_EQ(Counter::alive, 1);
    }
    EXPECT_EQ(Counter::alive, 0);
}

TEST(UniqueResource, MoveTransfersOwnership) {
    Counter::alive = 0;
    UniqueResource<Counter> a(new Counter);
    UniqueResource<Counter> b(std::move(a));
    EXPECT_FALSE(a);
    EXPECT_TRUE(b);
    EXPECT_EQ(Counter::alive, 1);
}

TEST(UniqueResource, MoveAssignReleasesOldResource) {
    Counter::alive = 0;
    UniqueResource<Counter> a(new Counter);
    UniqueResource<Counter> b(new Counter);
    EXPECT_EQ(Counter::alive, 2);
    b = std::move(a);
    EXPECT_EQ(Counter::alive, 1);
}
