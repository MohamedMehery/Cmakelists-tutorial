/*Enter your code here. Read input from STDIN. Print your output to STDOUT*/
#include <iostream>
using namespace std;
int main()
{
	//Write code here
	string s ; int fst, snd ;
	cin >> s ;
	cin >> fst; 
	cin >> snd; 

	for(int i = fst ; i <= snd ; i++)
	{
		cout << s[i] ;
	}
	cout << endl;
}
