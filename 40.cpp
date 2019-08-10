#include<iostream>
#include<cstring>
using namespace std;
int main() {
    int a[5];
    memset(a, 0, sizeof(a));
    for(int i = 0; i < 5; i++)
      cout << a[i] << " ";
    cout << endl;
    return 0;
}
