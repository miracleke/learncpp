#include<iostream>
using namespace std;
int main() {
        cout <<"This software lets you enter the date and I tell you the day of the week.\n";

	cout <<"the year:" ;
	int y, m, d,f;
        cin >>y;
	cout <<"the month:";
	cin >>m;
	cout << "the day:";
	cin >>d;
        f=((d + 1+ 2*m+3*(m+1)/5+y+y/4-y/100+y/400)%7);

        if(m<1||m>12||d<1||d>31)
	{
		cout <<"Date error!\n";
			return 1;
	}
	 cout <<"The date:" <<f <<endl;
	return 0;
}









