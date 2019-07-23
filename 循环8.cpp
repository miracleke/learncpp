#include<iostream>
using namespace std;
int main() {
             int a,b,c=0,d,e=0,f;
	     for(a=0;a<=100;a++)
	     c+=a;
             cout <<"1-100所有整数和为:" <<c<<endl;
	     for(d=2;d<=100;d+=2)
             e+=d; 
	     f=c-e;	     
             cout <<"1-100所有整数和减去偶数和为:" <<f<<endl;




return 0;
}
