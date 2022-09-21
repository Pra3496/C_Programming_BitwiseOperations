
/////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : OffBit
//  Input         : unsigned Integer(Number)
//  Output        : unsigned Integer(Binary digits)
//  Description   : Accept Number from user and convert it number after updating bits
//                  Input : 10
//                  Output : 2
//                  Input : 2
//                  Output : 1
//  Date          : 01/04/2021
//  Author        : Pranav Anil Waghmare
//
/////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

unsigned int OffBit(unsigned int iNo)
{
    unsigned int iMask = 0xFFFFFFFB;
    
    unsigned int Result = 0;
    Result = iNo & iMask;
    
    return Result;
}

int main()
{
    unsigned int iValue = 0;
    unsigned int iRet = 0;
    printf("Enter number\n");
    scanf("%u",&iValue);
    
    iRet = OffBit(iValue);
    
    printf("Number after updation : %d\n",iRet);
    return 0;
}





































