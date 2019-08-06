#include<iostream>
using namespace std;
int main() {
    int i = 10, j;
    do
    {
	 for(j = 1;j <= i; j++)  cout << i + j <<" ";
	 i--; 
	 cout << endl;
    }
    while(i != 0);
    return 0;
}
