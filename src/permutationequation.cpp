#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> permutationEquation(vector<int> p) {
    vector<int> result;
    for(auto x = 1 ; x <= p.size()  ; x++)
    {
        //auto f = find(p.begin() , p.end() , x);
        //cout << "p(y) = "  << f - p.begin() << endl;
        auto e = find(p.begin() , p.end() , *(p.begin() + x-1) );
        //cout << " y = " << e - p.begin()  << endl;
        auto g = find(p.begin() , p.end() , *(p.begin() + *(e)-1) );
        result.push_back(e-p.begin()+1);
    }
    return result;
}

int main()
{
    vector<int> p = { 4, 3, 5 ,1 ,2};
    auto result = permutationEquation(p);
    for(auto i : result)
    {
        cout << "\t" << i <<endl;
    }
    cout <<endl;

    return 0;
}