#include "module1.hpp"
#include <gtest/gtest.h>

class TestFixture : public ::testing::Test {
 public:
   TestFixture()
   {
      // A new TestFixture is created for each test
   }

   void SetUp()
   {
      // Run prior to each test
   }

   void TearDown()
   {
      // Run after each test, including on failure
   }
};

TEST_F( TestFixture, Test1 )
{
   std::string msg;
   getMsg( msg );
   EXPECT_EQ( "Hello out", msg );
}
