

/////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : ToggleBit
//  Input         : unsigned Integer(Number)
//  Output        : unsigned Integer(Coverted number)
//  Description   : Accept Number from user and convert it into number after Bitwise-OR operation
//                  Input : 69
//                  Output : 65
//                  Input : 10
//                  Output : 14
//  Date          : 01/04/2021
//  Author        : Pranav Anil Waghmare
//
/////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>


unsigned int ToggleBit(unsigned int iNo)   // 69
    
{
    unsigned int iMask = 0X00000004;
    unsigned int Result = 0;
    
    Result = iNo ^ iMask;
    
    return Result;
}

int main()
{
    unsigned int iValue = 0;
    unsigned int iRet = 0;
    printf("Enter number\n");
    scanf("%u",&iValue);
    
    iRet = ToggleBit(iValue);
    
    printf("Number after updation : %d\n",iRet);
    return 0;
}


//         F           F          F            F           F           F           B           B
//      1111        1111        1111        1111        1111        1111        1011        1011
// ^(OR)
// 		0000	    0000	    0000 	    0000 	    0000 	    0000 	    0000 	    0100
//-----------------------------------------------------------------------------------------------------
//		1111        1111        1111        1111        1111        1111        1011        1111































