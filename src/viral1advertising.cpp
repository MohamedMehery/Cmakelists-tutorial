#include <iostream>
#include <vector>
#include <numeric>  //max_element , accumulative
#include <algorithm>
#include <algorithm>

using namespace std;

int viralAdvertising(int n) {
    int init= 2;
    int inc = 3;
    for(auto i = 2 ; i <= n ;inc += i-1,i++)
    {
        init += inc;
    }
    return init;
}

int main()
{
    int n;
    cin>>n;
    cout << viralAdvertising(n)<<endl;;
    return 0;
}