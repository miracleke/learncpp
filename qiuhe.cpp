#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main () {
    double a, b, c, i, d, e, f;
    double sum;
    double g, h;
    e = 0;
    sum = 0;
    g = 0;
    h = 0;
    cin >> a >> b >> c;
    for(i = 0;i <= a; i++)
    {
	sum += i;
    }
    for(d = 1;d <= b; d++)
    {
	pow(d,2);
	e += pow(d,2);
    }	
    for(f = 1;f <= c; f++)
    {
        g += 1 / f * 1.0;	    
    }	
    h = sum + e + g;	
    cout << fixed << setprecision(2) << h << endl;	
    return 0;
}
