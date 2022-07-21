#include "../inc/binsearch.hpp"
#include "../eigen3/eigen/Dense" // '..' means get back to out directory
#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include <memory>
#include <exception>
#include <typeinfo>
#include <stdio.h>

// how to compile test,
//  g++ .\main.cpp -lgtest -lgtest_main -pthread -o main.exe
// how to run
//  .\main.exe

class Student
{
    public:
    int score ;
    string name;
    public:
    Student( int s , string nam): score(s) , name(nam)
    {cout << "\tConstructor is called!" << endl;}
    bool Displayresult()
    {
        return (score >= 50) ? true : false ;
    }
};

int sum(int a , int b)
{
    return a + b;
}
int sub(int a , int b)
{
    return a-b;
}
bool ispositive(int a)
{
    return a >= 0;
}
int divide(int a , int b)
{
    if(b<1)
    throw logic_error("Devided by zero");
    return a/b;
}

TEST(sum, TEST_1)
{
    EXPECT_EQ(5 , sum(3,2));
}
TEST(ispositive, TEST_2)
{
    EXPECT_TRUE(ispositive(2));
    cout << "\tAnother test" <<endl;
    EXPECT_TRUE(ispositive(2));
}

TEST(throwdiv , TEST4)
{
    //test pass when function throw a runtimeerror, but it will fail when any other error eg. logic_error 
    EXPECT_THROW(divide(2,0) , runtime_error);
}
// using assertion, which different from Expect as it's terminate the test when it fails
TEST(assertsub , TEST3)
{
    //assert terminate the program when fails 
    int result = sub(4,3);
    ASSERT_EQ(2 , result );
    char* s;
    s = new char[sizeof("Assertion passed %d")];        //if test fails test will be terminated
    sprintf(s , "\tAssertion passed %d" ,  result);
    cout << s << endl;
}
/** Testing string, using string and cstr() function to pass string as char * */
TEST(stringtest , stringtest)
{
    string name = "Muhammed";
    EXPECT_STREQ("Mohammed", name.c_str());
}
//test class but it's not the best for class testing
TEST(testpatent , test6)
{
    Student s1(50 , "Mohamed");
    EXPECT_FALSE(s1.Displayresult());
}

int main(int argc , char **argv)
{
    ::testing::InitGoogleTest(&argc ,argv );
    return RUN_ALL_TESTS();
}