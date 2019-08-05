#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main() {
    int x, y, n, num = 0;
    srand(time(NULL));
    x = 100 + rand () % (999 - 100 + 1);
    y = 100 + rand () % (999 - 100 + 1);
    do
    {
	 cout << x << " + " << y << " ? \n";
         cin >> n;
	 num ++;
    }
    while(n != x + y && num < 3);
    cout << num << endl;
    if(num >= 3)
    {
        cout << "啊哦!" << "  " << x + y <<endl;
    }
    return 0;
}
