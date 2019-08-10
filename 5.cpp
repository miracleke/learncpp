#include<iostream>
using namespace std;
int main() {
    float x, y;
    int n, i, ans = 0;
    cin >> n;
    for(i = 1;i <= n; i++)
    {
	 cin >> x >> y;
	 if(x<60||y<60) ans++;
    }
    cout << ans << endl;
    return 0;
}
