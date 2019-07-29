#include<iostream>
using namespace std;
int main() {
    int n;
    float x, y;
    scanf ("%f　%f", &x, &y);
    n = 100 * x / y + 0.5;
    switch (n / 10)
    {
	 case 0: case 1: printf("极其富裕. \n");    break;
	 case 2: printf("富裕. \n");    break;
	 case 3: printf("相对富裕. \n");    break;
	 case 4: printf("小康. \n");     break;
	 case 5: printf("温饱. \n");     break;
         default:printf("贫穷. \n");    break;
    }


    return 0;
}
