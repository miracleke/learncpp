#include<iostream>
#include<iomanip>
using namespace std;
int main() {
    double w, p, d, f, s;
    int m;
    cout << "Input base freight, cargo weight and mileage, output total freight.    \n";
    cin >> p >> w >> m;
    f = p * w * s * (1 - d);
    if(s < 250)   d = 0;
    else if(s >= 250 && s < 500)   d = 0.02;
    else if(s >= 500 && s < 1000)   d = 0.05;
    else if(s >= 1000 && s < 2000)   d = 0.08;
    else if(s >= 2000 && s < 3000)    d = 0.1;
    else d = 0.15;
    cout << "总运费为:" << setprecision(4) << f << endl;

    return 0;
}

