#include "inc/binsearch.hpp"
#include "inc/calc.hpp"
#include "lib/lib.hpp"
#include <sstream>
#include <stdio.h>
//#include "defaultconfig.h"
#include <gtest/gtest.h>

using namespace std;


int main(int argc , char ** argv)
{
    testing::InitGoogleTest(&argc , argv);

    int x ;//= sum(5,3);
    stringstream ss;
    ss << x;
    std::cout << "\tHello world\tsum output " << ss.str().length() << std::endl;

    //lib_init();
    ////////////////////////////////////////////////////////////////////
    // std::cout << "\tproduct_type " << product_type << endl;
    // std::cout << "\tHello_app_version_minor " << Hello_app_version_minor << endl;
    // std::cout << "\tHello_app_version_major " << Hello_app_version_major << endl;

    // #ifdef DEBUGE_INFO
    //     cout << DEBUGE_INFO << endl;
    // #endif
    // std::cout << "\ttarget compile definitions STDCXX = " << STDCXX << endl;

    return RUN_ALL_TESTS();
}