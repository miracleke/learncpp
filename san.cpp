#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main() {
	int a, b, c, f, d, e, g, A, B, C;
	cout << "输出三角形三边长ａｂｃ（保证能构成三角形）(1<=a,c<=10000)，输出三角形的面积\n";
	cout << "a:" << "  ";
	cin >> a;
	cout << "b:" << "  ";
	cin >> b;
	cout << "c:" << "  ";
	cin >> c;
	if(b + c <= a|| a + c <= b || a + b <= c)
        {
                cout << "不能构成三角形." << endl;
                return 1;
        }

	if(a <= 0 || c > 10000)
	{
		cout << "This number is wrong!\n";
	        return 2;	
	}
	f = 0;
	f += (a + b + c)/2;
	A = f - a;    
	B = f - b;   
	C = f - c;

	cout <<"面积是：" << fixed << setprecision(4) << sqrt(f * A * B * C)<< endl;


	return 0;
}
