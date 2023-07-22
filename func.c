//This file contains the function to scale and output the ascii art.


#include <stdio.h>
#include "func.h"


void scaler(int n, char art[5][5]){

    int h = 0;

    //Loop stuff for scaling 
    for(int row=0; row<5;row++){
        for(int col=0; col<5; col++){ //Scale horizontally 
            while(h<n){
                printf("%c", art[row][col]);
                h++;
            }
            h=0;
        }
        for(int k = 1; k<n; k++){ //Scale vertically
            printf("\n");
            for(int col=0; col<5; col++){ 
                while(h<n){
                    printf("%c", art[row][col]);
                    h++;
                }
                h=0;
            }
        }
        printf("\n");
    }
}
