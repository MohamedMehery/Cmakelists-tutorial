#include <iostream>
#include <cmath>

using namespace std;
/*
 * Complete the 'beautifulDays' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER i
 *  2. INTEGER j
 *  3. INTEGER k
 */
int reverseint(int num)
{
    int maxpowten = 0;
    int tensint = 0;
    int temp = num;
    int rem = 0;
    while(temp > 0)
    {
        rem = rem * 10 + temp % 10;
        temp /= 10;
    }
    return rem;
}
int beautifulDays(int i, int j, int k) {
    int count =0 ;

    for(int iter = i ; iter <= j ; iter++)
    {
        if( (abs(iter - (reverseint(iter))) % k) == 0 )
        {
            count++;  
        }
    }
    return count;
}

int main()
{
    int i , j , k;
    cin >> i ;
    cin >> j;
    cin >> k;
    cout << "\t" << beautifulDays(i , j , k) << endl;

    return 0;
}