#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Ru");
	int m, n;
	cout << "Число m" << endl;;
	cin >> m;
	cout << "Число n" << endl;
	cin >> n;
	if (m != n)
	{
		if (m > n)
		{
			m = n;
		}
		if (n > m)
		{
			n = m;
		}
	}
	else
	{
		m = n;
	}
	cout << m << "";
	cout << n << "";
	return (0);
}
