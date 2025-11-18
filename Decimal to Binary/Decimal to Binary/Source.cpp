//ááÊÍæíá ãä ÚÔÑí Çáì ËäÇÆí

#include <iostream>
using namespace std;
int main()
{

	int Decimalnumber,Binarynumber[64];
	cout << "Enter the Decimal number: ";
	cin>>Decimalnumber;
	int i=0,r;
	cout << "In Binary =  ";
	while(Decimalnumber!=0)
	{
		r = Decimalnumber%2;
		Binarynumber[i++] = r;
		Decimalnumber /= 2;
	}

	for(int j=i-1;j>=0;j--)
		cout<<Binarynumber[j];

cout<<endl;
system("pause");
}