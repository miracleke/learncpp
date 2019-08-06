#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    cout << n << "=";
    for(int i = 2; i <= n; i++)
       for(; n % i == 0;)
       {
	    n = n / i;
	    cout << i;
	    if(n != 1)  cout << "*";
       }
    cout << endl;
    return 0;
}
