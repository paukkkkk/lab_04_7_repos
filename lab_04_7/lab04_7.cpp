#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() 
{
	double x, xp, xk, dx, eps, a = 0, R = 0, S = 0, res = 0;
	int n = 0;
	double Pi = acos(-1.0);


	cout << "xp="; cin >> xp;
	cout << "xk="; cin >> xk;
	cout << "dx="; cin >> dx;
	cout << "eps="; cin >> eps;
	
	cout << fixed;

	cout << "-------------------------------------------------" << endl;
	cout << "|" << setw(8) << "x   " << " |"
		<< setw(13) << "acos(x) " << " |"
		<< setw(10) << "S   " << " |"
		<< setw(8) << "n  " << "  |"
		<< endl;
	cout << "-------------------------------------------------" << endl;

	x = dx;

	while (x <= xk)
	{
		n = 0;
		a = x;
		S = a;
		do
		{
			n++;
			R = (((x * x) * (2 * n - 1) * (2 * n - 1)) / ((2 * n) * (2 * n + 1)));
			a *= R;
			S += a;
		} 
		while (abs(a) >=  eps);
		res = (Pi / 2.0) - S;


		cout << "|" << setw(8) << x << " |"
			<< setw(12) << acos(x) << "  |"
			<< setw(9) << res << "  |"
			<< setw(7) << n << "   |"
			<< endl; 
		x += dx;

		cout << "-------------------------------------------------" << endl;


	}

	cin.get();
	return 0;
}