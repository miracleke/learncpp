#include<iostream>
using namespace std;
int main() {
    double s;
    double p,w,d,f,m;
    double f1;
    cout << "输入基本运费，货物重量以及运输里程，输出总运费.\n";
    cin >> p >> w >> m;
    f=0;
    s=0;
    f1 = p*w;
    if(m<250)
	f=f1*m;
    else
    {
	 s+=f1*250;
	 d=0.02;
	  if(m<500)
            f=s+f1*(1-d)*(m-250);
	  else
          {
		 s+=f1*250*(1-d);
		 d=0.05;
		 if(m<1000)
	            f=s+f1*(1-d)*(m-500);
		 else
	         {
			s+=f1*(1-d)*500;
			d=0.08;
			if(m<2000)
			  f=s+f1*(1-d)*(m-1000);
		   else
		   {  
			s+=f1*(1-d)*1000;
			d=0.1;
			if(m<3000)
		            f=s+f1*(1-d)*(m-2000);

		      else
		      {
			    s+=f1*(1-d)*1000;
			    d=0.15;
			    f=s+f1*(1-d)*(m-3000);
		       }	    
                 
	   	   }
		 }     
          }
     }
     cout << "折扣后总运费." << f << endl;


return 0;
}
