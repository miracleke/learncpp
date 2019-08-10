#include<iostream>
using namespace std;
int const MAXN = 10001;
int main() {
    int a[MAXN];
    int i, n, maxa, k;
    cin >> n;
    for(i=1;i<=n;i++)
	 cin >> a[i];
    maxa = a[1];
    k = 1;
    for(i = 2;i <= n; i++)
      if(a[i]>maxa)
      {
	  maxa = a[i];
	  k = i;
      }
    cout << k << endl;

    return 0;
}

