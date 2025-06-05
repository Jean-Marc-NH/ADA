#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <utility>

using namespace std;


int main()
{
	int x,y; cin >> x;

	vector<vector<int>> datos(x);
	set<int> s;

	vector<int> rpta;

	for (int i{ 0 }; i < x; i++)
	{
		int a, b;
		cin >> a >> b;
		s.insert(b);
		datos[i] = { b,a,i };
	}

	cin >> y;

	int max = 0;

	for (auto b : s)
	{
		int m = 0;
		int in = 0;
		for (auto a : datos)
		{
			if (a[0] == b && m < a[1])
			{
				m = a[1];
				in = a[2];
			}
		}
		max += m;
		rpta.push_back(in);
	}

	cout << max << endl;

	for (int a : rpta)cout << a+1 << " ";

	return 0;
}
