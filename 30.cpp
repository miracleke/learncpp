#include<iostream>
#include<cmath>
using namespace std;
int main() {
    int n, x, y, i;
    cin >> n;
    if(n % 2 != 0)
    {
	    cout << "Error!" << endl;
	    return 1;
    }
    for(x = 3; x <= n; x += 2)
    {
	for(i = 2; i <= sqrt(x); i++)
	   if(x % i == 0)
	      break;
	if(i > sqrt(x)) y = n - x;
	else break;
	for(i = 2; i <= sqrt(y); i++)
		if(y % i == 0) break;
	if(i > sqrt(y)) cout << n << "=" << x << "+" << y << endl;
    }
    return 0;
}
