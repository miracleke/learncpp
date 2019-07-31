#include<cstdio>
#include<cmath>
using namespace std;
int main() {
    double a, s, x1, x2;
    double d;
    printf("The perimeter and area of the input rectangle, and the length and width of the output rectangle.\n");
    scanf("%lf %lf",&a,&s);
    d = a * a / 4 - 4 * s;
    if(d < 0)
	  printf("No!\n");
    if(d == 0)
	  x1 = x2 = a / 4;
    else
	{
	     x1=(a/2+sqrt(d))/2;
	     x2=(a/2-sqrt(d))/2;

        }
    printf("%f %f\n",x1,x2);
    
    
    
    return 0;
}

