#include<iostream>
using namespace std;
int main() {
    int x, a, b, c;
    for(x=100;x<=999;x++)
    {
	 a = x / 100;
	 b =(x - a * 100) / 10;
	 c = x % 10;
         if(a*a*a+b*b*b+c*c*c==x)
         cout << x << endl;
    }
     
    return 0;
}
