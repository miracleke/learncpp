#include<iostream>
using namespace std;
int main() {
    int a, b, c, d;
    cin >> a >> b;
    do
    {
	c = a ^ b;
	d =(a & b) << 1;
	a = c;
	b = d;
    }
    while(b != 0);
    cout << a << endl;

    return 0;
}
