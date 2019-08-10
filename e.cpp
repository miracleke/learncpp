#include<iostream>
using namespace std;
int main() {
    int a, i, b = 0;
    for(i = 1; i <= 3; i++)
    {
	    cin >> a;
	    if(a > b) b = a;
    }
    cout << b << endl;

    return 0;
}
