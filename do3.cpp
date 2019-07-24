#include<iostream>
using namespace std;
int main () {
	int n;
	cout <<"Input any positive integer, output in reverse order.\n";
	cout <<"The number:";
	cin >>n;
	do
	{
	    cout<<n%10;
	    n/=10;
	}
	while (n!=0);
        cout <<endl;

	return 0;
}
