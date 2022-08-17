#include <stdio.h>
#include <gmock/gmock.h>
#include <gtest/gtest.h>
using namespace std;

/**
 * @brief this function print the commont letter between two arrays of char that sparated by ','
 * 
 * @param arr 
 */

bool ischar(char & c)
{
    if( (c <= 'z')  && (c >= 'a') )
    {
        return true;
    }
    else if( (c <= 'Z')  && (c >= 'A') )
    {
        return true;
    }
    else 
        return false;
}
void printcommont( char * arr[] )
{
    int i = 0 , j = 0;
    bool flag = false;
    for(i = 0 ; arr[0][i] != '\0'; i++)
    {
        for(j = 0 ; arr[1][j] != '\0'; j++)
        {
            if(ischar(arr[1][j]))
            {
                if( arr[0][i] == arr[1][j])
                {
                    if(flag) cout<< " , ";

                    cout<< arr[0][i];
                    flag = true;
                    if(arr[0][i+1] == '\0')
                        flag = 0;
                }
                
            }
        }
    }
    cout << endl;
}
int main(int argc , char ** argv)
{
    char * arr[] = {"a , b , c , d , e" , "a , c , e , f , g"};
    printcommont(arr);
    return 0;
}