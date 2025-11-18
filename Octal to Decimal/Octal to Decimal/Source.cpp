// ãä ËãÇäí Çáì ÚÔÑí 

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    long octalnumber, decimalnumber = 0;
     int i = 0;
	cout << "Enter the octal number : ";
	cin>> octalnumber;
    while (octalnumber != 0) 
     {
      decimalnumber = (long)(decimalnumber + (octalnumber % 10) * pow(8, i++));
      octalnumber = octalnumber / 10;
     }
    cout<<"In decimal : " << decimalnumber ;	

	cout<<endl;
	system("pause");
}