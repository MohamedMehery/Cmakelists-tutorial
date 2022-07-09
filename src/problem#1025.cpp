#include "binsearch.hpp"
#include <list>
#include <cmath>        //to use roundf(9.6)

/**
 *  Good morning! Here's your coding interview problem for today.
    This problem was asked by Amazon.
    Given a linked list, remove all consecutive nodes that sum to zero. Print out the remaining nodes.
    For example, suppose you are given the input 3 -> 4 -> -7 -> 5 -> -6 -> 6. In this case,
    you should first remove 3 -> 4 -> -7, 
    then -6 -> 6, leaving only 5.
 * */
//Solver properly :)
void removezerosum(list<int> & l)
{
    // iterate over the list
    auto s  = l.size();
    for(int i = 0 ; i < s ; i++)
    {
        //iterate over the items of list to check sum
        for(int j = 2 ; j < s ; j++)
        {
            auto it1 = l.begin() ;
            for(int iter = 0 ; iter < i ; iter++,it1++);
            auto it2 = it1;
            for(int iter = 0 ; iter < j ; iter++,it2++);
            auto sum = accumulate(it1 , ++it2 , 0);
            if(!sum)
            {
                l.erase(it1,it2);
            }
        }
    }
}
template<typename T , size_t N>
inline void showlist(list<T> &l)
{
    int arr[N] = {0};
    for(auto i : l)
    {
        cout << "\t" << i ;
    }
    cout <<endl;   
}

int main()
{
    list<int> l = {3 , 4 , -7 , 5 , -6 , 6, -9 , 4 , 5,2,-2};
    showlist<int,1>(l);
    removezerosum(l);
    showlist<int,1>(l);
    return 0;
}