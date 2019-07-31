#include<iostream>
using namespace std;
int main() {
    double a, b, c;
    cout << "input distance, output bike or walk fast.\n";
    cin >> a;
    b = 50 + a / 3.0;
    c = a / 1.2;
    if(b > c)
	 cout << "Walk!" << endl;
    else 
    {
    if(b < c)
	 cout << "Bike!" << endl;
     
    else cout << "The same!" << endl;
    }
    return 0;
}
