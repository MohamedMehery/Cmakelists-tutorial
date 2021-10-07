/*Enter your code here. Read input from STDIN. Print your output to STDOUT*/
#include <iostream>
using namespace std;

class vehicle
{
    protected:
        int number_of_tyres;
    public:
        void Display(void)
        {
            cout << "this is a vehicle" << endl;
        }
};

class bike : public vehicle
{
    public:
        void Display(void)
        {
            cout << "this is a bike" << endl;
        }
        void set_num_of_tyres(int n)
        {
            number_of_tyres = n;
        }
};

class car : public vehicle
{
    public:
        void Display(void)
        {
            cout << "this is a car" << endl;
        }
        void set_num_of_tyres(int n)
        {
            number_of_tyres = n;
        }
};

int main()
{
	//Write code here
	unique_ptr<car> cptr1 (new car);
    cptr1->Display();



}
