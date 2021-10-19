#include "Module1.hpp"
#include <gtest/gtest.h>

class TestModule1 : public ::testing::Test {
 public:
   void SetUp()
   {}

 protected:
   Module1 uut;
};

TEST_F( TestModule1, Test1 )
{
   std::string msg;
   uut.getStr( msg );
   EXPECT_EQ( "Hello ", msg );
}
