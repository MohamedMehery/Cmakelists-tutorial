#include <iostream>

using namespace std;

int main()
{
    double *ptr = new double(23.032); /* ptr points to a value  23.032*/
    double *arrptr = new double[5];

    for(int i = 0 ; i < 5 ; i++)
    {
        *ptr =++ *ptr;
        *(arrptr + i) = *ptr;
        cout << *ptr << endl;
        cout << *(arrptr+i) << endl; 
    }
    delete ptr;
    delete[] arrptr;
    return 0;
}