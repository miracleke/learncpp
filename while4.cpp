#include<iostream>
using namespace std;
int main() {
	int mi=432534;
	int c=1,x=0;
	cout <<"这是一个自动取款机." <<endl;
	cout <<"请输入密码:";
	cin >>x;
	while(c<3&&x!=mi)
	{
		c++;
		if(x!=mi)  cout <<"密码错误!"<<endl;
		cin >>x;
	}
	if(x==mi)   cout<<"祝您潇洒愉快!"<<endl;
	else if (c==3)  cout <<"啊哦!冻结中......"<<endl;


	return 0;
}
