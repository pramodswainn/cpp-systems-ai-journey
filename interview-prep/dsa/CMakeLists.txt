add_executable(dsa_tests hashing/two_sum_test.cpp)
target_include_directories(dsa_tests PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/hashing)
target_link_libraries(dsa_tests PRIVATE GTest::gtest_main)
gtest_discover_tests(dsa_tests)
