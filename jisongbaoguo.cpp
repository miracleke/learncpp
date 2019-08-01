#include<iostream>
#include<iomanip>
using namespace std;
int main() {
    int a, b;
    cin >> a;
    if(a > 30)
    {
	cout << "Fail" << endl;
        return 1;
    } 
    if(a <= 10)  cout << fixed << setprecision(2) << 0.2 + a * 0.8 << endl;
    else if(a > 10 && a <= 20)   cout << fixed << setprecision(2) << 0.2 + a * 0.75 << endl;
    else if(a > 20 && a <= 30)   cout << fixed << setprecision(2) << 0.2 + a * 0.70 << endl;


    return 0;
}
