#include <stdio.h>
#define SIZE 500

void reverse (const char * const sPtr);

int main(){
    
    char palavra [SIZE];
    
    scanf ("%[^\n]s", palavra);

    reverse (palavra);
    printf ("\n"); 

}
void reverse (const char * const palavra)
{
    if ('\0' == palavra[0])
        return;
    else { 
        reverse( &palavra[1]); 
        printf ("%c", palavra[0]);
    }
} 