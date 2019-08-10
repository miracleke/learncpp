#include<iostream>
using namespace std;
double abs(double x)
{
    if(x > 0)
	 return x;
    else 
	 return -x;
}
int main()
{
    double x1, y1, x2, y2;
    double dx, dy, mht;
    cin >> x1 >> y1 >> x2 >> y2;
    mht = (x1 - x2) + (y1 - y2);
    cout << mht << endl;
    
    return 0;
}
