#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

typedef struct
{
    string name;
    void(*pf)(void *ptr);
}OOP;

void sayname(void* ptr)
{
    OOP* obj = (OOP*) ptr;
    cout << '\t' << obj->name << endl;
}

void changetoupper(string & s)
{
    for(auto & iter : s)
    {
        iter -= ('a' - 'A');
    }
}

int main(void)
{
    OOP O1;
    O1.name = "Mohammed" ;
    O1.pf = &sayname;
    O1.pf(&O1);
    string rand = "molmwjknknknkidqodjn";
    changetoupper(rand);
    cout << rand << endl;
    return 0;
}