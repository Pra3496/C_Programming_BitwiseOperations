
/////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : DisplayBinary
//  Input         : unsigned Integer(Number)
//  Output        : unsigned Integer(Binary digits)
//  Description   : Accept Number from user and convert it into binary number
//                  Input : 10
//                  Output : 1  0   1   0
//                  Input : 5
//                  Output : 0  1   0   1
//  Date          : 01/04/2021
//  Author        : Pranav Anil Waghmare
//
/////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

void DisplayBinary(unsigned int iNo)
{
    unsigned int iDigit = 0;
    while(iNo > 0)
    {
        iDigit = iNo % 2;
        printf("%u\t",iDigit);
        iNo = iNo / 2;
    }
}

int main()
{
    unsigned int iValue = 0;
    
    printf("Enter number\n");
    scanf("%u",&iValue);
    
    DisplayBinary(iValue);
    
    return 0;
}






















