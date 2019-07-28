#include<iostream>
using namespace std;
int main() {
    int a, b, c, d, e, g;
    cout <<"Enter three Numbers and output them in the order from largest to smallest.\n";
    cin >> a >> b >>c;   
    if(a > b) 
	 if(b > c) 
		 cout << a << "  " << b << "  " << c << endl;
	    else
		  if(a > c)
		       cout << a << "  " << c << "  " << b << endl;
		   else
			cout << c << "  " << a << "  " << b << endl;
    else 
	  if(a > c)
		if(a > c)
		     cout << b << "  " << a << "  " << c << endl;
		  else
			cout << b << "  " << c << "  " << a << endl;
	    else
		  cout << c << "  " << b << "  " << a << endl;




    return 0;
}
