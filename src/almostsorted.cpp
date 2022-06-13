#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
template <class T>
 void swapp(T& a , T& b)
 {
     T temp = a;
     a = b;
     b = temp;
 }

 void print_vector(const vector <int> &arr)
{
    for(auto i : arr)
    cout << "\t" << i;
    cout << endl;
}

int type_0_1_2( vector<int> & arr , vector<int> &l_r)
{
    if ( is_sorted(arr.begin() , arr.end()) )
    {
        return 0;
    }
    bool first =0;
    int count = 0;
    print_vector(arr);
    for(size_t i = 0 ; i < arr.size() -1 ; i++)
    {
        if(arr[i] > arr[i+1])
        {
            swapp<int>(arr[i] , arr[i+1]);
            print_vector(arr);
            count++;
            if(!first)
            {
                first = 1;
                l_r[0] = i;
                l_r[1] = i+1;
            }
        }
        else 
        {
            l_r[1] = i;
        }
    }
    //cout << l_r[1] - l_r[0] + 2 << endl;    
    if(count > 1 && (l_r[1] - l_r[0] + 2 == arr.size() )) 
    { 
        return -1;
    }
    if(count == 1) return 1;
    else if(count > 1) return 2;
    else return 0;
}

void almostSorted(vector<int> arr) {
    vector<int> l_r = {0 , 0};
    int type = type_0_1_2(arr,l_r);
    if ( (type == -1) )
    {
        cout << "no" << endl;
        return ;
    }
    if(type == 0)
    {
       cout<< "yes" <<endl;
    }
    if(type == 1)
    {
       cout<< "yes" <<endl;
       cout <<"swap " <<l_r[0]+1 << ' ' << l_r[1]+1 << endl;
    }
    if(type == 2)
    {
       cout<< "yes" <<endl;
       cout <<"reverse " <<l_r[0]+1 << ' ' << l_r[1]+1 << endl;
    }
}

int main()
{
    vector<int> arr = {3 ,1 ,2};
    almostSorted(arr);
    return 0;
}