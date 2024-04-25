#include <stdio.h>

#\
define \
test \
 33



int main(void){
    
    printf("%d\n", sizeof(int));
    if(128U == (-1))//  0000 0000 0000 0000 0000 0000 0000 0000 0100 > 1111 1111 1111 1111 1111 1111 1111 1111
        printf("true");
    else
        printf("false");
    int x;
    int f;
    getchar();
    return 0;
}
