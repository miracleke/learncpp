#include<iostream>
using namespace std;
int main() {
	int a,b,c,d;
	cout <<"Given that the size of the rectangle is n m, now fill the rectangle with a a's squares input three positive integers n,m,a(n,m,a 10^9) output the number of squares.\n";
	cout <<"n:"<<"  ";
	cin >>a;
	cout<<"m:"<<"  ";
	cin >>b;
	cout <<"a:"<<"  ";
	cin >>c;
	if(a<1)
        {
                cout <<"Error!"<<" 　";
                cout <<"1<=a,c<=10^9 "<<endl;
		return 1;
        }       
       	d=(a*b)/(c*c);   cout <<d<<endl;

	return 0;
}
