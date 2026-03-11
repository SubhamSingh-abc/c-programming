#include <stdio.h>        
#include <stdlib.h>
#include <time.h>
int main () {
    unsigned int r;
    rand_s(&r);
    printf("%u\n",r);
    return 0;
}

/*rand_s() is much more secure and is designed by Microsoft Cooperation , its way more
secure and harder predict. (CAN'T RUN ON COMPILERS LIKE CGG NEED MSVC)*/