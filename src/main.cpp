#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

class Base
{
    private:
        int count;
    public:
        Base() : count(0)
        {
            cout << "\tContructor!" << endl;
        }
        Base(int init) : count(init)
        {
            cout << "\tContructor!" << endl;
        }
        Base & operator=(Base & b)
        {
            cout << "\tAssignment!" <<endl;
            return *this;
        }
        Base( Base & b)
        {
            this->count = b.count;
            cout << "\tCopy contructor!" <<endl;
        }
        ~Base()
        {
            cout<< "\tDistructor!" << endl;
        }
};

int main()
{
    Base b1(2) , b2;
    b2 = b1;
    Base b3(b1);

    return 0;
}