//ááÊÍæíá ãä ÚÔÑí Çáì ÓÇÏÓ ÚÔÑ 

#include <iostream>
using namespace std;
int main()
{

	int Decimalnumber,Hexnumber[64];
	cout << "Enter the Decimal number: ";
	cin>>Decimalnumber;
	int i=0,r;
	cout << "In Hexadecimal =  ";
	while(Decimalnumber!=0)
	{
		r = Decimalnumber%16;
		Hexnumber[i++] = r;
		Decimalnumber /= 16;
	}
	for(int j=i-1;j>=0;j--)
		if(Hexnumber[j]<=9)
		cout<<Hexnumber[j];
		else if(Hexnumber[j]==10)
			cout<<"A";
		else if(Hexnumber[j]==11)
			cout<<"B";
		else if(Hexnumber[j]==12)
			cout<<"C";
		else if(Hexnumber[j]==13)
			cout<<"D";
		else if(Hexnumber[j]==14)
			cout<<"E";
		else if(Hexnumber[j]==15)
			cout<<"F";
		else
			cout<<"Error of Enter ";

cout<<endl;
system("pause");
}