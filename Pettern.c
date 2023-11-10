#include <stdio.h>
int main(){
 // C Program to Print Pyramids and Patterns
    printf("C Program to Print Pyramids and Patterns\n");
    int n,col,row,count=1;
    printf("Enter Pattern Number: ");
    scanf("%i", &n);
    
    //C Program to Print right angle triangle Patterns
    for(row = 1; row<=n; row++){
        for(col = 1; col<=row; col++){
            printf("%i ",col);
        }
        printf("\n");    
    }
    printf("\n");  

    //C Program to Print opposite right angle triangle Patterns
    for(row = n; row>=1; row--){
        for(col = 1; col<=row; col++){
            printf("%i ",col);
        }
        printf("\n");    
    }

    printf("\n"); 


    //C Program to Print double right angle triangle Patterns
    //This one for first right angle
    for(row = 1; row<=n; row++){
        for(col = 1; col<=row; col++){
            printf("%i ",col);
        }
        printf("\n");    
    }
    //This one for opposite
    for(row = n-1; row>=1; row--){
        for(col = 1; col<=row; col++){
            printf("%i ",col);
        }
        printf("\n");    
    }

    printf("\n");


    //C Program to Print right angle triangle Patterns align right
    for(row = 1; row<=n; row++){
        
        for(col = 1; col<=n-row; col++){
            printf("  ");
        }

        for(col = 1; col<=row; col++){
            printf("%i ",col);
        }
        printf("\n");    
    }
    printf("\n");


    //C Program to Print right angle triangle Patterns align right opposite
    for(row = n; row>=1; row--){
        
        for(col = 1; col<=n-row; col++){
            printf("  ");
        }
        
        for(col = 1; col<=row; col++){
            printf("%i ",col);
        }
        printf("\n");    
    }
    printf("\n");



        //C Program to Print right angle triangle Patterns align right common
    for(row = 1; row<=n; row++){
        
        for(col = 1; col<=n-row; col++){
            printf("  ");
        }
        
        for(col = 1; col<=row; col++){
            printf("%i ",col);
        }
        printf("\n");    
    }

    for(row = n-1; row>=1; row--){
        
        for(col = 1; col<=n-row; col++){
            printf("  ");
        }
        
        for(col = 1; col<=row; col++){
            printf("%i ",col);
        }
        printf("\n");    
    }
    printf("\n");




/*
======================================================================
        //C Program to Print Pyramid  
======================================================================
*/

//C Program to Print right angle Pyramid 
    for(row = 1; row<=n; row++){

        for(col = 1; col<=n-row; col++){
            printf("  ");
       }
        for(col = 1; col<=2*row-1; col++){
            printf("* ");
       }
        printf("\n"); 
    }
    printf("\n"); 



    //C Program to Print oppossite right angle Pyramid 
    for(row = n; row>=1; row--){

        for(col = 1; col<=n-row; col++){
            printf("  ");
       }
        for(col = 1; col<=2*row-1; col++){
            printf("* ");
       }
        printf("\n"); 
    }
    printf("\n"); 


//C Program to Print  squire Pyramid

    //right angle Pyramid 
    for(row = 1; row<=n; row++){

        for(col = 1; col<=n-row; col++){
            printf("  ");
       }
        for(col = 1; col<=2*row-1; col++){
            printf("* ");
       }
        printf("\n"); 
    } 

    //oppossite right angle Pyramid 
    for(row = n-1; row>=1; row--){

        for(col = 1; col<=n-row; col++){
            printf("  ");
       }
        for(col = 1; col<=2*row-1; col++){
            printf("* ");
       }
        printf("\n"); 
    }
   printf("\n"); 





    //C Program to Print squire 
    for(row = 1; row<=n; row++){

        for(col = 1; col<=n; col++){
            if(col==1 || col==n || row==1|| row==n){
                printf("* ");
            }
            else{
                printf("  ");
            }
       }
        printf("\n"); 
    }
    printf("\n"); 



//C Program to Print Triangle 
    for(row = 1; row<=n; row++){

        for(col = 1; col<=row; col++){
            if(col==1 || row==n || col==row){
                printf("* ");
            }
            else{
                printf("  ");
            }
       }
        printf("\n"); 
    }
    printf("\n");



//C Program to Print cross(x) 
    for(row = 1; row<=n; row++){

        for(col = 1; col<=n; col++){
            if(col==row || col+row==n+1 ){
                printf("* ");
            }
            else{
                printf("  ");
            }
       }
        printf("\n"); 
    }
    printf("\n");



    //C Program to Print rt triangle 
    for(row = 1; row<=n; row++){

        for(col = 1; col<=row; col++){
            printf("%i ", count);
            count++;
       }
        printf("\n"); 
    }
    printf("\n");



//C Program to Print common triangle 
    for(row = 1; row<=n; row++){

        for(col = 1; col<=n-row; col++){
            printf("  ");
       }
        
        for(col = 1; col<=row; col++){
            printf("%i ", col);
       }

        for(col = row-1; col>=1; col--){
            printf("%i ", col);
       }
        printf("\n"); 
    }
    printf("\n");



    //C Program to Print square
    //triangle 1
    for(row = 1; row<=n; row++){

        for(col = 1; col<=n-row; col++){
            printf("  ");
       }
        
        for(col = 1; col<=row; col++){
            printf("%i ", col);
       }

        for(col = row-1; col>=1; col--){
            printf("%i ", col);
       }
        printf("\n"); 
    }

    //triangle 2
    for(row = n-1; row>=1; row--){

        for(col = 1; col<=n-row; col++){
            printf("  ");
       }
        
        for(col = 1; col<=row; col++){
            printf("%i ", col);
       }

        for(col = row-1; col>=1; col--){
            printf("%i ", col);
       }
        printf("\n"); 
    }
    printf("\n");      
    return 0;
}