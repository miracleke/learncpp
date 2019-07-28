#include<iostream>
using namespace std;
int main() {
    int a;
    cout <<"parcel service:Input weight, output postage, more than 30 kg will not be sent.\n";
    cin >> a;
    if(a > 30)
    {
	    cout << "The parcel is overweight and not to be sent.\n";
            return 1;
    }	    
    if(a <= 10)
    {
	    cout << "amount payable:" << 0.8 * a + 0.2 << endl;
	    return 0;
    }
    if(a > 10 && a <= 20) 
    {
	    cout << "amount payable:" << 0.75 * a + 0.2 << endl;
	    return 0;
    }
    if(a > 20 && a <= 30)
    {
	    cout << "amount payable:" << 0.7 * a + 0.2 << endl;
            return 0;
    }	    

    return 0;
}
