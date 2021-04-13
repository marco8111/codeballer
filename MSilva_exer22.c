#include <stdio.h>
#include <math.h>


    
void main(){
    int i, j;
    for (i=0; i<4; i++){
        for(j=1; j<=4; j++){
            printf("%1.0f \t", j*pow(2, i));
            if (j==4){
                printf("\n");
            }
        }
    }
    
}


