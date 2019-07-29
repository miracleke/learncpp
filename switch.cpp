#include<iostream>
using namespace std;
int main() {
    float a, b;
    char op;
    cin >> a >> b >> op;
    switch (op) 
    {
       case'+': cout << a << op << b << "=" << a + b << endl;  break;
    	
       case'-': cout << a << op << b << "=" << a - b << endl;  break;
	
       case'*': cout << a << op << b << "=" << a * b << endl;  break;
	
       case'/':{
		 if (b != 0)  cout << a << op << b << a / b << endl; 
	         else cout << "Divided by zero!" << endl;   
		 break;
	       }
       default: cout << "Invalid operator!";
    }	

    return 0;
}

