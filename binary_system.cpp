#include<iostream>
using namespace std;
int main() {
    int  n, num = 0;
    cin >> n;
    do
    {
	if( n % 2 != 0)   cout << 1;
	else   cout << 0;
	n /= 2;
    }
    while(n != 0);
    cout << endl;   

    return 0;
}
