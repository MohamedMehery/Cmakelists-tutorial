#include "binsearch.hpp"
#include "../eigen3/eigen/Dense" // '..' means get back to out directory

int main(void)
{
    vector<int> x = {1,2,3,4,6};
    cout<< *binsearch<int>(x , x.begin() , x.end() , 6) << endl;
    return 0;
}