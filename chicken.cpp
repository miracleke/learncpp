#include<iostream>
using namespace std;
int main() {
    int x, y, z;
    for(x = 0;x <= 100 / 5; x++)
      for(y = 0;y <= 100 / 3; y++)
	for(z = 0;z <= 300; z++)
          if(5 * x + 3 * y + z / 3 == 100 && x + y +z == 100)
	  cout << "公:" << x << " " << "母:" << y << " " << "小鸡:" << z <<endl;

    return 0;
}
