#include<iostream>
using namespace std;
int main() {
    int n;
    cout <<"n = ";
    cin >> n;
    switch(n)
    {
	 case 1: cout << "f = n" << endl;    break;
	 case 2: cout << "f = n * n" << endl;    break;
	 case 3: cout << "f = n * n * n" << endl;   break;
	 default: cout << "f = o";
    }
    return 0;
}
