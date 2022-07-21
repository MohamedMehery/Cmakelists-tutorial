#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <numeric>
#include <string>

using namespace std;

template <typename T>
typename vector<T>::iterator binsearch( vector<T> &v ,typename vector<T>::iterator start 
            ,typename vector<T>::iterator last ,const T &elem)
{
    if(last>=start)
    {
        auto mid = last - (last - start)/2 - v.begin();
        if(v[mid] == elem) return mid + v.begin() ;
        if(v[mid] > elem )
        {
            last = v.begin() + mid;
            return binsearch(v , start , last , elem);
        }
        else
        {
            start = v.begin() + mid;;
            return binsearch(v , start, last , elem);
        }
    }
    cout <<"\tNot found" <<endl;
    return v.begin()-1;
}

