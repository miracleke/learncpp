#include<iostream>
#include<cmath>
using namespace std;
int main() {
    int n, x, y, t, rest;
    cout <<"I put in n apples, the worm eats one for every x hours, and after y hours, I put out the number that's left.\n";
    cin >> n >> x >> y;
    t = ceil((double) y / x);
    if(t < n) rest = n - t;
    else rest = 0;
    cout << rest << endl;

    return 0;
}
