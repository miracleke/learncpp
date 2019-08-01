#include<iostream>
using namespace std;
int main() {
    int x, y;
    cin >> x >> y;
    if(x >= -1 && x <= 1 && y >= -1 && y <= 1)
    {
       cout << "Yes" << endl;
    }  else  cout << "No" << endl;

    return 0;
}
