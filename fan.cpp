#include<iostream>
using namespace std;
int main() {
    int a,b;
    cout << "Input a three-digit number and output it in reverse.\n";
    cin >> a;
    if(a<0||a>999)
    {
	    cout <<"This number is wrong!" <<endl;
	    cout <<"a<0,a>999."<<endl;
	    return 1;
    }
    b=((a%10)*100)+((a-(a%10))/10%10)*10+(a/100);
    cout <<b <<endl;

    return 0;
}
