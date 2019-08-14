#include<iostream>
#include<iomanip>
using namespace std;
int main() {
    int n, i; 
    float m, j, sum;
    cin >> m >> n;
    j = m;
    for(i = 1; i <= n; i++)
    {
	  sum += m * 2;
	  m /= 2.0;
    }
    cout << fixed << setprecision(2) << m << "   ";
    cout << fixed << setprecision(2) << sum - j << endl;
    return 0;
}
