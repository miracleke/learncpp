#include<iostream>
using namespace std;
int main() {
    int i, j, n;
    cin >> n;
    for(i = 2;i <= n; i++)
    {
	 j = i - 1;
	 while(j > 1 && i % j != 0)
             j--;
	 cout << i << "(" << j << ")" << "\n";
    }

    return 0;
}
