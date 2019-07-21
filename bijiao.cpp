#include<iostream>
using namespace std;
int main () {
         int a,b,c,d,e,f,g,h,i,j,B,C,D,E,F,G,H,I,J,B1,C1,D1,E1,F1,G1,H1,I1,J1;
       	cout <<"Enter ten arbitrary integers and find the largest and smallest of them."<<endl;
	        cout <<"1:";
	      cin >>a;
                cout <<"2:"; 
              cin >>b;
                cout <<"3:"; 
              cin >>c;
                cout <<"4:"; 
              cin >>d;
                cout <<"5:"; 
              cin >>e;
                cout <<"6:"; 
              cin >>f;
                cout <<"7:"; 
              cin >>g;
                cout <<"8:";
              cin >>h;
                cout <<"9:";
              cin >>i;
                cout <<"10:";
              cin >>j;
             B=a>b?a:b;
	     C=c>d?c:d;
	     D=e>f?e:f;
	     E=g>h?g:h;
	     F=i>j?i:j;
	     G=C>D?C:D;
	     H=B>E?B:E;
	     I=F>G?F:G;
             J=H>I?H:I; 
	     
	      B1=a<b?a:b;
             C1=c<d?c:d;
             D1=e<f?e:f;
             E1=g<h?g:h;
             F1=i<j?i:j;
             G1=C1<D1?C1:D1;
             H1=B1<E1?B1:E1;
 	     I1=F1<G1?F1:G1;
             J1=H1<I1?H1:I1;

           cout <<"最大的数是: " <<J<<endl;
           cout <<"最小的数是: " <<J1<<endl;


return 0;
}
