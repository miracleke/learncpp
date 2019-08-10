#include<iostream>
using namespace std;
int sgn(int n);
int main()   {
    int n;
    cin >> n;
    cout << sgn(n) << endl;
    return 0;
    }
    int sgn(int n)
    {  
         if(n == 0) return 0;
         return (n > 0) ? 1 : -1;
    }	 



