#include<iostream>
using namespace std;
int main() {
    int i, j, k;
    cin >> i;
    for(k = 1;k <= i; k++)
    {
	 for(j = 1;j <= k; j++)
	    cout << "*";
	 cout << endl;
    }

    return 0;
}
