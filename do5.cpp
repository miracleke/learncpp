#include<iostream>
using namespace std;
int main() {
	int a,b,c;
        cout <<"Input any natural number n, output all primes between 1 and n.\n";
	cout <<"The number:";
	cin >> a;
	for(b=2;b<=a;b++)
	{
		c=2;
		while (b%c!=0 && c<=b-1)
			c++;
		if(c>b-1)  cout<<b<<"  ";
	}
        cout <<endl;

	return 0;
}

