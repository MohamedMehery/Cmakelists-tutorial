#include <iostream>
#include <vector>
#include <numeric>  //max_element , accumulative
#include <algorithm>
#include <algorithm>

using namespace std;

void printvector( vector <int > & c)
{
    for(auto i : c)
    {
        cout << "\t" << i;
    }
    cout << endl;
}

int workbook(int n, int k, vector<int> arr) {
    vector< vector<int> > pages;
    int cont = 0;
    bool flag = 0;
    for(int i = 0 ; i < arr.size() ; i++)
    {
        for(auto iter =0 ; 
        iter < (arr[i] / k )  ; iter++)
        {            
            pages.push_back( vector<int>(0));
            for(auto j = 0 ; j < k ; j++)
            {
                (pages.end()-1)->push_back(j+1+k*iter);
            }
            flag = 1;
        }
        if( arr[i] % k > 0)
        {
            pages.push_back( vector<int> (0));
            for(auto j = 0 ; j < (arr[i] % k) ; j++)
            {
                if(!flag)
                (pages.end()-1)->push_back(j+1);
                else
                (pages.end()-1)->push_back(k*(arr[i] / k)+j+1);
            }
        }

        flag = 0;
    }
    for(auto i = 0 ; i < pages.size() ; i++)
    {
        printvector(pages[i]);
        for( auto iter = 0 ; iter < pages[i].size() ; iter++)
        {
            if(pages[i][iter] == (i+1))
            {
                cont++;
            }
        }
    }
    return cont;
}


int main()
{
    vector<int>v = {4, 2, 6, 1, 10};
    cout << workbook( 5 , 3 , v ) << endl;
    return 0;
}