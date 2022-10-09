#include<iostream>
using namespace std;

int main()
{
	float P,T,R,simple_interest;
	cout<<"enter the value of P\n";
	cin>>P;
	cout<<"enter the value of T\n";
	cin>>T;
	cout<<"enter the value of R\n";
	cin>>R;
	simple_interest=(P*T*R)/100;
	cout<<"the simple interest amount is"<<endl<<simple_interest<<endl;
	return 0;
}
