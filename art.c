/*
 Eric Le
 ASCII Art Program
 CS 261

 This program takes a scale factor from the user and
 scales the "owl" ascii art. The included Makefile will 
 build the program, and provide a run rule.
 */


#include <stdio.h>
#include "func.h"


int main() {

    int n;
    char art[5][5] = {{"/\\_/\\"},{"(o.o)"},{"//^\\\\"},{"|===|"},{"/\\ /\\"}};
    

    //Print art in original scale 
    for(int row=0; row<5; row++){  
        for(int col=0; col<5; col++){  
            printf("%c", art[row][col]);
        }
        printf("\n"); 
    }
    printf("\n");

    
    do{
        printf("Enter a scaling factor: ");
        scanf("%d",&n); 
    } while(n <= 0); //Keep repeating if input isn't positive
    printf("\n");


    scaler(n, art);
    return 0;
}
