#include <iostream>
#include <exception>

using namespace std;

int main()
{
    double x;
    cout << "Enter positive number!";
    cin >> x ;cout << endl;
    try{
        if(x < 0)
            throw(x);

        else
            cout << "Thank u :)" <<endl;
    }
    catch(double x)
            {cout << "negative number!" <<endl; abort();}
    return 0;
}