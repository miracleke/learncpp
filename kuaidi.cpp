#include<iostream>
using namespace std;
int main() {
    int a;
    cout << "Input express weight, output cost.\n";
    cin >> a;
    if(a>1000)
    {
            cout << "超重啦！要按公斤收费咯．" << endl;
            return 1;
    }
    if(a>500)
    {
	    cout << "九元" << endl;
    }   else  cout <<"六元" << endl;     

    return 0;
}
