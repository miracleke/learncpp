#include<iostream>
#include<iomanip>
using namespace std;
int main() {
    int a, e, f, g;
    int const b = 500;
    int const c = 600;
    int const d = 800;
    cout << "Input the donation amount, output the trees that can be planted, and figure out the number of trees that can be planted.\n";
    cin >> a;
    if(a <= 100000)
    cout << "可以种植梨树" << a / b << "棵" << endl;
    if(a > 100000)
    {    
         cout << "可以种植梨树" << setprecision(15) << 0.3 * a / b << "棵" << endl;
	 cout << "可以种植桃树" << setprecision(15) << 0.5 * a / c << "棵" << endl;
	 cout << "可以种苹果树" << setprecision(15) << 0.2 * a / d << "棵" << endl;
    }

    return 0;
}
