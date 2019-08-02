#include<iostream>
using namespace std;
int main() {
    char c1, c2, c3, c4, c5, a;
    c1 = 67;    c2 = 104;   c3 = 105;   c4 = 110;    c5 = 97;
    cin >> c1, c2, c3, c4, c5;
    for(a=1;a<=4;a++)
    {
        c1++;
        c2++;
        c3++;
        c4++;
        c5++;
    }
    cout << c1 << c2 << c3 << c4 << c5 << endl;    

    return 0;
}

