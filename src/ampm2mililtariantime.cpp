#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <set>
#include <assert.h>

using namespace std;

int main()
{
    string s = "12:03:00PM ";
    string hours;
    assert(s.length() == 11);
    for(auto i = s.begin(); i < (s.begin() + 2) ; i++)
    {
        hours += *i;
    }
    auto hrs = stoi(hours);
    auto location = find(s.begin() , s.end() ,'P');
    if(location != s.end() )
    {
        hrs +=12;
        auto hr = to_string(hrs);
        s[0] = hr[0];
        s[1] = hr[1];
        if(s[0] == '2' && s[1] == '4')
        {
            s[0] = '1';
            s[1] = '2';
        }
        cout << s << endl;
    }
    else
    {
        if(s[0] == '1' && s[1] == '2')
        {
            s[0] = '0';
            s[1] = '0';
        }
        cout << s << endl;
    }
    return 0;
}