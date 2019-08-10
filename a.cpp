#include<iostream>
using namespace std;
int main() {
    int n, j, i = 1;
    cin >> n;
    if(n < 0)
    {
	    cout << "Error!" << endl;
	    return 1;
    }
    for(j = 1; j < n; j++)
    {
	    i++;
	    n /= 10;
    }
    cout << i << endl;
    
    return 0;
}
