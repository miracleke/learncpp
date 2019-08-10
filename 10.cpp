#include<iostream>
using namespace std;
int main() {
    int a, b, c, d, e, f;
    cin >> a >> b;
    c =a & b;
    d =a ^ b;
    while(c)
    {
	 e = d;
	 f = c<<1;
	 c = e&f;
	 d = e^f;
    }
    cout << d << endl;

    return 0;
}
