#include "binsearch.hpp"

using namespace std;

/**
    Good morning! Here's your coding interview problem for today.
    This problem was asked by Google.
    Find the minimum number of coins required to make n cents.
    You can use standard American denominations, that is, 1¢, 5¢, 10¢, and 25¢.
    For example, given n = 16, return 3 since we can make it with a 10¢, a 5¢, and a 1¢.
**/

int problem1029(int n)
{
    int i, result = 0;
    int SAD[4] = {25,10,5,1};
    i = 0;
    while( i < 4 )
    {
        result += n/SAD[i];
        n = n%SAD[i++];
    }
    return result;
}


int main()
{
    cout << '\t' << problem1029(30) << endl;
    return 0;
}