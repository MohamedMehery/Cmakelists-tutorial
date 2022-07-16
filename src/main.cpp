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

class Studenttest: public testing::Test
{
    public:
        Student s1;
        // similar to constructor
        void SetUp()override
        {
            s1.score = 100;
            s1.name = "MOHAMMED";
        }
        //similar to distructor
        void TearDown()override
        {

        }


};

TEST_F(Studenttest , classtesting1)
{
    EXPECT_TRUE(s1.Displayresult());
}

TEST_F(Studenttest , classtesting2)
{
    s1.score = 2;
    EXPECT_FALSE(s1.Displayresult());
}

int main(int argc , char ** arcv)
{
    testing::InitGoogleTest( &argc , arcv);
    return RUN_ALL_TESTS();
}