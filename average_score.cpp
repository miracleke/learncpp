#include<iostream>
#include<iomanip>
using namespace std;
int main() {
    float score,tot = 0;
    int people = 0;
    cin >> score;
    while(score != 0)
    {
	 people++;
         tot += score;
	 cin >> score;
    }
    cout << fixed << setprecision(2) << tot / people << endl;

    return 0;
}
