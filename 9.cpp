#include<iostream>
using namespace std;
int main() {
    int n = 0,x;
    cin >> x;
    for(n = 0;x != 0;x&= x-1)
	    n++;
    cout << n << endl;

    return 0;
}
