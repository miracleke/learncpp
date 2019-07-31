#include<iostream>
using namespace std;
int main() {
    int c,s;
    double p,w,d,f,m;
    cout << "输入基本运费，货物重量以及运输里程，输出总运费.\n";
    cin >> p >> w >> m;
    f = 0;
    c = m / 250;
    s = m;
    switch(c)
    {
	 default:d=0.15;f+=p*w*(s-3000)*(1-d);s=3000;
         case 8:case 9:case 10:case 11:d=0.1;f+=p*w*(s-2000)*(1-d);s=2000;
	 case 4:case 5: case 6:case 7:d=0.08;f+=p*w*(s-1000)*(1-d);s=1000;
	 case 2:case 3:d=0.05;f+=p*w*(s-500)*(1-d);s=500;
	 case 1:d=0.02; f+=0.02;f+=p*w*(s-250)*(1-d);s=250;
	 case 0:d=0;f+=p*w*s*(1-d);
    }

    cout << "折扣后的总运费:" << f << endl;
    

    return 0;
}


