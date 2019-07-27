#include<iostream>
using namespace std;
int main() {
    int a, b, c;
    cout << "现有两家店，大洋商打８８折，百汇商厦买８送１．输入买被子的个数，输出那家店更划算，并输出价格.\n";
    cin >> a;
    b = a * 3 * 0.88;
    c = (a-a/8) * 3;
    if(b < c)
    {
	    cout << " 大洋商." << " " << b << endl;
    }    else  cout << "百汇商厦．" << " " << c << endl;


    return 0;
}
