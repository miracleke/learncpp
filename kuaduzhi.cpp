#include<iostream>
using namespace std;
int main() {
    cout << "Input any number of non-negative integers, output the maximum span value.\n";
    cout << "Enter -1 to abort.\n";
    int b, c, n, i;
    long long a;
    b = 0;
    a = 99999999999;    
    for(i = 1;i <= 10000000000;i++)
    {
     cin >> n;
    if(n == -1 )  break;
    else if(n > b) b = n;
    else if(n < a) a = n;
    }
    c = b - a;
    cout << b << "   " << a << endl;
    cout << c << endl;

    return 0;
}


