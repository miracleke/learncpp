#include<iostream>
using namespace std;
int main() {
    int i, m, n = 0;
    for(i = 1;i <= 5; i++)
    {
	    m = i % 2;
        while(m-- > 0)  n++;
    }
    cout << m << "," << n << endl;
    return 0;
}
