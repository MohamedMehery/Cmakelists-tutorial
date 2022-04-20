#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

/*
 * Complete the 'isValid' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string isValid(string s)
{
	int maxfreq = 1;
	int minfreq = 1;
	int count = 0;
	sort(s.begin(), s.end());
	for (int i = 0; i < s.length() - 1; i++)
	{
		if (s[i] == s[i + 1])
		{
			minfreq++;
			if (minfreq > maxfreq)
			{
				maxfreq = minfreq;
				count++;
			}
		}
		else
		{
			minfreq = 0;
		}
	}
	if ((maxfreq - minfreq > 1))return "NO";

	return "YES";
}

int main()
{
	string s;
	cout << "\tEnter the test string!" << endl;
	cin >> s;

	string result = isValid(s);

	cout << "\t" << result << endl;

	return 0;
}
