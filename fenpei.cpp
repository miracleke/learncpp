#include<iostream>
using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b;
    c = a + b;
    if(c < 10)
        cout << "water" << endl;
    if(c >= 10 && a > b)
	cout << "tree" << endl;
    if(c >= 10 && a <= b)
	cout << "tea" << endl;

    return 0;
}

