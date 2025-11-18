   // ááÊÍæíá ãä ËäÇÆí Çáì ÚÔÑí 

#include<iostream>
    using namespace std;
    int main ()
    {
        int Binarynumber, rem, temp, Decimalnumber = 0, b = 1;
        cout << "Enter the Binary number : ";
        cin >> Binarynumber;
        while (b <= 1024)
        {
            rem = Binarynumber % 10;
            Decimalnumber = Decimalnumber + rem * b;
            b *= 2;
            Binarynumber /= 10;
        }
        cout << "In Decimal =  "  << Decimalnumber;
		cout<<endl;
       
		system("pause");
		return 0;
    }