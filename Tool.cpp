#include <iostream>
#include <string>
#include <iomanip>
#include <math.h>

using namespace std;

typedef string bin;

int soBit = 16;
//Khai bao prototype

void thanChuongTrinh();
string DectoString(int dec);
int StringtoDec(string a);
string DectoBin(string dec);
void LayBuMot(string &bin);
void CongMot(string &bin);
void TruMot(string &bin);
string InputDec();
void FuntionDectoBin();
void FuntionDectoBinBitDau();
void FuntionDectoBinBuMot();
void FuntionDectoBinBuHai();
void FuntionDectoBinThuaSok();
string BintoDec(string bin);
string InputBin();
void FuntionBintoDec();
int BinHopLe(string bin);
void FuntionBinBitDautoDec();
void FuntionBinBuMottoDec();
void FuntionBinBuHaitoDec();
void FuntionBinThuaktoDec();
string DecThapPhantoBin(double dou);
string DectoBinKhongBu(string dec);
void FuntionDecThapPhantoBin();
void FuntionDecThapPhantoBinChamDong();
int fcountE(string bin);
string MaBin(char ch);
void FuntionDectoBinBCD();
void FuntionHextoBCD();

int main()
{
    thanChuongTrinh();
    return 0;
}

void thanChuongTrinh()
{
    cout << "                 " << endl;
    cout << setw(20) << "TOOL CHUYEN DOI HE SO" << endl;
    cout << "_______________________________________________________________" << endl;
    int sign1, sign2;
    do
    {
        cout << "Chon Input: " << endl;
        cout << "1. Dec" << endl;
        cout << "2. Bin" << endl;
        cout << "3. Bin kieu bit dau" << endl;
        cout << "4. Bin kieu bu 1" << endl;
        cout << "5. Bin kieu bu 2" << endl;
        cout << "6. Bin kieu thua so k" << endl;
        cout << "7. So thap phan(co dau .)" << endl;
        cout << "8. Hex" << endl;
        cout << "0. Thoat" << endl;
        cin >> sign1;
        if (sign1 == 0)
            exit(1);
        cout << "Chon Output: " << endl;
        if (sign1 == 1)
        {
            cout << "1. Bin" << endl;
            cout << "2. Bin kieu bit dau" << endl;
            cout << "3. Bin kieu bu 1" << endl;
            cout << "4. Bin kieu bu 2" << endl;
            cout << "5. Bin kieu thua so k" << endl;
            cout << "6. Ma BCD" << endl;
            cin >> sign2;
            if (sign2 == 1)
            {
                FuntionDectoBin();
                cout << endl
                     << "Nhan phim enter de tiep tuc" << endl;
                cin.ignore();
                cin.ignore();
            }
            else if (sign2 == 2)
            {
                FuntionDectoBinBitDau();
                cout << endl
                     << "Nhan phim enter de tiep tuc" << endl;
                cin.ignore();
                cin.ignore();
            }
            else if (sign2 == 3)
            {
                FuntionDectoBinBuMot();
                cout << endl
                     << "Nhan phim enter de tiep tuc" << endl;
                cin.ignore();
                cin.ignore();
            }

            else if (sign2 == 4)
            {
                FuntionDectoBinBuHai();
                cout << endl
                     << "Nhan phim enter de tiep tuc" << endl;
                cin.ignore();
                cin.ignore();
            }

            else if (sign2 == 5)
            {
                FuntionDectoBinThuaSok();
                cout << endl
                     << "Nhan phim enter de tiep tuc" << endl;
                cin.ignore();
                cin.ignore();
            }
            else if (sign2 == 6)
            {
                FuntionDectoBinBCD();
                cout << endl
                     << "Nhan phim enter de tiep tuc" << endl;
                cin.ignore();
                cin.ignore();
            }
        }
        else if (sign1 == 2 || sign1 == 3 || sign1 == 4 || sign1 == 5 || sign1 == 6)
        {
            cout << "1. Dec" << endl;
            cin >> sign2;
            if (sign1 == 2 && sign2 == 1)
            {
                FuntionBintoDec();
                cout << endl
                     << "Nhan phim enter de tiep tuc" << endl;
                cin.ignore();
                cin.ignore();
            }
            if (sign1 == 3 && sign2 == 1)
            {
                FuntionBinBitDautoDec();
                cout << endl
                     << "Nhan phim enter de tiep tuc" << endl;
                cin.ignore();
                cin.ignore();
            }
            if (sign1 == 4 && sign2 == 1)
            {
                FuntionBinBuMottoDec();
                cout << endl
                     << "Nhan phim enter de tiep tuc" << endl;
                cin.ignore();
                cin.ignore();
            }
            if (sign1 == 5 && sign2 == 1)
            {
                FuntionBinBuHaitoDec();
                cout << endl
                     << "Nhan phim enter de tiep tuc" << endl;
                cin.ignore();
                cin.ignore();
            }
            if (sign1 == 6 && sign2 == 1)
            {
                FuntionBinThuaktoDec();
                cout << endl
                     << "Nhan phim enter de tiep tuc" << endl;
                cin.ignore();
                cin.ignore();
            }
        }

        else if (sign1 == 7)
        {
            cout << "1. Bin" << endl;
            cout << "2. Bin kieu dau cham dong" << endl;
            cin >> sign2;
            if (sign1 == 7 && sign2 == 1)
            {
                FuntionDecThapPhantoBin();
                cout << endl
                     << "Nhan phim enter de tiep tuc" << endl;
                cin.ignore();
                cin.ignore();
            }
            if (sign1 == 7 && sign2 == 2)
            {
                FuntionDecThapPhantoBinChamDong();
                cout << endl
                     << "Nhan phim enter de tiep tuc" << endl;
                cin.ignore();
                cin.ignore();
            }
        }
        if (sign1 == 8)
        {
            cout << "1. Bin" << endl;
            cin >> sign2;
            if (sign1 == 8 && sign2 == 1)
            {
                FuntionHextoBCD();
                cout << endl
                     << "Nhan phim enter de tiep tuc" << endl;
                cin.ignore();
                cin.ignore();
            }
        }

        cout << endl
             << endl
             << "____________________________________" << endl;
    } while (sign1 != 0);
    cout << "hihi";
}

string DectoString(int dec)
{
    string a = "";
    char ch;
    do
    {
        ch = (char)(dec % 10 + 48);
        a = ch + a;
        dec /= 10;
    } while (dec > 0);
    return a;
}

int StringtoDec(string a)
{
    int s = 0;
    int so;
    for (int i = 0; i < a.size(); i++)
    {
        so = (int)a[i] - 48;
        s = 10 * s + so;
    }
    return s;
}

string DectoBin(string dec)
{
    string bin = "";
    int so = StringtoDec(dec);
    char kt;
    do
    {
        kt = (char)(so % 2 + 48);
        bin = kt + bin;
        so /= 2;
    } while (so > 0);
    while (bin.size() < soBit)
    {
        bin = '0' + bin;
    }
    return bin;
}

void LayBuMot(string &bin)
{
    for (int i = 0; i < bin.size(); i++)
    {
        if (bin[i] == '1')
            bin[i] = '0';
        else
            bin[i] = '1';
    }
}

void CongMot(string &bin)
{
    int i = bin.size() - 1;
    while (bin[i] == '1' && i >= 0)
    {
        bin[i] = '0';
        i--;
    }
    if (i >= 0)
        bin[i] = '1';
}

void TruMot(string &bin)
{
    int i = bin.size() - 1;
    while (bin[i] == '0' && i >= 0)
    {
        bin[i] = '1';
        i--;
    }
    if (i >= 0)
        bin[i] = '0';
}

string InputDec()
{
    string a;
    cin >> a;
    return a;
}

void FuntionDectoBin()
{
    do
    {
        cout << "Nhap so bit (4, 8, 16, 32):  ";
        cin >> soBit;
    } while (soBit != 4 && soBit != 8 && soBit != 16 && soBit != 32);
    string dec;
    cout << "Nhap Dec (dec >= 0):  ";
    dec = InputDec();
    string bin = "";
    bin = DectoBin(dec);
    cout << endl
         << "Ket qua: " << bin << endl;
}

void FuntionDectoBinBitDau()
{
    do
    {
        cout << "Nhap so bit (4, 8, 16, 32):  ";
        cin >> soBit;
    } while (soBit != 4 && soBit != 8 && soBit != 16 && soBit != 32);
    string dec;
    string decduong = "";
    char dau = '+';
    cout << "Nhap Dec: ";
    dec = InputDec();
    if (dec[0] == '-')
    {
        dau = '-';
        for (int i = 1; i < dec.size(); i++)
            decduong += dec[i];
    }
    else
        decduong = dec;
    string bin = "";
    bin = DectoBin(decduong);
    if (dau == '-')
        bin[0] = '1';
    cout << endl
         << "Ket qua: " << bin << endl;
}

void FuntionDectoBinBuMot()
{
    do
    {
        cout << "Nhap so bit (4, 8, 16, 32):  ";
        cin >> soBit;
    } while (soBit != 4 && soBit != 8 && soBit != 16 && soBit != 32);
    string dec;
    string decduong = "";
    char dau = '+';
    cout << "Nhap Dec: ";
    dec = InputDec();
    if (dec[0] == '-')
    {
        dau = '-';
        for (int i = 1; i < dec.size(); i++)
            decduong += dec[i];
    }
    else
        decduong = dec;
    string bin = "";
    bin = DectoBin(decduong);
    if (dau == '-')
        LayBuMot(bin);
    cout << endl
         << "Ket qua: " << bin << endl;
}

void FuntionDectoBinBuHai()
{
    do
    {
        cout << "Nhap so bit (4, 8, 16, 32):  ";
        cin >> soBit;
    } while (soBit != 4 && soBit != 8 && soBit != 16 && soBit != 32);
    string dec;
    string decduong = "";
    char dau = '+';
    cout << "Nhap Dec: ";
    dec = InputDec();
    if (dec[0] == '-')
    {
        dau = '-';
        for (int i = 1; i < dec.size(); i++)
            decduong += dec[i];
    }
    else
        decduong = dec;
    string bin = "";
    bin = DectoBin(decduong);
    if (dau == '-')
    {
        LayBuMot(bin);
        CongMot(bin);
    }
    cout << endl
         << "Ket qua: " << bin << endl;
}

void FuntionDectoBinThuaSok()
{
    do
    {
        cout << "Nhap so bit (4, 8, 16, 32):  ";
        cin >> soBit;
    } while (soBit != 4 && soBit != 8 && soBit != 16 && soBit != 32);
    string dec;
    string decduong = "";
    int k;
    cout << "Nhap thua so K:  ";
    cin >> k;
    char dau = '+';
    cout << "Nhap Dec: ";
    dec = InputDec();
    if (dec[0] == '-')
    {
        dau = '-';
        for (int i = 1; i < dec.size(); i++)
            decduong += dec[i];
    }
    else
        decduong = dec;
    decduong = DectoString(StringtoDec(decduong) + k);
    string bin = "";
    bin = DectoBin(decduong);
    if (dau == '-')
    {
        LayBuMot(bin);
        CongMot(bin);
    }
    cout << endl
         << "Ket qua: " << bin << endl;
}

string BintoDec(string bin)
{
    int dec = 0;
    int k = bin.size() - 1;
    for (int i = k; i >= 0; i--)
    {
        dec += int(pow(2, k - i)) * (int(bin[i]) - 48);
    }
    string strdec = "";
    strdec = DectoString(dec);
    return strdec;
}

string InputBin()
{
    string bin;
    cin >> bin;
    return bin;
}

void FuntionBintoDec()
{
    string bin;
    string dec = "";
    do
    {
        cout << "Nhap Bin:   ";
        bin = InputBin();
    } while (!BinHopLe(bin));
    dec = BintoDec(bin);
    cout << "Ket qua:  " << dec;
}

int BinHopLe(string bin)
{
    for (int i = 0; i < bin.size(); i++)
        if (bin[i] != '1' && bin[i] != '0')
            return 0;
    return 1;
}

void FuntionBinBitDautoDec()
{
    string bin;
    string dec = "";
    char dau = '+';
    do
    {
        cout << "Nhap Bin:   ";
        bin = InputBin();
    } while (!BinHopLe(bin));
    if (bin[0] == '1')
    {
        bin[0] = '0';
        dau = '-';
    }
    dec = BintoDec(bin);
    dec = dau + dec;
    cout << "Ket qua:  " << dec;
}

void FuntionBinBuMottoDec()
{
    string bin;
    string dec = "";
    char dau = '+';
    do
    {
        cout << "Nhap Bin:   ";
        bin = InputBin();
    } while (!BinHopLe(bin));
    if (bin[0] == '1')
    {
        LayBuMot(bin);
        dau = '-';
    }
    dec = BintoDec(bin);
    dec = dau + dec;
    cout << "Ket qua:  " << dec;
}

void FuntionBinBuHaitoDec()
{
    string bin;
    string dec = "";
    char dau = '+';
    do
    {
        cout << "Nhap Bin:   ";
        bin = InputBin();
    } while (!BinHopLe(bin));
    if (bin[0] == '1')
    {
        TruMot(bin);
        LayBuMot(bin);
        dau = '-';
    }
    dec = BintoDec(bin);
    dec = dau + dec;
    cout << "Ket qua:  " << dec;
}

void FuntionBinThuaktoDec()
{
    string bin;
    string dec = "";
    char dau = '+';
    int k;
    cout << "Nhap k:   ";
    cin >> k;
    do
    {
        cout << "Nhap Bin:   ";
        bin = InputBin();
    } while (!BinHopLe(bin));
    if (bin[0] == '0')
    {
        TruMot(bin);
        LayBuMot(bin);
        dau = '-';
    }
    dec = BintoDec(bin);
    dec = DectoString(StringtoDec(dec) - k);
    dec = dau + dec;
    cout << "Ket qua:  " << dec;
}

string DecThapPhantoBin(double dou)
{
    int phanNguyen = int(dou);
    double phanLe = dou - phanNguyen;
    string binPhanNguyen = DectoBinKhongBu(DectoString(phanNguyen));
    int k;
    string binPhanLe = "";
    int soBitLe = soBit - binPhanNguyen.size();
    while (binPhanLe.size() < soBitLe)
    {
        phanLe *= 2;
        k = int(phanLe);
        phanLe = phanLe - k;
        binPhanLe = binPhanLe + char(k + 48);
    }
    string bin = binPhanNguyen + '.' + binPhanLe;
    return bin;
}

string DectoBinKhongBu(string dec)
{
    string bin = "";
    int so = StringtoDec(dec);
    char kt;
    do
    {
        kt = (char)(so % 2 + 48);
        bin = kt + bin;
        so /= 2;
    } while (so > 0);
    return bin;
}

void FuntionDecThapPhantoBin()
{
    do
    {
        cout << "Nhap so bit (16, 32):  ";
        cin >> soBit;
    } while (soBit != 16 && soBit != 32);
    double dou;
    cout << "Nhap Dec thap phan (Dec >= 0):    ";
    cin >> dou;
    string bin = DecThapPhantoBin(dou);
    cout << endl
         << "Ket qua:   " << bin << endl;
}

void FuntionDecThapPhantoBinChamDong()
{
    double dou;
    char S = '0';
    cout << "Nhap Dec thap phan:    ";
    cin >> dou;
    if (dou < 0)
    {
        dou = -dou;
        S = '1';
    }
    soBit = 24;
    string bin = DecThapPhantoBin(dou);
    string E = "";
    string F = "";
    int countE = fcountE(bin);
    soBit = 8;
    E = DectoBin(DectoString(countE + 127));
    if (countE < 0)
    {
        LayBuMot(E);
        CongMot(E);
    }
    int look1 = 0;
    for (int i = 0; i < bin.size(); i++)
        if (bin[i] == '1')
        {
            look1 = i;
            break;
        }
    for (int i = look1 + 1; i < bin.size(); i++)
    {
        if (bin[i] == '.')
            continue;
        F += bin[i];
    }
    while (F.size() < 23)
        F += '0';
    cout << endl
         << "Ket qua:   " << endl
         << "S = " << S << endl
         << "E = " << E << endl
         << "F = " << F << endl
         << S + E + F;
}

int fcountE(string bin)
{
    int look1 = 0;
    for (int i = 0; i < bin.size(); i++)
        if (bin[i] == '1')
        {
            look1 = i;
            break;
        }
    int lookcham = 0;
    for (int i = 0; i < bin.size(); i++)
        if (bin[i] == '.')
        {
            lookcham = i;
            break;
        }
    return lookcham - look1 - 1;
}

string MaBin(char ch)
{
    switch (ch)
    {
    case '0':
        return "0000";
    case '1':
        return "0001";
    case '2':
        return "0010";
    case '3':
        return "0011";
    case '4':
        return "0100";
    case '5':
        return "0101";
    case '6':
        return "0110";
    case '7':
        return "0111";
    case '8':
        return "1000";
    case '9':
        return "1001";
    case 'A':
    case 'a':
        return "1010";
    case 'B':
    case 'b':
        return "1011";
    case 'C':
    case 'c':
        return "1100";
    case 'D':
    case 'd':
        return "1101";
    case 'E':
    case 'e':
        return "1110	";
    case 'F':
    case 'f':
        return "1111";
    }
    return "0000";
}

void FuntionDectoBinBCD()
{
    string dec;
    string decduong = "";
    char dau = '+';
    cout << "Nhap Dec: ";
    dec = InputDec();
    if (dec[0] == '-')
    {
        dau = '-';
        for (int i = 1; i < dec.size(); i++)
            decduong += dec[i];
    }
    else
        decduong = dec;
    string bin = "";
    int length = decduong.size();
    if (dau == '+')
    {
        bin += MaBin('0');
        for (int i = 0; i < decduong.size(); i++)
            bin = bin + ' ' + MaBin(decduong[i]);
    }
    else if (dau == '-')
    {
        bin += MaBin('9');
        for (int i = 0; i < decduong.size(); i++)
            decduong[i] = char((9 - (int(decduong[i]) - 48)) + 48);
        decduong = DectoString(StringtoDec(decduong) + 1);
        while (decduong.size() < length)
            decduong = '0' + decduong;
        for (int i = 0; i < decduong.size(); i++)
            bin = bin + ' ' + MaBin(decduong[i]);
    }
    cout << endl
         << "Ket qua: " << bin << endl;
}
void FuntionHextoBCD()
{
    string hex;
    string bin = "";
    cout << "Nhap Hex:   ";
    cin >> hex;
    for (int i = 0; i < hex.size(); i++)
        bin += ' ' + MaBin(hex[i]);
    cout << endl
         << "Ket qua:   " << bin;
}