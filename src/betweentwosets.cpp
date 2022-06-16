#include <iostream>
#include <vector>

using namespace std;

int getTotalX(vector<int> a, vector<int> b) {
    auto a1 = * (a.end() - 1); auto b1 = b[0];
    int numx = 0;
    bool aflag = 0 , bflag = 0;
    for(auto iter = a1 ; iter <= b1 ; iter++)
    {
        for(auto i : a)
        {
            if( iter % i == 0)
            {
                // Nothing
            }
            else {
            aflag = true;
            }
        }
        for(auto i : b)
        {
            if( i % iter == 0)
            {
                // Nothing
            }
            else {
            bflag = true;
            }
        }   
        if((!aflag) && (!bflag))
        {
            numx++;
        }     
        aflag = 0;
        bflag = 0;
    }

    return numx;
}

int main()
{
    vector<int> a = {2 , 4};
    vector<int> b = {16 , 32 , 48};
    int result = getTotalX(a,b);
    cout << "\t" << result << endl;

    return 0;
}