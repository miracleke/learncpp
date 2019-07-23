#include<iostream>
using namespace std;
int main() {
             int sum1=0,sum2=0;
	     for(int i=1;i<=100;i++)
	      if(i%2==0) sum1+=i;
	      else sum2+=i;
	    cout<<"偶数和:" <<sum1<< "  "<<"奇数和:" <<sum2 <<endl;
	   

return 0;
}
