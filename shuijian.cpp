#include<iostream>
#include<cmath>
using namespace std;
int main() {
    int a, b, c, d, e;
    cin >> a;
    if(99 > a || a > 999)
	  cout << "Error!" << endl;
    b = a % 10;
    c =(a -(a % 10)) % 100;
    d = a / 100;
    e = pow(b , 3) + pow(c , 3) + pow(d , 3);
    if(e = a)
    {
	  cout << "Yes!" << endl;
    }   else  cout << "No!" << endl;


    return 0;
}
