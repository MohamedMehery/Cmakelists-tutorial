#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
template <class T>
T maximumof(vector<T> v)
{
    T oldmax = 0;
    for(auto i : v)
    {
        if(i > oldmax)
        {
            oldmax = i;
        }
    }
    return oldmax;
}

int designerPdfViewer(vector<int> h, string word)
{
    int area = 0;
    vector<int> char_index;
    vector<int> heights;
    for( auto i = 0 ; i < word.length() ; i++)
    {
        char_index.push_back( static_cast<int> (word[i]-97) );
        
    }
    for(auto i = 0 ; i < word.length() ; i++)
    {
        heights.push_back( h[ char_index[i] ] );
        cout << heights[i] << endl;
    }
    auto mx = maximumof(heights );
    area = (mx) * (word.length());
    return area;//Area in mm2
}


int main()
{
    vector<int> heights = {1, 3, 1 ,3, 1 ,4, 1, 3, 2, 5 ,5, 5 ,5 ,5 ,
    5 ,5 ,5 ,5 ,5 ,5 ,5 ,5 ,5 ,5, 5 ,5};
    cout << designerPdfViewer(heights , "abc") << endl;
    return 0;
}