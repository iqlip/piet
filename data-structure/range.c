#include <stdio.h>
#include<limits.h>

int main()
{   
    printf("The Range of Signed Characters   = %d to %d\n", SCHAR_MIN, SCHAR_MAX);
    
    printf("The Range of Unsigned Characters = 0 to %d\n", UCHAR_MAX);

    printf("The Range of Signed Integer      = %d to %d\n", INT_MIN, INT_MAX);
    
    printf("The Range of Unsigned Integer    = 0 to %d\n", UINT_MAX);

    printf("The Range of Signed Short Int    = %d to %d\n", SHRT_MIN, SHRT_MAX);
    
    printf("The Range of Unsigned Short Int  = 0 to %d\n", USHRT_MAX);

    printf("The Range of Signed Long         = %ld to %ld\n", LONG_MIN, LONG_MAX);
    
    printf("The Range of Unsigned Long       = 0 to %lu\n", ULONG_MAX);

    return 0;
}