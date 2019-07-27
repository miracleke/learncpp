#include<iostream>
using namespace std;
int main() {
    int a;
    cout << "Input a number to determine whether it is odd or even.\n";
    cin >> a;
    if(a % 2 == 0)
    {
	    cout << "偶数哦!" << endl;
    }    else  cout << "是奇数！" << endl;


    return 0;
}
