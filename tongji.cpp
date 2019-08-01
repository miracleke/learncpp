#include<iostream>
using namespace std;
int main() {
	int a,i,t,sum;
	cin >> a;
	t=2;
	sum = 0;
	for(i=1;i<=a;i++)
	{
          sum += t;
	  if(i >= a)
	  { 
              break;	     
	  }	  
          t=t*10+2;
	}
	cout << sum << endl;

	return 0;
}


