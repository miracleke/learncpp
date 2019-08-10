#include<iostream>
using namespace std;
int main() {
    int a, b, c;
    long long s = 1, i = 0;
    cin >> a >> c;
    for(b = 1; b <= c; b++)
    {
	 s *= a;
    }
    i = s % 10;
    cout << i << endl;

    return 0;
}
