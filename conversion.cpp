#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int FromBinaryToDicemal(){
    int digitnum;
    cout << "pleace enter digit number:" << endl;
    cin >> digitnum;
    int binarynum[digitnum];
    cout << "pleace enter digits valeos:" << endl;
    for (int i = 0; i < digitnum; i++)
    {
        cin >> binarynum[i];
        if (binarynum[i] > 1 || binarynum[i] < 0)
        {
            cout << "invalid valeo!!!"<< endl;
            break;
        }
    }
    int decimalfrombianry = 0;
    for (int i = 0; i < digitnum; i++)
    {
        decimalfrombianry += (binarynum[i] * pow(2,i));
    }
    cout << "the Dicemal number is :" << endl;
    return decimalfrombianry;

} 

int FromoctalToDicemal(){
    int digitnum;
    cout << "pleace enter digit number:" << endl;
    cin >> digitnum;
    int ctalnum[digitnum];
    cout << "pleace enter digits valeos:" << endl;
    for (int i = 0; i < digitnum; i++)
    {
        cin >> ctalnum[i];
        if (ctalnum[i] < 0 || ctalnum[i] > 7)
        {
            cout << "invalid valeo!!!"<< endl;
            break;
        }
        
    }
    int decimalfromctal = 0;
    for (int i = 0; i < digitnum; i++)
    {
        decimalfromctal += (ctalnum[i] * pow(8,i));
    }
    cout << "the Dicemal number is :" << endl;
    return decimalfromctal;

} 

int FromhexadecimalToDicemal(){
    int digitnum;
    cout << "pleace enter digit number:" << endl;
    cin >> digitnum;
    char hexadecimalnum[digitnum];
    cout << "pleace enter digits valeos:" << endl;
    for (int i = 0; i < digitnum; i++)
    {
        cin >> hexadecimalnum[i];
        switch (hexadecimalnum[i])
        {
        case 'A':
            hexadecimalnum[i] = 10;
            break;
        case 'B':
            hexadecimalnum[i] = 11;
            break;

        case 'C':
            hexadecimalnum[i] = 12;
            break;

        case 'D':
            hexadecimalnum[i] = 13;
            break;

        case 'E':
            hexadecimalnum[i] = 14;
            break;

        case 'F':
            hexadecimalnum[i] = 15;
            break;

        default:
            break;
        }

    }
    int decimalfromhexadecimal = 0;
    for (int i = 0; i < digitnum; i++)
    {
        decimalfromhexadecimal += (hexadecimalnum[i] * pow(16,i));
    }
    cout << "the hexadecimal number is :" << endl;
    return decimalfromhexadecimal;

}


void FromDicemalToBinary(){
    int num ;
    cout << "pleace enter num:" << endl;
    cin >> num;
    
    int i;
    int* mod = new int[i];
    cout << "the number in Binary:" << endl;
    for (i = 0; num > 0 ; i++)
    {
        mod[i] = num % 2;
        cout << mod[i] ;
        num /= 2;
    }
}

void FromDicemalTooctal(){
    int num ;
    cout << "pleace enter num:" << endl;
    cin >> num;
    
    int i;
    int* mod = new int[i];
    cout << "the number in Octal:" << endl;
    for (i = 0; num > 0 ; i++)
    {
        mod[i] = num % 8;
        cout << mod[i] ;
        num /= 8;
    }
}

void FromDicemalTohexadecimal(){
    int num ;
    cout << "pleace enter num:" << endl;
    cin >> num;
    cout << "the number in hexadecimal:" << endl;
    int i;
    int* mod = new int[i];

    for (i = 0; num > 0 ; i++)
    {
        mod[i] = num % 16;
        //cout << mod[i] ;
        switch (mod[i])
        {
        case 10:
            cout << 'A';
            break;

        case 11:
            cout << 'B';
            break;

        case 12:
            cout << 'C';
            break;

        case 13:
            cout << 'D';
            break;

        case 14:
            cout << 'E';
            break;

        case 15:
            cout << 'F';
            break;
        
        default:
            cout << mod[i] ;
            break;
        }
        num /= 16;
    }
}

int main()
{
    cout 
        << "to choose Decimal : 1" << endl
        << "to choose bianry : 2" << endl
        << "to choose octal : 3" << endl
        << "to choose hexadecimal : 4" << endl;
    int from;
    cout << "pleace enter from num system:" << endl;
    cin >> from;

    int to;
    cout << "pleace enter to num system:" << endl;
    cin >> to;

    if (from == 2 && to == 1)
    {
        cout << FromBinaryToDicemal();
    }
    
    if (from == 3 && to == 1)
    {
        cout << FromoctalToDicemal();
    }

    if (from == 4 && to == 1)
    {
        cout << FromhexadecimalToDicemal();
    }

    if (from == 1 && to == 2)
    {
        FromDicemalToBinary();
    }

    if (from == 1 && to == 3)
    {
        FromDicemalTooctal();
    }

    if (from == 1 && to == 4)
    {
        FromDicemalTohexadecimal();
    }


    return 0;
}