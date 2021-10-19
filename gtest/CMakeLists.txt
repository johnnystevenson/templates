project(TODO)
cmake_minimum_required(VERSION 3.16)

# Assumes libgtest-dev is installed
# installGTest.sh is included to set up GTest on a new system
find_package(GTest REQUIRED)

add_subdirectory(source)

include_directories(source)
include_directories(${GTEST_INCLUDE_DIRS})

add_executable(TODO main.cpp)
target_link_libraries(TODO util)

enable_testing()

add_executable( Test_TODO test/Test_Util.cpp )
target_link_libraries(Test_TODO ${GTEST_LIBRARIES} ${GTEST_MAIN_LIBRARY} pthread util)
add_test( NAME Test_TODO
          COMMAND ./Test_TODO )
add_custom_target(check COMMAND ${CMAKE_CTEST_COMMAND} --output-on-failure DEPENDS Test_TODO)