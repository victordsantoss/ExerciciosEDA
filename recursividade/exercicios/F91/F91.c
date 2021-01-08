#include <stdio.h>
#include <stdlib.h>

int F91 (int num);

int main (){

    int num;

    while(1){
        scanf ("%d", &num);
        if (num == 0)
            break;
            
        printf ("f91(%d) = %d\n", num, F91(num));
    }

    return 0;
}

int F91 (int num){

    if (num >= 101)
        return num-10;
    else 
        return F91(F91(num+11));
}