#include<iostream>
using namespace std;
int main() {
    int x, y;
    cin >> x >> y;
    cout << (x & y) + ( (x ^ y) >> 1) << endl;

    return 0;
}
