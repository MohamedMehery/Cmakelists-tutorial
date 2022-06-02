#include <iostream>
#include <memory>
#include <vector>

using namespace std;

class Sample
{
    public:
    void func()         {cout << "1" << endl;}
    void func()const     {cout << "2" << endl;}
};

struct SampleStruct
{
    /* data */
    vector<Sample> a ;
    unique_ptr<Sample> b;

    SampleStruct() : a(1) , b(new Sample())
    {
    }

};




int main()
{
    cout << "Hello CMake!" <<endl;
    SampleStruct x;
    const SampleStruct &y = x;

    x.a[0].func();
    x.b->func();

    y.a[0].func();
    y.b->func();

    return 0;
}