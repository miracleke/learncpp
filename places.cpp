#include<iostream>
using namespace std;
int main() {
    int n, num;
    num = 1;
    cin >> n;
    while(n > 10)
    {
	num++;
	n /= 10;
    }       
    cout << num << endl;

    return 0;
}
