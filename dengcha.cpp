#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a, b, c;
    int long long d; 
    cout <<"Input the first term a, the last term b and the number of terms n of the arithmetic sequence, and find the sum of the terms of the arithmetic sequence.\n";    
    cin >> a >> b >> c;
    if(a<0 || b>pow(10,9) || c>200)
    {
	    cout << "Error!" << endl;
	    return 1;
    }
    d = ((long long) a + b ) * c / 2;
    cout << d << endl;

    
    return 0;
}
