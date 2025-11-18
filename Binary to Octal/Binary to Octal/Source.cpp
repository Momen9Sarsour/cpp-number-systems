// ·· ÕÊÌ· „‰ «·À‰«∆Ì «·Ï «·À„«‰Ì 

#include <iostream>
#include <cmath>
using namespace std;

int BinarytoOctal(long long);
int main()
{
    long long Binarynumber;

    cout << "Enter a Binary number: ";
    cin >> Binarynumber;

    cout << "In Octal = "<< BinarytoOctal(Binarynumber) ;
	cout<<endl;

	system("pause");
    return 0;
}

int BinarytoOctal(long long Binarynumber)
{
    int Octalnumber = 0, Decimalnumber = 0, i = 0;

    while(Binarynumber != 0)
    {
        Decimalnumber += (Binarynumber%10) * pow(2,i);
        ++i;
        Binarynumber/=10;
    }

    i = 1;

    while (Decimalnumber != 0)
    {
        Octalnumber += (Decimalnumber % 8) * i;
        Decimalnumber /= 8;
        i *= 10;
    }

    return Octalnumber;
}