#include<iostream>
using namespace std;
int main() {
    int a, b, s, d = 0;
    cin >> a;
    b = 2;
    for(s = 1; s <= a; s++)
    {
          d += b;
	  b = b * 10 + 2;
    }
    cout << d << endl;

    return 0;
}
