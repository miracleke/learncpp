#include<iostream>
using namespace std;
int main() {
    int a, b, c;
    char d, e;
    cout << "Input a positive integer, output transformed characters.\n";
    cin >> a;
    b = a % 123;
    c = a % 91;
    d = a;
    e = a;
    if(b >= 97 && b <= 122)
    {
	    cout << d << endl;
    }  else  if(c >= 65 && c <= 90)
    {
	    cout << e << endl;
    } else  cout << "No!" << endl;


    return 0;
}
