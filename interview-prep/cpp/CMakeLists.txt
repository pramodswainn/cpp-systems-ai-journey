add_library(cpp_topics INTERFACE)
target_include_directories(cpp_topics INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/src)

add_executable(cpp_tests tests/unique_resource_test.cpp)
target_link_libraries(cpp_tests PRIVATE cpp_topics GTest::gtest_main)
gtest_discover_tests(cpp_tests)
