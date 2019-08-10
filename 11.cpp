#include<iostream>
using namespace std;
int main() {
    int a , b, n; 
    long long c = 1; 
    int j = 0;
    cin >> a >> b;
    for(n = 1; n <= b; n++)
    { 
       c *= a;
    }
     do
    {
       j++;
       c /= 10;
    }
    while(c != 0);
    cout << j << endl;


    return 0;
}
