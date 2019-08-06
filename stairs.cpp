#include<iostream>
using namespace std;
int main() {
    int i,j;
    for(i=1;i<=5;i++)
    {
	 j=5;
	 while(i<=j)
         {
              cout << i*10+j <<"  ";
	      j--;
	 }
         cout << endl;
    }

    return 0;
}
