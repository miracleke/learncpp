#include<iostream>
#include<cstring>
const int MAXN = 10001;
using namespace std;
int main() {
    int a[MAXN];
    int n, k;
    int i, j;
    memset(a, 0, sizeof(a));
    cin >> n >> k;
    for(i = 2; i <= k; i++)
	    for(j = 1; j <= n; j++)
		    if(j % i == 0) a[j] = !a[j];
    for(i = 1; i <= n; i++)
	    if(!a[i])
		    cout << i << " ";
    cout << endl;
    return 0;
}
