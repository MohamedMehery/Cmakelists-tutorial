#include "binsearch.hpp"
#include "../eigen3/eigen/Dense"

using namespace std;
using namespace Eigen;

void matrices_types_example(void)
{
    //Dynamic resizable - x for unknown size located in heap - d for double
    Eigen::MatrixXd mXxX;      //we use it for a matrix larger than 32 elements

    //Fixed size matrix f for float - 4 is 4x4 matrix stored on the stack
    Eigen::Matrix4f f4x4;
    Eigen::MatrixXi Mxxx;
    Eigen::MatrixXd Gxxx(4,4);

    cout << f4x4.size() << endl;
    //f4x4.resize(2,8); this is illegal
    mXxX.resize(2,4);
    cout << mXxX.size() << endl;
    cout << sizeof(mXxX) << endl; // size of matrix object is constant for all objects;
    mXxX<< 1,2,3,4,
            5,6,7,8 ;
    f4x4 = Matrix4f::Random();      //must be of same type of matrix of runtime Error
    cout << f4x4 << endl;
    cout << mXxX << endl;

    Mxxx = MatrixXi::Random(4,12);

    Gxxx = MatrixXd::Constant(4,16,1.6);
    cout << Mxxx << endl;
    cout << Gxxx << endl;
}

void linear_algebra(void)
{
    Matrix<float , 1 , 2 > m1 ;
    m1 << 1,2;
    Matrix<float , 2, 4 > m2 ;
    m2 << 1,1,1,1,
           1,1,1,1;
    MatrixXf f = m1*m2;     //if we swap m1, m2 it will crash
    cout << f.transpose() << endl;
    cout << Eigen::sin(f.array()) << endl;

    /////////////////////////////////////////////////
}


int main()
{
    //matrices_types_example();
    linear_algebra();

    return 0;
}
