#pragma once
// Starter example: RAII + move semantics.
// A tiny move-only owner of a heap-allocated T, similar in spirit to std::unique_ptr.
// Replace/extend with your own implementations as you study each topic.

#include <utility>

template <typename T>
class UniqueResource {
public:
    UniqueResource() noexcept = default;
    explicit UniqueResource(T* p) noexcept : ptr_(p) {}

    // Rule of 5: non-copyable, movable
    UniqueResource(const UniqueResource&) = delete;
    UniqueResource& operator=(const UniqueResource&) = delete;

    UniqueResource(UniqueResource&& other) noexcept : ptr_(other.ptr_) {
        other.ptr_ = nullptr;
    }

    UniqueResource& operator=(UniqueResource&& other) noexcept {
        if (this != &other) {
            reset();
            ptr_ = other.ptr_;
            other.ptr_ = nullptr;
        }
        return *this;
    }

    ~UniqueResource() { reset(); }

    T* get() const noexcept { return ptr_; }
    T& operator*() const { return *ptr_; }
    T* operator->() const noexcept { return ptr_; }
    explicit operator bool() const noexcept { return ptr_ != nullptr; }

    T* release() noexcept {
        T* p = ptr_;
        ptr_ = nullptr;
        return p;
    }

    void reset(T* p = nullptr) noexcept {
        delete ptr_;
        ptr_ = p;
    }

private:
    T* ptr_ = nullptr;
};
