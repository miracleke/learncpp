#include<iostream>
using namespace std;
int main() {
    int n, i;
    cin >> n;
    i = 2;
    while(n % i != 0 && i <= n - 1)
    {
	 i++;
    }     
    if(i > n - 1 && n!=2)  cout << "Yes" << endl;
    else if(i <= n - 1 && n != 4) cout << "No" << endl;
    if(n == 2) cout << "No" << endl;
    if(n == 4) cout << "Yes" << endl;

    return 0;
}
