#include "binsearch.hpp"
#include <list>
/**
 *  Good morning! Here's your coding interview problem for today.
    This problem was asked by Amazon.
    Given a linked list, remove all consecutive nodes that sum to zero. Print out the remaining nodes.
    For example, suppose you are given the input 3 -> 4 -> -7 -> 5 -> -6 -> 6. In this case,
    you should first remove 3 -> 4 -> -7, 
    then -6 -> 6, leaving only 5.
 * */
#unsolved
void removeredundant(list<int> & l)
{
    for(int i = 0 ; i < l.size() ; i++)
    {
        list<int>::iterator start = l.begin();
        for(auto it = 0 ;it < i ; it++,start++);
        auto sum = accumulate( start , l.end()  , 0);
        if(!sum)
        {
            for(int j = i ; j < l.size() ; j++)
            {
                auto position = l.begin() ;
                for(auto it = 0 ;it < j ; it++,position++);
                l.remove(*(position));
                cout << "\tremoved " << *position ;
            }
            cout << endl;
        }
    }
}

int main()
{
    list<int> l = {3 , 4 , -7 , 5 , -6 , 6};
    removeredundant(l);
    for(auto i : l)
    {
        cout << "\t" << i ;
    }
    cout <<endl;
    return 0;
}