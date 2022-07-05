#include "binsearch.hpp"

/**
 * Good morning! Here's your coding interview problem for today.
 * This problem was asked by Google.
 * Given an array of integers where every integer occurs three times except for one integer, 
 * which only occurs once, find and return the non-duplicated integer.
 * For example, given [6, 1, 3, 3, 3, 6, 6], return 1. Given [13, 19, 13, 13], return 19.
 * Do this in O(N) time and O(1) space.
 */

template <class T>
typename vector<T>::iterator nondublicated(vector<T> & v)
{
    sort(v.begin() , v.end() );
    for(auto i = v.begin() ; i < v.end() ; i++)
    {
        if( (*i != *(i+1)) && (*i != *(i-1)) )
        {
            return i;
        }
    }
    return v.begin() -1;
}

int main()
{   
    vector<int> v ={6, 1, 3, 3, 3, 6, 6};
    vector<int> x = {13, 19, 13, 13};
    cout << *(nondublicated(v)) << endl;
    return 0;
}