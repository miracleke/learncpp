#include<iostream>
using namespace std;
int main() {
	int n,i=2;
	cout << "Input a number, determine whether it is prime, if not, output its factor within 10000.\n";
	cout <<"This number:";
	cin >>n;
	while(n%i!=0&&i<=n-1)
		i++;
	if(i>=n-1) cout<<"是质数!" <<endl;
	else cout<<"不是质数,因数有:";
	for(i=2;i<=10000;i++)
	{	
		if(n%i==0&&n/i!=1) cout<<i<<"  "<<endl;

	}


	return 0;
}
