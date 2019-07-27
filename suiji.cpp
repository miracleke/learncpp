#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main() {
    int x, y, z;
    srand (time (0));
    x = rand () % 1000 + 1;
    y = rand () % 1000 + 1;
    z = rand () % 1000 + 1;
    cout << x <<"  "<< y <<"  "<< z << endl;

    return 0;
}
