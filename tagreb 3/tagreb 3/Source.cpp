
#include<iostream>
#include <math.h>
#include<string.h>
#include<cmath>
using namespace std;
int main()
{
	cout<<"       ** welcom to you in the conversion program in counting systems ** "<<endl<<endl;
	cout<<"Enter the operating unmber only to be transferrrd to him "<<endl;
	cout<<endl;
	cout<<"1- Binary to Decimal.  2- Binary to Octal.   3- Binary to Hexadecimal."<<endl;
	cout<<"4- Decimal to Binary.  5- Decimal to Octal.  6- Decimal hexadecimal."<<endl;
	cout<<"7- Octal to Decimal.   8- Octal to Binary.   9- Octal to Hexadecimal."<<endl;
	cout<<endl;
	int procnumber;
	cout<<"Enter the operating unmber only to be transferrrd to him  : ";
	cin>>procnumber;
	cout<<endl;

	switch (procnumber)
	{
	case 1 :
		{
		int Binarynumber, rem, Decimalnumber = 0, b = 1;
        cout << "Enter the Binary number : ";
        cin >> Binarynumber;
        while (b <= 1024)
        {
            rem = Binarynumber % 10;
            Decimalnumber = Decimalnumber + rem * b;
            b = b*2;
            Binarynumber /= 10;
        }
        cout << "In Decimal =  "  << Decimalnumber;
		}
		break;

	case 2:
		{
        int binarynumber,rem, decimalnumber=0, quot, i=1, j;
        int octalnumber[100];
	cout << "Enter the binary number : ";
	cin>> binarynumber;

      while(binarynumber > 0)
        {
            rem = binarynumber % 10;
            decimalnumber = decimalnumber + rem*i;
            i = i*2;
            binarynumber = binarynumber/10;
        }   
		i=1;
        quot = decimalnumber;
		
        while(quot > 0)
        {
            octalnumber[i++] = quot % 8;
            quot = quot / 8;
        }
        cout<<"In octal =  ";
        for(j=i-1; j>0; j--)
        {
            cout<<octalnumber[j];
        }
}
	break;

	case 3:
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
  }
		}
		break;

	case 4:
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
					Decimalnumber = Decimalnumber / 2;
				}
			for(int j=i-1;j>=0;j--)
				cout<<Binarynumber[j];
		}
		break;

	case 5:
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
		}
		break;

	case 6:
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
		}
		break;

	case 7:
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
			cout<<"In decimal = " << decimalnumber ;
		}
		break;

	case 8:
		{

			long int i=0;
			char octalnumber[1000];
			cout<<"Enter Octal Number : ";
			cin>>octalnumber;
			cout<<"In Binary = ";
			while(octalnumber[i])
				{
					switch(octalnumber[i])
						{
							case '0':
								cout<<"000";
							   break;
							case '1' : 
								cout<<"001";
								break;
							case '2' : 
								cout<<"010";
                                break;
							case '3' : 
								cout<<"011";
                                break;
							case '4' : 
								cout<<"100";
                                break;
							case '5' : 
								cout<<"101";
                                break;
							case '6' : 
								cout<<"110";
                                break;
							case '7' : 
								cout<<"111";
                                break;
							default : 
								cout<<"\n Invalid Octal Digit "<<octalnumber[i];
                                break;
                }
                i++;
        }
}
		break;
	case 9:
		{
			int arr1[20] , arr2[20] , arr3[20];
			int h , i , j , k , l , x , fr , flg , rem , n1 , n3;    
			float rem1 , n2 , n4 , dno;
			char octal_num[20];
			x = fr = flg = rem = 0;
			rem1 = 0.0;
			cout << "Enter the Octal number: ";
			cin>> octal_num;	
			for(i = 0 , j = 0 , k = 0 ; i < strlen(octal_num) ; i++)
				{
					if(octal_num[i] == '.')
						{
							flg = 1;
						}
					else if(flg == 0)
						arr1[j++]=octal_num[i] - 48;
					else if(flg == 1)
						arr2[k++]=octal_num[i] - 48;
				}
			x = j;
			fr = k;
			for(j = 0 , i = x-1 ; j < x ; j++ , i--)
				{
					rem = rem + (arr1[j] * pow(8,i));
				}
			for(k = 0 , i = 1 ; k < fr ; k++ , i++)
				{
					rem1 = rem1 + (arr2[k] / pow(8,i));
				}
			rem1 = rem + rem1;
			dno = rem1;
			n1 = (int)dno;
			n2 = dno-n1;
 
			i = 0;
			while(n1!=0)
				{
					rem = n1 % 16;
					arr3[i] = rem;
					n1 = n1 / 16;
					i++;
				}
			j = 0;
			while(n2!=0.0)
				{
					n2 = n2 * 16;
					n3 = (int)n2;
					n4 = n2 - n3;
					n2 = n4;
					arr1[j] = n3;
					j++;
					if(j == 4)
					{
						break;
					}
				}
			l = i;
			cout<<"In hexadecimal =  ";
			for(i = l-1 ; i >= 0 ; i--)
				{
					if(arr3[i] == 10)
						cout<<"A";
					else if(arr3[i] == 11)
						cout<<"B";
					else if(arr3[i] == 12)
						cout<<"C";
					else if(arr3[i] == 13)
						cout<<"D";
					else if(arr3[i] == 14)
						cout<<"E";
					else if(arr3[i] == 15)
						cout<<"F";
					else
						cout<<arr3[i];
				}
			h = j;
			cout<<".";
			for(k = 0 ; k < h ; k++)
			{
				if(arr1[k] <= 9)
					cout<<arr1[k];
				if(arr1[k] == 10)
					cout<<"A";
				else if(arr1[k] == 11)
					cout<<"B";
				else if(arr1[k] == 12)
					cout<<"C";
				else if(arr1[k] == 13)
					cout<<"D";
				else if(arr1[k] == 14)
					cout<<"E";
				else if(arr1[k] == 15)
					cout<<"F";
				else
					cout<<"Error of Enter ";
					
			}
		}
		break;

	default:
		cout<<"Error of Enter "<<endl;
		break;
	}
	cout<<endl<<endl;
	system("pause");
}