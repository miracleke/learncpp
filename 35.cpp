#include<iostream>
using namespace std;
int main() {
    int a[10];
    int i, h, n = 0;
    for(i = 0; i <= 9; i++)
	  cin >> a[i];
    cin >> h;
    h += 30;
    for(i = 0; i <= 9; i++)
	    if(h >= a[i])  n++;
    cout << n << endl;

    return 0;
}
