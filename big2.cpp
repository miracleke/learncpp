#include<iostream>
using namespace std;
int main() {
    int a, b, c, d;
    cout << "输入三个数:" << endl;
    cin >> a >> b >> c;
    if(a > b && a > c)     d = a;
    else   if(b > a && b > c)    d = b;
    else  d = c;
    cout << "最大的数是:" << d << endl;


    return 0;
}
