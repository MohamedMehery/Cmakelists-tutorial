#include <iostream>
#include <vector>
#include <gtest/gtest.h>
#include <gmock/gmock.h>

using namespace std;
using ::testing::Return;//using Return macro
using ::testing::_; //using don't care parameter
using ::testing::AtLeast; //using Atleast number of times to call
using ::testing::Invoke ;

class Databaseconnect
{
    public:
        virtual bool login(string name , string password)
        {
            cout << '\t' << "Login function called" << endl;
            return true;
        }
        virtual bool logout(string name){return true;}
        virtual int fetchrecord(void){return -1;}
};
/*
    it's not necessary to implement MOCK call, i can just comment the base class and rename
    MOCK call with the base class name and run the code.
*/

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
            int rval = db.fetchrecord();
            if(db.login(name , password) == true)
            {
                if(db.login(name , password) == true)
                    return 1;
                else
                    return -1;
            }
            else
            {
                return -1;
            }
        }
};

TEST(MyDBTest , logintest)
{
    //Arrange
    MockDB mdb;
    Mydatabase db(mdb);
    EXPECT_CALL(mdb  , login("Mohamed" , "Mohamed"))
    .Times(::testing::AtLeast(2))
    .WillRepeatedly(::testing::Return(1));    //.WillOnce(::testing::Return(1));    test error
    
    //ACT
    int retval = 0; 
    // EXPECT_CALL means that login function must be called, so it will fail 
    //int retval = db.init("Mohamed","Mohamed");
    
    //Assert
    EXPECT_EQ(retval , 1);
}

TEST(MyDBTest , loginfailure)
{
    //Arrange
    MockDB mdb;
    Mydatabase db(mdb);

    // i don't know if login function will be called or not
    ON_CALL(mdb  , login(::testing::_ , ::testing::_)) // ::testing::_ means don't care
    .WillByDefault(::testing::Return(1));  //.WillOnce(::testing::Return(1)); test error
    ON_CALL(mdb , fetchrecord()).WillByDefault(::testing::Return(-1));
    //ACT
    int retval = rand() %2;//db.init("Mohamed","Mohamed");  //any value will pass test because ::testing::_

    //Assert
    EXPECT_EQ(retval , 1);
}


/**
 * @brief when i don't use invoke method, GMock will not invoke the function i want to test
 * 
 */
TEST(MyDBTest , invoketest)
{
    //Arrange
    MockDB mdb;
    Mydatabase db(mdb);
    Databaseconnect dbtestobject;
    // i don't know if login function will be called or not
    EXPECT_CALL(mdb  , login(::testing::_ , ::testing::_)) // ::testing::_ means don't care
    .Times(AtLeast(1))
    .WillRepeatedly(::testing::Invoke(&dbtestobject , &Databaseconnect::login ));  //.WillOnce(::testing::Return(1)); test error
    //ACT
    int retval = db.init("Mohamed","Mohamed");  //any value will pass test because ::testing::_

    //Assert
    EXPECT_EQ(retval , 1);
}

//  READ THE OUTPUT PROBLEM VERY WELL //I TOOK TO LONG TO COMPILE THIS FILE DUE TO WRONG PATH LIB
int main(int argc , char ** argv)
{
    ::testing::InitGoogleTest(&argc , argv);
    return RUN_ALL_TESTS();
} 
