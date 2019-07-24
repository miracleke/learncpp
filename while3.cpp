#include<iostream>
using namespace std;
int main() {
          float score,tot=0;
	  int pep=0;
	  cout <<"Input n individual scores, output average scores.\n";
	  cout <<"When 0 is entered, the loop ends.\n";
	  cout <<"The score:";
	  cin >>score;
	  while(score!=0)
         {
	      pep++;
	      tot+=score;
	      cin >>score;
	 }
	  cout <<"平均分为: "<<tot/pep<<endl;

return 0;
}
