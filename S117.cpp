#include<iostream>
using namespace std;
int main() {
          int a=1,b,s,c,d,e,f;
	  cout <<"计算s=1/1-1/2+1/3-......-1/100.\n";
	  for(b=1;b<=100;b++)
         {
	     if(b%2==0) c=b; 
	    else    d=b;
	    s=a/d-a/c+a/d;
         } 
          
	 
	 
	   cout <<"s=1/1-1/2+1/3-......-1/100="<<s<<endl;

return 0;
}
