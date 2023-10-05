#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double x; cout << "X= ";  cin >> x;
	double y; cout << "Y= ";  cin >> y;
	double R1; cout << "R1= ";  cin >> R1;
	double R2; cout << "R2= ";  cin >> R2;
	if (((x <= 0 && y >= 0) && (y <= 0.25 * 3.14 * pow(R1, 2)) && (y >= x)) ||
		((x >= 0 && y <= 0) && y <= 0.25 * 3.14 * pow(R2, 2) - (0.25 * 3.14 * pow(R1, 2)) && y <= x))
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
		cin.get();
		return 0;
}