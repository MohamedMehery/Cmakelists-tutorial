#include<iostream>
using namespace std;

class Sample
{
    static long int total ;
    long int key;
public:
    Sample()
    {
        total++;
        key = total;
        cout << key << "  ";
        check(key);
    }
    void check (long int key)
    {
        if(key >= 2 )
        {
            throw 2;
        }
    }
    ~Sample()
    {
        cout << "~" << key << "  ";
    }
};

long int Sample::total = 0;

int main()
{
    cout << endl;
    try
    {
        Sample array[3];
    }
    catch(int key)
    {
        cout << "!" << key << "  ";
    }
    
    cout << endl <<endl;
    return 0;
}
