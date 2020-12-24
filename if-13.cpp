#include <iostream>

using namespace std;

int main()
{
	int v1, p1;
	cout << "Enter taxi's velocity and price" << endl;
	cin >> v1 >> p1;
	int v2, p2;
	cout << "Enter velocity and price of a bus" << endl;
	cin >> v2 >> p2;
	int v3;
	cout << "Enter person's velocity" << endl;
	cin >> v3;
	double S, T;
	cout << "Enter needed distance and time" << endl;
	cin >> S >> T;
	if (S / v3 <= T) {
		cout << "Go by foot" << endl;
	}
	else if (S / v2 <= T) {
		cout << "take a bus for " << S * p2 << endl;
	}
	else if (S / v1 <= T) {
		cout << "Take a taxi for " << S * p1 << endl;
	}
	else {
		cout << "It's impossible" << endl;
	}
	system("pause");
}