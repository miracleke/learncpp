#include<iostream>
using namespace std;
int main() {
    int n, num = 0;
    cin >> n;
    do
    {
	 num++;
	 n>>=1;
    }
    while(n != 0);
    cout << num << endl;

    return 0;
}

