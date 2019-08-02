#include<iostream>
using namespace std;
int main() {
    int a, b, c, e, f, g;
    cin >> a >> b >> c;
    e = (a > b) ? a : b;
    f = (c > a) ? c : a;
    g = (e > f) ? e : f; 
    cout << g << endl;

    return 0;
}
