//                                   ÇÏÇÁ ÇáØÇáÈ : ãÄãä ÈÓÇã ÕÑÕæÑ     
// ÈÑäÇãÌ íÍæá Èíä ÇäÙãÉ ÇáÚÏ 

#include<iostream>
#include<string.h>
#include<math.h>
#include<cmath>

using namespace std;
int main()
{
	cout<<"      ** Welcom to you in the conversion program in counting systems **"<<endl<<endl;
	cout<<"Enter the operating number only to be transferred to him "<<endl;
	cout<<endl;
	cout<<"1- Decimal To Binary.    2- Decimal To Octal.    3- Decimal To Hexadecimal. "<<endl;
	cout<<"4- Binary To Decimal.    5- Binary To Octal.     6- Binary To Hexadecimal. "<<endl;
	cout<<"7- Octal To Decimal.     8- Octal To Binary.     9- Octal TO Hexadecimal."<<endl;
	cout<<endl;
	int procnumber;
	cout<<"Enter the operating number only to be tranferred to him : ";
	cin>>procnumber;
	cout<<endl;

	switch (procnumber)
	{
	case 1:
		{
			// Dicimal To Binary 
			int Decimalnumber , Binarynumber[64] , i = 0 ;
			cout<<"Enter the Decimal number : ";
			cin>>Decimalnumber;
			cout<<"In Binary = ";
			while (Decimalnumber!=0)
			{
				Binarynumber[i++] = Decimalnumber % 2;
				Decimalnumber = Decimalnumber / 2;
			}
			for(int j=i-1 ; j>=0 ; j--)
			{
					cout<<Binarynumber[j];
			}
		}
		break;

	case 2:
		{
			// Decimal To Octal
			int Decimalnumber , Octalnumber[64] , i = 0;
			cout<<"Enter the Decimal number : ";
			cin>>Decimalnumber;
			cout<<"In Octal = ";
			while (Decimalnumber!=0)
			{
				Octalnumber[i++] = Decimalnumber % 8;
				Decimalnumber = Decimalnumber / 8;
			}
			for(int j = i-1 ; j>=0 ; j--)
			{
				cout<<Octalnumber[j];
			}
		}
		break;

	case 3:
		{
			// Decimal To Hexadecimal
			int Decimalnumber , Hexadecimal[64] , i = 0;
			cout<<"Enter the Decimal number : ";
			cin>>Decimalnumber;
			cout<<"In Hexadecimal = ";
			while(Decimalnumber!=0)
			{
				Hexadecimal[i++] = Decimalnumber % 16;
				Decimalnumber = Decimalnumber / 16;
			}
			for(int j=i-1 ; j>=0 ; j--)
				if(Hexadecimal[j]==10)
					cout<<"A";
				else if(Hexadecimal[j]==11)
					cout<<"B";
				else if(Hexadecimal[j]==12)
					cout<<"C";
				else if(Hexadecimal[j]==13)
					cout<<"D";
				else if(Hexadecimal[j]==14)
					cout<<"E";
				else if(Hexadecimal[j]==15)
					cout<<"F";
				else
					cout<<Hexadecimal[j];
		}
		break;
	case 4:
		{
			// Binary To Decimal
			int Binarynumber , z , Decimalnumber = 0 , x = 1;
			cout<<"Enter the Binary number : ";
			cin>>Binarynumber;
			while(x <= 1024)
			{
				z = Binarynumber % 10;
				Decimalnumber = Decimalnumber + z * x;
				x = x * 2;
				Binarynumber = Binarynumber / 10;
			}
			cout<<"In Decimal = "<<Decimalnumber;
		}
		break;

	case 5:
		{
			// Binary To Octal
			int Binarynumber , x , Decimalnumber = 0 , i = 1 , Octalnumber[100] ;
			cout<<"Enter the Binary number : ";
			cin>>Binarynumber;
			while(Binarynumber > 0)
			{
				x = Binarynumber % 10 ;
				Decimalnumber = Decimalnumber + x * i ;
				i = i * 2 ;
				Binarynumber = Binarynumber / 10;
			}
			i = 1 ;
			while(Decimalnumber > 0)
			{
				Octalnumber[i++] = Decimalnumber % 8;
				Decimalnumber = Decimalnumber / 8;
			}
			cout<<"In Octal = ";
			for(int j = i-1 ; j>0 ; j--)
			{
				cout<<Octalnumber[j];
			}
		}
		break;

	case 6:
		{
			// Binary To Hexadecimal
			int Binarymumber , Decimalnumber = 0 , Hexadecimal[1000] , c , i = 1;
			cout<<"Enter the Binary number : ";
			cin>>Binarymumber;
			while(Binarymumber > 0)
			{
				c = Binarymumber % 2;
				Decimalnumber = Decimalnumber + c * i ;
				i = i * 2;
				Binarymumber = Binarymumber / 10;
			}
			i = 0;
			while(Decimalnumber != 0)
			{
				Hexadecimal[i] = Decimalnumber % 16;
				Decimalnumber = Decimalnumber / 16;
				i++;
			}
			cout<<"In Hexadecimal = ";
			for(int j = i-1 ; j >= 0 ; j--)
				if(Hexadecimal[j] == 10)
					cout<<"A";
				else if(Hexadecimal[j] == 11)
					cout<<"B";
				else if(Hexadecimal[j] == 12)
					cout<<"C";
				else if(Hexadecimal[j] == 13)
					cout<<"D";
				else if(Hexadecimal[j] == 14)
					cout<<"E";
				else if(Hexadecimal[j] == 15)
					cout<<"F";
				else
					cout<<Hexadecimal[j];
		}
		break;

	case 7:
		{
			// Octal To Decimal 
			int Octalnumber , Decimalnumber = 0 , i = 0;
			cout<<"Enter the Octal number : ";
			cin>>Octalnumber;
			while(Octalnumber!=0)
			{
				Decimalnumber = Decimalnumber + ( Octalnumber % 10 ) * pow(8 , i++);
				Octalnumber = Octalnumber / 10;			
			}
			cout<<"In Decimal = "<<Decimalnumber;
			}
		break;

	case 8:
		{
			// Octal To Binary 
			int i = 0;
			char Octalnumber[1000];
			cout<<"Enter Octal number : ";
			cin>>Octalnumber;
			cout<<"In Binary = ";
			while(Octalnumber[i])
			{
				switch(Octalnumber[i])
				{
				case '0':
					cout<<"000";
					break;
				case '1':
					cout<<"001";
					break;
				case '2':
					cout<<"010";
					break;
				case '3':
					cout<<"011";
					break;
				case '4':
					cout<<"100";
					break;
				case '5':
					cout<<"101";
					break;
				case '6':
					cout<<"110";
					break;
				case '7':
					cout<<"111";
					break;
				default :
					cout<<"Error of Enter number "<<Octalnumber[i];
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
			char octalnumber[20];
			x = fr = flg = rem = 0;
			rem1 = 0.0;
			cout << "Enter the Octal number: ";
			cin>>octalnumber;	
			for(i = 0 , j = 0 , k = 0 ; i < strlen(octalnumber) ; i++)
				{
					if(octalnumber[i] == '.')
						{
							flg = 1;
						}
					else if(flg == 0)
						arr1[j++] = octalnumber[i] - 48;
					else if(flg == 1)
						arr2[k++] = octalnumber[i] - 48;
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
			n2 = dno - n1;
 
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
					cout<<arr1[k];
			}
		}
		break;

	default:
		cout<<"Error of Enter , please again ";
		break;
	}

	cout<<endl<<endl;
	system("pause");
}