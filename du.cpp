#include<iostream>
#include<iomanip>
using namespace std;
int main (){
	int a;
	cout <<"Put in Fahrenheit and Put out Celsius.\n";
	cout <<"华氏温度:";
	cin >>a;
	cout <<"摄氏温度:"<<fixed<<setprecision(4)<<(a-32)/1.8<<endl;

	return 0;
}
