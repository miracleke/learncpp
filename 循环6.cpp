#include<iostream>
using namespace std;
int main() {
             int a,sum1,sum2;
	        sum1=sum2=0;
	     for(a=1;a<=100;a++)
              if(a%2==0)  
	        sum1+=a;
            else sum2+=a;
      cout <<"偶数和: " <<sum1 <<endl;
      cout <<"奇数和: " <<sum2 <<endl;

		   
return 0;
}
