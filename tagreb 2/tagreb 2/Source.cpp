#include <iostream>
#include <string.h>
#include <math.h>
#include <cmath>
using namespace std;

void DecimlToBinary(int n)
{
        // array to store binary number
        int Binarynumber[32];
        // counter for binary array
        int i = 0;
        while (n > 0)
        {
                // storing remainder in binary array
                Binarynumber[i] = n % 2;
                n = n / 2;
                i++;
        }
        // printing binary array in reverse order
        for (int j = i - 1; j >= 0; j--)
                cout << Binarynumber[j];
}

void DecimalToOctal(int n)
{
        int Octalnumber[32];
        int i = 0;
        while (n > 0)
        {
                Octalnumber[i] = n % 8;
                n = n / 8;
                i++;
        }
        for (int j = i - 1; j >= 0; j--)
                cout << Octalnumber[j];
}

void DecimalToHex(int n)
{
        char Hexnumber[100];
        int i = 0;
        while (n != 0)
        {
                int temp = 0;
                temp = n % 16;
                // check if temp < 10
                if (temp < 10)
                {
                        Hexnumber[i] = temp + 48;
                        i++;
                }
                else
                {
                        Hexnumber[i] = temp + 55;
                        i++;
                }
                n = n / 16;
        }
        for (int j = i - 1; j >= 0; j--)
                cout << Hexnumber[j];
}

void BinaryToDecimal(int n)
{
        int decimalnumber = 0;
        // Initializing base value to 1, i.e 2^0
        int base = 1;
        int temp = n;
        while (temp)
        {
                int Binarynumber = temp % 10;
                temp = temp / 10;
                decimalnumber += Binarynumber * base;
                base = base * 2;
        }
        cout << decimalnumber;
}

void binToOctal(int n)
{
        int octalNum = 0, decimalNum = 0, count = 0;

        while (n != 0)
        {
                decimalNum += (n % 10) * pow(2, count);
                ++count;
                n /= 10;
        }
        count = 1;
        while (decimalNum != 0)
        {
                octalNum += (decimalNum % 8) * count;
                decimalNum /= 8;
                count *= 10;
        }
        cout << octalNum;
}

void binToHex(int n)
{
        int hex[1000];
        int i = 1, j = 0, rem, dec = 0;
        while (n > 0)
        {
                rem = n % 2;
                dec = dec + rem * i;
                i = i * 2;
                n = n / 10;
        }
        i = 0;
        while (dec != 0)
        {
                hex[i] = dec % 16;
                dec = dec / 16;
                i++;
        }
        for (j = i - 1; j >= 0; j--)
        {
                if (hex[j] > 9)
                {
                        cout << (char)(hex[j] + 55);
                }
                else
                {
                        cout << hex[j];
                }
        }
}

void octalToBin(int n)
{
        int decimalNum = 0, binaryNum = 0, count = 0;

        while (n != 0)
        {
                decimalNum += (n % 10) * pow(8, count);
                ++count;
                n /= 10;
        }
        count = 1;
        while (decimalNum != 0)
        {
                binaryNum += (decimalNum % 2) * count;
                decimalNum /= 2;
                count *= 10;
        }
        cout << binaryNum;
}

void octalToDec(int n)
{
        int num = n;
        int dec_value = 0;

        // Initializing base value to 1, i.e 8^0
        int base = 1;

        int temp = num;
        while (temp)
        {

                // Extracting last digit
                int last_digit = temp % 10;
                temp = temp / 10;

                // Multiplying last digit with appropriate
                // base value and adding it to dec_value
                dec_value += last_digit * base;

                base = base * 8;
        }

        cout << dec_value;
}

void octalToHex()
{
        int a[20], b[20], rev[20];
        int h, i, j, k, l, x, fra, flag, rem, num1, num3;
        float rem1, num2, num4, dno;
        char s[20];
        x = fra = flag = rem = 0;
        rem1 = 0.0;
        cout << "Enter the number to convert: ";
        cin >> s;
        for (i = 0, j = 0, k = 0; i < strlen(s); i++)
        {
                if (s[i] == '.')
                {
                        flag = 1;
                }
                else if (flag == 0)
                {
                        a[j++] = s[i] - 48;
                }
                else if (flag == 1)
                {
                        b[k++] = s[i] - 48;
                }
        }
        x = j;
        fra = k;
        for (j = 0, i = x - 1; j < x; j++, i--)
        {
                rem = rem + (a[j] * pow(8, i));
        }
        for (k = 0, i = 1; k < fra; k++, i++)
        {
                rem1 = rem1 + (b[k] / pow(8, i));
        }
        rem1 = rem + rem1;
        dno = rem1;
        num1 = (int)dno;
        num2 = dno - num1;

        i = 0;
        while (num1 != 0)
        {
                rem = num1 % 16;
                rev[i] = rem;
                num1 = num1 / 16;
                i++;
        }
        j = 0;
        while (num2 != 0.0)
        {
                num2 = num2 * 16;
                num3 = (int)num2;
                num4 = num2 - num3;
                num2 = num4;
                a[j] = num3;
                j++;
                if (j == 4)
                {
                        break;
                }
        }
        l = i;
        cout << "in Hex = ";
        for (i = l - 1; i >= 0; i--)
        {
                if (rev[i] == 10)
                {
                        cout << "A";
                }
                else if (rev[i] == 11)
                {
                        cout << "B";
                }
                else if (rev[i] == 12)
                {
                        cout << "C";
                }
                else if (rev[i] == 13)
                {
                        cout << "D";
                }
                else if (rev[i] == 14)
                {
                        cout << "E";
                }
                else if (rev[i] == 15)
                {
                        cout << "F";
                }
                else
                {
                        cout << rev[i];
                }
        }
        h = j;
        cout << ".";
        for (k = 0; k < h; k++)
        {
                if (a[k] == 10)
                {
                        cout << "A";
                }
                else if (a[k] == 11)
                {
                        cout << "B";
                }
                else if (a[k] == 12)
                {
                        cout << "C";
                }
                else if (a[k] == 13)
                {
                        cout << "D";
                }
                else if (a[k] == 14)
                {
                        cout << "E";
                }
                else if (a[k] == 15)
                {
                        cout << "F";
                }
                else
                {
                        cout << a[k];
                }
        }
}

int main()
{
        int selectNum, n, again;

        /* cout<<"Choose What You Went : "<<endl
    <<"1)dec to bin"<<endl<<"2)dec to octal"<<endl<<"3)dec to hex"<<endl
    <<"4)bin to dec"<<endl<<"5)bin to octal"<<endl<<"6)bin to hex"<<endl
    <<"7)octal to bin"<<endl<<"8)octal to dec"<<endl<<"9)octal to hex"<<endl;
    cout<<"Your Answer ? ";
    cin>>selectNum;*/

        do
        {
                cout << "Choose What You Went : " << endl
                     << "1)dec to bin" << endl
                     << "2)dec to octal" << endl
                     << "3)dec to hex" << endl
                     << "4)bin to dec" << endl
                     << "5)bin to octal" << endl
                     << "6)bin to hex" << endl
                     << "7)octal to bin" << endl
                     << "8)octal to dec" << endl
                     << "9)octal to hex" << endl;
                cout << "Your Answer ? ";
                cin >> selectNum;

                switch (selectNum)
                {
                case 1:
                        /* dec-bin */
                        cout << "Enter the number to convert: ";
                        cin >> n;
                        cout << "in Binary = ";
                        DecimlToBinary(n);
                        cout << endl;
                        break;
                case 2:
                        /* dec-octal*/
                        cout << "Enter the number to convert: ";
                        cin >> n;
                        cout << "in Octal = ";
                        DecimalToOctal(n);
                        cout << endl;
                        break;
                case 3:
                        /*dec-hex*/
                        cout << "Enter the number to convert: ";
                        cin >> n;
                        cout << "in Hex = ";
                        DecimalToHex(n);
                        cout << endl;
                        break;
                case 4:
                        /*bin-dec*/
                        cout << "Enter the number to convert: ";
                        cin >> n;
                        cout << "in Dec = ";
                        BinaryToDecimal(n);
                        cout << endl;
                        break;
                case 5:
                        /*bin-octal*/
                        cout << "Enter the number to convert: ";
                        cin >> n;
                        cout << "in Octal = ";
                        binToOctal(n);
                        cout << endl;
                        break;
                case 6:
                        /*bin-hex*/
                        cout << "Enter the number to convert: ";
                        cin >> n;
                        cout << "in Hex = ";
                        binToHex(n);
                        cout << endl;
                        break;
                case 7:
                        /*octal-bin*/
                        cout << "Enter the number to convert: ";
                        cin >> n;
                        cout << "in Bin = ";
                        octalToBin(n);
                        cout << endl;
                        break;
                case 8:
                        /*octal-dec*/
                        cout << "Enter the number to convert: ";
                        cin >> n;
                        cout << "in Dec = ";
                        octalToDec(n);
                        cout << endl;
                        break;
                case 9:
                        /*octal-hex*/
                        //cout<<"in Hex = ";
                        //cout<<"Enter the number to convert: ";
                        //cin>>n;
                        octalToHex();
                        cout << endl;
                        break;
                default:
                        cout << "Out of range" << endl;
                        break;
                }
                if (selectNum != 10)
                {
                        cout << "Do you want to do another operation?" << endl;
                        cout << "1- Yes"
                             << "\t"
                             << "2- No" << endl;
                        cout << "Your choice number is : ";
                        cin >> again;
                }
                else
                {
                        break;
                }
        } while (again == 1);

        system("Pause");
        return 0;
}