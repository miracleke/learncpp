#include<iostream>
#include<iomanip>
using namespace std;
int main() {
    double r, n, i, d;
    double sum;
    cout << "Input number and age, output average age.\n";
    cin >> r;
    sum = 0;
    for(i = 1 ; i <= r; i++)
    {
	 cin >> n;
	 sum += n;
    }
    d = sum / (r * 1.0);
    cout << fixed << setprecision(2) << d  << endl;

    return 0;
}
