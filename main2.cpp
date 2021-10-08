/*Enter your code here. Read input from STDIN. Print your output to STDOUT*/
#include <iostream>
#include <memory>

using namespace std;

class vehicle
{
    protected:
        int number_of_tyres;
    public:
         void Display(void)
        {
            cout << "\nthis is a vehicle\n" << endl;
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
            cout << "\nthis is a car\n" << endl;
        }
        void set_num_of_tyres(int n)
        {
            number_of_tyres = n;
        }
};

int main()
{
	//Write code here
	//unique_ptr<car> cptr1 (new car);

    unique_ptr<vehicle> vptr1( new vehicle);
    car c1;
    //vptr1 = move(&c1); //error can't copy unique_ptr
    vptr1->Display();

}
