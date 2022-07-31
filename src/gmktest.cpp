#include <iostream>
#include <vector>
#include <gtest/gtest.h>
#include <gmock/gmock.h>

using namespace std;
using ::testing::Return;//using Return macro
using ::testing::_; //using don't care parameter
using ::testing::AtLeast; //using Atleast number of times to call

class Databaseconnect
{
    public:
        virtual bool login(string name , string password)
        {return true;}
        virtual bool logout(string name){return true;}
        virtual int fetchrecord(void){return -1;}
};

class MockDB : public Databaseconnect
{
    public:
        MOCK_METHOD0(fetchrecord , int(void) );
        MOCK_METHOD1(logout , bool(string name) );
        MOCK_METHOD2(login , bool(string name , string password) );
};

class Mydatabase
{
    Databaseconnect & db;
    public:
        Mydatabase(Databaseconnect & _db): db(_db){}

        int init(string name , string password)
        {
            if(db.login(name , password) == true)
            {
                return 1;
            }
            else
                return -1;
        }
};

TEST(MyDBTest , logintest)
{
    //Arrange
    MockDB mdb;
    Mydatabase db(mdb);
    EXPECT_CALL(mdb  , login("Mohamed" , "Mohamed"))
    .Times(::testing::AtLeast(1))
    .WillOnce(::testing::Return(1));
    //ACT
    int retval = db.init("Mohamed","Mohamed");

    //Assert
    EXPECT_EQ(retval , 1);
}

//  READ THE OUTPUT PROBLEM VERY WELL //I TOOK TO LONG TO COMPILE THIS FILE DUE TO WRONG PATH LIB
int main(int argc , char ** argv)
{
    ::testing::InitGoogleTest(&argc , argv);
    return RUN_ALL_TESTS();
}