
/////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : CountOne
//  Input         : unsigned Integer(Number)
//  Output        : unsigned Integer(Binary digits)
//  Description   : Accept Number from user and convert it into binary number and count ON bits
//                  Input : 10
//                  Output : 2
//                  Input : 2
//                  Output : 1
//  Date          : 01/04/2021
//  Author        : Pranav Anil Waghmare
//
/////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

int CountOne(unsigned int iNo)
{
    unsigned int iDigit = 0;
    int iCnt = 0;
    while(iNo > 0)
    {
        iDigit = iNo % 2;
        if(iDigit == 1)
        {
            iCnt++;
        }
        iNo = iNo / 2;
    }
    return iCnt;
}

int main()
{
    unsigned int iValue = 0;
    int iRet = 0;
    printf("Enter number\n");
    scanf("%u",&iValue);
    
    iRet = CountOne(iValue);
    
    printf("Number of on bits are : %d\n",iRet);
    return 0;
}






















