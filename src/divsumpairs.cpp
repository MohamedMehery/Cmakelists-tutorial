#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int divisibleSumPairs(int n, int k, vector<int> ar) {
    int count = 0;
    sort(ar.begin(), ar.end());
    for(auto j = 0 ; j < ar.size() ; j++)
    {
        for(auto i = 0 ; (i< ar.size()) && (i < j); i++)
        {
        if ((ar[i] + ar[j]) % k == 0) {
            count++;
            cout << '\t' << ar[i] << '\t' << ar[j] << endl;
            //cout<< '\t' << i << '\t' << j << endl;
        }
        }
    }
return count;
}
int main()
{   int size,temp;
    vector<int> arr ;
    cin>>size;
    while(size--)
    {
        cin >> temp;
        arr.push_back(temp);
    }
    divisibleSumPairs(arr.size() , 3 , arr);
    return 0;
}