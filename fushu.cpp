#include<iostream>
using namespace std;
int main() {
    int a;
    cout << " please enter a number.\n";
    cin >> a;
    if(a<0) 
    {
	    cout << "注意负数." << endl;
    }   else  cout << a << endl;


    return 0;
}
