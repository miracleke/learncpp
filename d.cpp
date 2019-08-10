#include<iostream>
using namespace std;
int main() {
    int a, b;
    while(a + b != 0)
    {
	    cin >> a >>b;
	    cout << a + b;
	    if(a + b == 0)   break;
    }
    cout << endl;
    return 0;
}
