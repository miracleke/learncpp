#include<iostream>
using namespace std;
int main() {
    float p, a, z;
    int j;
    cout << "输入单价:";
    cin >> p;
    cout << "输入购买件:";
    cin >> j;
    if(j < 5)   z = 1;
    else if(j >= 5 && j < 10)   z = 0.9;
    else   z = 0.8;
    a = p * j * z;
    cout << "单价:" << p << "   " << "件数" << j << "   " << "折扣:" << z << "   " << "总价" << a << endl;
    
    return 0;
}
