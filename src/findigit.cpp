#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <numeric>

using namespace std;
int findDigits(int n) {
    string s = to_string(n);
    int count=0;
    for(auto i = 0 ; i < s.length() ; i++)
    {
        cout << endl;
        int temp =(s[i] - '0') ;
        if( (temp != 0) &&((n % temp) == 0) )
        {
            count++;
        }
        cout << "\tdigit = " << (char)(temp+'0') << endl;
    }
    return count;
}

int main ()
{
    int n ;
    cin >> n ;
    cout << '\t' <<   findDigits(n) << endl;
    return 0;
}