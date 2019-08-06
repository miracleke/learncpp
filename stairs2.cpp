#include<iostream>
using namespace std;
int main() {
    int i, j;
    for(i = 1;i <= 10; i++)
    {
	 j = 1;
	 while(j <= i)
         {
	      cout << j << "  ";
	      j++;
	 }
         cout << endl;
    }

    return 0;
}
