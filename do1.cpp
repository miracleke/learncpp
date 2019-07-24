#include<iostream>
using namespace std;
int main () {
	int i=1,n,sum=0;
	cin>>n;
	do
	{
		sum+=i;
		i++;
	}
	while (sum<n);
	cout <<i-1 <<endl;


	return 0;
}
