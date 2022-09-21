

/////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : OffBit
//  Input         : unsigned Integer(Number)
//  Output        : unsigned Integer(Binary digits)
//  Description   : Accept Number from user and convert it into number after Bitwise-AND operation
//                  Input : 63
//                  Output : 59
//                  Input : 10
//                  Output : 10
//  Date          : 01/04/2021
//  Author        : Pranav Anil Waghmare
//
/////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

unsigned int OffBit(unsigned int iNo)   // 69       
{
    unsigned int iMask = 0XFFFFFFBB;
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




//      0000        0000        0000        0000        0000        0000        0100        0101  (69)
//   &
//      1111        1111        1111        1111        1111        1111        1011        1011  (0XFFFFFFBB)
//--------------------------------------------------------------------------------------------------
//      0000        0000        0000        0000        0000        0000        0000        0001






























