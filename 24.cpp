#include<iostream>
using namespace std;
int main() {
    int s1, s2;
    int day = 0;
    int max = 8;
    int i;
    for(i = 1; i <= 7; i++)
    {
	    cin >> s1 >> s2;
	    if(s1 + s2 > max)
	    {
		  max = s1 + s2;
		  day = i;
	    }
    }
    if(max > 8) cout << day << endl;
    else cout << "0" << endl;
    
    return 0;
}
