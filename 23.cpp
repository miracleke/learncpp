#include<iostream>
using namespace std;
int main() {
    int i, b, c = 1;
    cin >> i;
    for(b = 1; b <= i; b++)
    {
	  c *= 2;
    }
    cout << c << endl;
    return 0;
}
