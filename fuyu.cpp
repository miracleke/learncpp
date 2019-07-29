#include<iostream>
using namespace std;
int main() {
    int x, y;
    float n;
    cout << "人均食物支出金额: ";
    cin >> x;
    cout << "人均总输出金额: ";
    cin >> y;
    n = 100 * x / y;
    if(n >= 60)      cout << "贫穷.\n";
    else if(n < 60 && n >= 50)     cout << "温饱.\n";
    else if(n <= 40 && n >= 50)    printf("小康.\n");
    else if(n >= 30)   printf ("相对富裕.\n");
    else if(n >= 20)   printf ("富裕.\n");
    else   printf("相当富裕.\n");
     
    
    return 0;
}
