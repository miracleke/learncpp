#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main() {
    int b,year;
    double sum,li,y;
    cout << "Input annual interest rate, capital in the number of years deposited,the sum of profits\n";
    cin >> li >> b >> year;
    y = year * li / 100 * b;
    sum = b + y;
    cout << "本金加利息=" << setprecision(15) << sum << endl;
    
    return 0;
}

