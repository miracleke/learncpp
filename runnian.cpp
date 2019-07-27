#include<iostream>
using namespace std;
int main() {
    int year;
    cout << "Enter a year to determine if it is a leap year.\n";
    cin >> year;
    if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    {
	    cout << "这是一个闰年！" << endl;
    }  else cout << year <<"不是闰年!" <<endl;


    return 0;
}
