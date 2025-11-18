//íÍæá ãä ÇáÚÔÑí Çáì ÇáËãÇäí 

#include <iostream>
using namespace std;
int main()
{
	int Decimalnumber,Octalnumber[64];
   cout << "Enter a Decimal number : ";
	cin>>Decimalnumber;
	int i=0,r;
   cout << "In Octal = " ;
	while(Decimalnumber!=0)
	{
		r = Decimalnumber % 8;
		Octalnumber[i++] = r;
		Decimalnumber /= 8;
	}

	for(int j=i-1;j>=0;j--)
		cout<<Octalnumber[j];

cout<<endl;
system("pause");
}