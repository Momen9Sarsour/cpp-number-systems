//ãä ÇáäÙÇã ÇáËäÇÆí Çáì ÓÇÏÓ ÚÔÑ 
//æÇáÑŞã ÇáËäÇÆí íÊßæä ãä 10 ÎÇäÇÊ İŞØ ÈÚãáÔ ÊßÊÑ ãä 10 ÎÇäÇÊ   

#include <iostream>
#include <math.h>
using namespace std;
 
int main()
{
  int Hexnumber[1000];
  int Binarynumber ,Decimalnumber = 0, rem , i = 1,  j = 0 ;
	cout << "Enter the Binary number: ";
	cin>>Binarynumber;
  while (Binarynumber > 0) 
  {
   rem = Binarynumber % 2;
   Decimalnumber = Decimalnumber + rem * i;
   i = i * 2;
   Binarynumber = Binarynumber / 10;
  }
   i = 0;
  while (Decimalnumber != 0) 
  {
   Hexnumber[i] = Decimalnumber % 16;
   Decimalnumber = Decimalnumber / 16;
   i++;
  }
  cout<<"In Hexadecimal : ";
  for (j = i - 1; j >= 0; j--)
  {
   if (Hexnumber[j] > 9) 
   {
    cout<<(char)(Hexnumber[j] + 55);
   } 
   else
   {
    cout<<Hexnumber[j];
   }
  }
  cout<<endl;

  system("pause");
}