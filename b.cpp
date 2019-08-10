#include<iostream>
using namespace std;
int main() {
    int a, j, i;
    cin >> a;
    if(a < 0)
    {    
	    cout << "Error!"<<endl;
	    return 1;
    }
    for(j = 1; j <= a; j++)
    {
	    cout << a % 10 <<" ";
	    a /= 10;
	    if(a < 10)  cout << a;
    }
    cout << endl;
    return 0;
}
