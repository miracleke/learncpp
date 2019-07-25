#include<iostream>
using namespace std;
int main() {
	int a,b,c;
	cout <<"Enter a three-digit number, repeat the three-digit number to get a six-digit number, divide it by 7.11.13, and output.\n";
	cout <<"The number:";
		cin >>a;
	if(a<100||a>999)  cout<<"This number is wrong!"<<endl;
	b=a*1000+a;
	c=b/7/11/13;
	cout <<"就是它 " <<c <<endl;


	return 0;
}
