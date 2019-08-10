#include<iostream>
using namespace std;
int main() {
    int a, b, c, d;
    for(a = 1; a <= 4; a++)
     for(b = 1; b <= 4; b++)
     if(a != b)
       for(c = 1; c <= 4; c++)
       if(a != c && b != c)
      {
	  d = 1 + 2 + 3 +4 - a - b - c;
	  if((a == 3) ^ (b == 4) && (b == 1) ^ (d == 4) &&(c == 4) ^ (d == 3)          && (d == 2) ^ (a == 1))
	  cout << a << b << c << d << endl;
      }
    return 0;
}









return 0;
}
