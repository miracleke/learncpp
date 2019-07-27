#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main() {
    cout << "Randomly output two four-digit Numbers and calculate the sum.\n";
    int a, b, c, d, e, f;
    srand (time(0));
    a = rand () % 10000 + 1;
    b = rand () % 10000 + 1;
    c = rand () % 10000 + 1;
    d = a + b + c;
    cout << "a=" << a << "  " << "b=" << b << "  "<< "c=" << c << endl;
    cout << "a+b+c=" << endl;
    cin >> f;
    if (f!=d)
    {
	    for ( e=1; e<5; e++ )
	    {     
		    cout <<"a+b+c=" <<endl;	
		    cin >> f;
		    e += e;
	    }
    }
    if( e>5 )
    {
	    cout << "啊哦!" << " " << "正确答案是:" << d << endl;  
	    return 1;
    }
    return 0;
}
