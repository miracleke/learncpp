#include<iostream>
using namespace std;
int main() {
    double score,tot = 0;
    int i = 0;
    for(i = 0;i <= 100000000; i++)
    {
	  cin >> score;
	  tot += score;
          if(score == 0)   break;
    }
    cout << tot / i << endl;

    return 0;
}
