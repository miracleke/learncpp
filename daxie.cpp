#include<iostream>
using namespace std;
int main() {
    char a,b;
    cout << "Enter a character, determine whether it is uppercase, if yes, convert it to lowercase, if not, do not convert it, and then output the resulting character.\n";
    cin >> a;
    a = ( (a >= 'A' && a <= 'Z') ? (a + 32) : a);
    cout << a;
    cout << endl;    

    return 0;
}
