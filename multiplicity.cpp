#include<iostream>
using namespace std;
int main() {
    int n, m, i;
    cin >> n;
    for(m = 2; m <= n; m++)
    {
	 i = 2;
	 while(m % i != 0 && i <= m - 1)
             i++;
	 if(i > m - 1)  cout << m << "  ";
    }
    cout << endl;

    return 0;
}
