#include<iostream>
#include<cstring>
using namespace std;
int const SIZE = 100;
int main() {
    int n, i, sum, x, a[SIZE];
    cin >> n;
    memset(a, 0, sizeof(a));
    for(i = 1; i <= n; i++) {
	    cin >> x;
	    a[x]++;
    }
    i = 0;
    sum = 0;
    while(sum < (n / 2 + 1)) {
       i++;
       sum += a[i];
    }
    cout << i << endl;

    return 0;
}
