#include<iostream>
using namespace std;
int main() {
    int a, b, gcd;
    cin >> a >> b;
    gcd = (a > b) ? b : a;
    while (gcd > 1 && (a % gcd != 0 || b % gcd != 0))
    gcd--;
    cout<<gcd<<endl;
    return 0;
}
