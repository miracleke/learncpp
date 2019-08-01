#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main() {
    double n, l; 
    int	b, s;
    cin >> n >> b >> s;
    l = 100 * pow(((100 + n) / 100),s);
    cout << fixed << setprecision(2) << l << endl;
	    
    return 0;
}
