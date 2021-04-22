#include <stdio.h>

void towersOfHanoi(int n , char from_rod , char to_rod, char aux_rod)
{
    if(n == 1)
        printf("Move disc from %c to %c\n" , from_rod , to_rod);
    else{
        towersOfHanoi(n-1,from_rod ,aux_rod, to_rod);
        printf("Move disc from %c to %c\n" , from_rod , to_rod);
        towersOfHanoi(n -1,aux_rod ,to_rod, from_rod);
    }
    
}

int main()
{
            
    towersOfHanoi(3 ,'A' ,'C','B');
    return 0;
}