#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iterator>
#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include <assert.h>

using namespace std;
/*
Good morning! Here's your coding interview problem for today.
This problem was asked by Facebook.
On a mysterious island there are creatures known as Quxes which come in three colors: red, green, and blue. One power of the Qux is that if two of them are standing next to each other,
they can transform into a single creature of the third color.
Given N Quxes standing in a line,
determine the smallest number of them remaining after any possible sequence of such transformations.
For example, given the input ['R', 'G', 'B', 'G', 'B'], 
it is possible to end up with a single Qux through the following steps:

        Arrangement       |   Change
----------------------------------------
['R', 'G', 'B', 'G', 'B'] | (R, G) -> B
['B', 'B', 'G', 'B']      | (B, G) -> R
['B', 'R', 'B']           | (R, B) -> G
['B', 'G']                | (B, G) -> R
['R']                     |
*/
template <typename T>
void showvector(vector<T> & v)
{
    if(v.size() < 1) return ;
    for(auto i : v)
    {
        cout << '\t' << i ;
    }cout << endl;
}
string & problem1030(string & v)
{
    int i = v.length();
    int j = 0;
    assert(v.length() > 2);
    vector<char> sorts = {'R' , 'G' , 'B'};
    cout << '\t' << v << endl;;
    while(v.length() > 2 && i-- >=0 )
    {
        string::iterator it1, it2;
        it1 = v.begin() + j;
        it2 = it1 + 1;
        //cout << '\t' << *it1 << '\t' << *it2 << endl;
        if(*it1 != *it2)
        {
            for(auto &i : sorts)
            {
                if((i != v[0]) && (i != v[1]) )
                {
                    v[0+j] = i;
                    cout << '\t' << i <<endl;
                    v.erase( it2);
                    cout << '\t' << v << endl;
                    break;
                }
            }            
        }
        else
        {
            j++;
        }
    }
    if(v.length() > 1)
    {
        if(v[0] != v[1])
        {
            for(auto &i : sorts)
            {
                if((i != v[0]) && (i != v[1]) )
                {
                    v[0] = i;
                //   cout << '\t' << i <<endl;
                    v.erase( v.begin() + 1);
                //    cout << '\t' << v << endl;
                    break;
                }
            }
        }
    }
    return v;
}

TEST(problem1030 , test1)
{
    string c = {'R', 'G', 'B', 'G', 'B'};
    EXPECT_EQ( "R" , problem1030(c) );
}

int main(int argc , char ** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
    //string c = {'R', 'G', 'B', 'G', 'B'};
    //cout<< problem1030(c)<<endl;
    
    return 0;
}