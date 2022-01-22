#include <iostream>
#include <string.h>
#include <gtest/gtest.h>	//to solve the gtest-printers.h problem follow the link
							//Severity	Code	Description	Project	File	Line	Suppression State Error	C4996	'std::tr1': warning STL4002: The non-Standard std::tr1 namespace and TR1-only machinery are deprecated and will be REMOVED. You can define _SILENCE_TR1_NAMESPACE_DEPRECATION_WARNING to acknowledge that you have received this warning.	Design pattern	c:\users\mohamed mehery\documents\github\design-patter\design pattern\packages\gtest.1.7.0\build\native\include\gtest\gtest-printers.h	497

using namespace std;

struct BankAccount
{
	public:
		int balance = 0;

		explicit BankAccount(const int balance): balance(balance)		//explicit keyword is to prevint the implicit type conversion
		{
		}
};
/**
TEST(AccountTest, BankAccountStartEmpty)
{
	BankAccount account(0);
	EXPECT_EQ(0, account.balance);
}*/

int main( int argc , char* argv[])
{
	//testing::InitGoogleTest(&argc, argv);
	//return RUN_ALL_TESTS(); 
	if (argc > 1)
		return 1;

	cout << "Hello world!" << endl;
	return 0;
}
