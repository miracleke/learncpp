#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "n =";
    cin >> n;
    switch(n)
    {
	    case 1:cout << "f = n" << endl;
	    case 2:cout << "f = n * n" << endl;
	    case 3:cout << "f = n * n *n"<< endl;
	  default: cout << "f = 0";
    }

    return 0;
}
