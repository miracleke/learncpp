#include<iostream>
using namespace std;
int main() {
    float x, y;
    int a, b, ans = 0;
    cin >> b;
    for(a = 1;a <= b;a++)
    {
	 cin >> x >> y;
	 if(x<60 ^ y<60) ans++;
    }
    cout << ans << endl;

    return 0;
}
