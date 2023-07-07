
add_executable(
  core_test
  foo.cpp
)
target_link_libraries(
  core_test
  GTest::gtest_main core
)

include(GoogleTest)
gtest_discover_tests(core_test)
