#include<iostream>
using namespace std;
int main() {
    int x, a, b, c, d;
    cin >> x;
    a = x / 6;
    switch(x % 6)
    {
	 case 0:b = 0,c = 0,d = 0;    break;
	 case 1:a = a - 2,b = 1,c = 0,d = 0;    break;
	 case 2:a = a - 3,b = 0,c = 0,d = 1;    break;
	 case 3:a = a - 2,b = 0,c = 1,d = 0;    break;
	 case 4:a = a - 4,b = 1,c = 1,d = 0;    break;
	 case 5:a = a - 5,b = 0,c = 1,d = 1;    break;
    }

    cout << "6元:" << a << "  " << "13元:" << b << "  " << "15元:" << c << "  " << "20元:"<< d << endl;
   
    
    return 0;
}
