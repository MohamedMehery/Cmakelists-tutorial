#include <iostream>
#include <vector>
#include <gtest/gtest.h>
#include <algorithm>

using namespace std;

struct Bankaccount
{
    int balance;
    Bankaccount() : balance(0)
    {
    }
    explicit Bankaccount(const int balance )
        : balance (balance)
    { //explicit prevents the implict type conversion
    }
    void Deposit(int ammount)
    {
        balance += ammount;
    }
    bool withdraw(int ammount)
    {
        if(balance > ammount)
        {
            balance -= ammount;
            return true;
        }
        else
        return false;
    }  
};

struct Bankaccounttest : testing::Test
{
    Bankaccount * B1;

    void SetUp()
    {
        B1 = new Bankaccount;
    }
    virtual void TearDown()
    {
        delete B1;
    }
};

TEST_F(Bankaccounttest,bankaccountstart0)
{
    EXPECT_EQ( 0 , B1->balance);
}

struct accountstate
{
    int initial_balance;
    int withdraw_ammount;
    int finalbalance;
    bool success;

    friend ostream& operator<<(ostream & os, const accountstate & obj)
    {
        return os
        << "initial balance: " << obj.initial_balance 
        << "withdraw_ammount: " << obj.withdraw_ammount 
        << "final balance: " << obj.finalbalance 
        << "success: " << obj.success; 
    }
};
// i faced a problem that gtest lib was build different compiler and the current code build with g++ -G "MinGW Makefiles"
struct withdrawaccounttest :   Bankaccounttest, testing::WithParamInterface<accountstate> 
{
    void SetUp()
    {
        B1->balance = GetParam().initial_balance;
    }
    void TearDown()
    {
        // Do nothing
    }
};

TEST_P(withdrawaccounttest , withdrawtest)
{
    auto as = GetParam();   //get the accountstate struct
    auto success = B1->withdraw(as.withdraw_ammount) ;
    EXPECT_EQ(as.finalbalance , B1->balance);
    EXPECT_EQ(as.success , success);
    EXPECT_EQ(as.initial_balance , 100);
    EXPECT_LE(as.withdraw_ammount , as.finalbalance);
}

INSTANTIATE_TEST_CASE_P(Default, withdrawaccounttest , 
    testing::Values(
    accountstate{100, 50 , 50 , true},
    accountstate{100 , 200 , 100 , false}
    ) );
    
int main(int argc , char ** argv)
{
    testing::InitGoogleTest(&argc , argv);
    return RUN_ALL_TESTS();
}