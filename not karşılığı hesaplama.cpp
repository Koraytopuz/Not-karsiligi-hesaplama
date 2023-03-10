#include<iostream>
using namespace std;
int main()
{
int a;
cout<<"notunuzu giriniz"<< endl;
cin >> a;
if(a<50 && a>0)
{
	cout<<"F"<< endl;
}
else if(a<70 && a>=50)
{
	cout<<"C"<< endl;
}
else if(a<90 && a>=70)
{
	cout<<"B"<< endl;
}
else if ( a<=100 && a>=90)
{
	cout<<"A"<< endl;
}

}
