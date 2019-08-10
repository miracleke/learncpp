#include<iostream>
using namespace std;
int main() {
    int ans = 0, i, n, x, tmp;
    cin >> n >> x;
    for(int i = 1; i <= n; i++)
    {
	 tmp = i;
	 while(tmp >= 1)
         {
	      if(tmp % 10 == x) ans++;
	      tmp /= 10;
	 }
    }    
    cout << ans << endl;
    
    return 0;
}

