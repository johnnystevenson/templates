set( TEST_SOURCE
   Test_Module1.cpp
   Test_Module2.cpp
)

# Assumes libgtest-dev is installed
# installGTest.sh is included to set up GTest on a new system
find_package(GTest REQUIRED)

include_directories(${CMAKE_SOURCE_DIR}/source)
include_directories(${GTEST_INCLUDE_DIRS})

enable_testing()

add_executable( Test_TODO Test_Module1.cpp Test_Module2.cpp )
target_link_libraries(Test_TODO ${GTEST_LIBRARIES} ${GTEST_MAIN_LIBRARY} pthread source)
add_test( NAME Test_TODO
          COMMAND ./Test_TODO )
add_custom_target(check COMMAND ${CMAKE_CTEST_COMMAND} --output-on-failure DEPENDS Test_TODO)