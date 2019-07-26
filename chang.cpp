#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	double const PI = 3.141592654;
	float radius;
	double area;
	cout << "Input radius, find the area.\n";
	cout << "Radius:" << endl;
	cin >> radius;
	area = PI * radius * radius;
	cout << "Area:" << fixed << setprecision(4) << area << endl;

	return 0;
}
