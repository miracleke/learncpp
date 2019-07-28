#include<iostream>
using namespace std;
int main() {
	int year;
	cout << "Enter a year to determine if it is a leap year.\n";
	cin >> year;
	if(year % 400 == 0)   
	{	   
		cout << "Yes!" << endl;
	}else  if(year % 4 == 0)

		if(year % 100 != 0)
		{
			cout << "Yes!" <<endl;
		}	    
		else cout << "No!" << endl;
	else cout << "No!" << endl;


	return 0;
}
