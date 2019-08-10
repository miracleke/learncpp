#include<iostream>
using namespace std;
int main() {
    int a;
    cin >> a;
    if(a > 100 || a < 0)
    {
	    cout << "Error!" << endl;
	    return 1;
    }
    if(a >= 90) cout << "A" << endl;
    if(a >= 80 && a < 90)  cout << "B" << endl;
    if(a >= 70 && a < 80) cout << "c" << endl;
    if(a >= 60 && a < 70) cout << "D" << endl;
    if(a < 60) cout << "E" << endl;

    return 0;
}



