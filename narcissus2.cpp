#include<iostream>
#include<cmath>
using namespace std;
int main() {
    int x, a, b, c;
    for(a = 1;a <= 9; a++)
      for(b = 0;b <= 9; b++)
	 for(c = 0;c <= 9; c++)
         {
           x = a * 100 + b * 10 + c;
           if(pow(a,3) + pow(b,3) + pow(c,3) == x)
	 	cout << x << endl;
         }

    return 0;
}
