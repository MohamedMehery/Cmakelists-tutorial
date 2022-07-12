#include "binsearch.hpp"
#include "../eigen3/eigen/Dense" // '..' means get back to out directory
#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include <memory>

int sum(int a , int b)
{
    return a + b;
}

TEST(sum, TEST_1)
{
    EXPECT_EQ(5 , sum(3,2));
}


int main(int argc , char **argv)
{
    ::testing::InitGoogleTest(&argc ,argv );
    //vector<int> x = {1,2,3,4,6};
    //cout<< *binsearch<int>(x , x.begin() , x.end() , 6) << endl;
    return RUN_ALL_TESTS();
}