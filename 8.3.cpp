#include<iostream>
using namespace std;
int main() {
    int x=3, y=5;
    x ^= y;
    y ^= x;
    x ^= y;
    cout << x <<"  "<< y << endl;

    return 0;
}
