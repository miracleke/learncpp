#include<cstdio>
using namespace std;
int main() {
    int a;
    scanf("%d", &a);
    switch(a)
    { 
	  case 1:printf("星期一.\n");  break;
          case 2:printf("星期二.\n");  break;
	  case 3:printf("星期三.\n");  break;

	  case 4:printf("星期四.\n");  break;
          case 5:printf("星期五.\n");  break;
          case 6:printf("星期六.\n");  break;
          case 7:printf("星期天.\n");  break;
	  default: printf("general!\n");  
    }

    return 0;
}
