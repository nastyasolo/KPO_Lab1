#include <iostream>
using namespace std;
int main()
{
	int n, XYZ[3]{}, x = 0, y = 0, z = 0, perem = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> perem;
			XYZ[j] = perem;
		}
		x += XYZ[0];
		y += XYZ[1];
		z += XYZ[2];

	}
	if (x == 0 && y == 0 && z == 0)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
}
