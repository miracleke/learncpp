#include<iostream>
using namespace std;
int main() {
    int a, b, c, d, e, f, g, h, j;
    cout <<"Count the time it takes for a bus to travel from the starting station to the end\n";
    cin >> a >> b >> c >> d;
    e = c * 60 + d;
    f = a * 60 + b;
    g = e - f;
    h = g / 60;
    j = g % 60;
    if(a<0||a>24||b>60||b<0||c<0||c>24||d>60||d<0)
    {
    cout << "Error!" << endl;
    return 1;
    }
    cout << h << "小时" << " " << j << "分钟" << endl;


    return 0;
}






