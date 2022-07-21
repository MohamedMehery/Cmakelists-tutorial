#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iterator>
#include <gtest/gtest.h>
#include <gmock/gmock.h>

using namespace std;

class Student
{
    public:
    int score ;
    string name;
    public:
    Student( int s , string nam): score(s) , name(nam)
    {cout << "\tConstructor is called!" << endl;}
    Student(): score(0) , name("")
    {cout << "\tConstructor is called!" << endl;}
    bool Displayresult()
    {
        return (score >= 50) ? true : false ;
    }
};

class Studenttest : public testing::Test
{
    public:
    Student s1;
    public:
    void SetUp()
    {
        s1.name = "Mohamed";
        s1.score = 20;
    }
    void TearDown()
    {
        //Distructor don't do anything
    }
};

TEST_F(Studenttest, classtest1)
{
    EXPECT_FALSE(s1.Displayresult());
}

TEST_F(Studenttest, classtest2)
{
    s1.score = 90;
    EXPECT_TRUE(s1.Displayresult());
}

int main(int argc , char ** argv)
{
    testing::InitGoogleTest(&argc , argv) ;
    return RUN_ALL_TESTS();
}