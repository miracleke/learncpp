#include<iostream>
using namespace std;
int main() {
             int c,r;
	     float s,z=0,p=3;
	  cout <<"Compare the height of n individuals to find the maximum and minimum values.\n";
	  cout <<"人数:";
           cin>>r;
	   cout <<"身高分别是:";
	  for(c=1;c<=r;c++)
	  {
            cin >>s;
	  if(s>z) z=s;
	  if(s<p) p=s;
	  }
	  cout <<"最高为:"<<z<<endl;
          cout <<"最矮为:"<<p<<endl;


return 0;
}
