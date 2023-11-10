#include <stdio.h>
int main() {

    int i, n, tem, rem,count=0, sum  = 0, fact = 1, a=2, b=1, result,f;
    printf("Enter a number: ");
    scanf("%i", &n);
    tem = n;
    
   
    // C Program to Calculate the Sum of Natural Numbers
    // for(i = 1; i<=tem; i++){
    //     sum = sum + i;
    //     // printf("%i\n", i);
    // }
    // printf("\nThe sum of 1 + 2 + 3.......%i = %i\n",n, sum);



    // C Program to Find Factorial of a Number
    for(i = 1; i<=tem; i++){
        fact = fact * i;
        // printf("%i\n", i);
    }
    printf("\nThe sum of 1 * 2 * 3.......%i = %i\n",n, fact);


    // // C Program to Generate Multiplication Table
    // for(i = 1; i<=10; i++){
    //     printf("\n%i * %i = %i\n",n,i, tem*i);
    // }
    


// C Program to Display Fibonacci Sequence
    // while(f<tem){
    //     if(f <= 1){
    //         result = f;
    //     }
    //     else{
    //         result = a + b;
    //         a = b;
    //         b = result;
    //     }
    //     sum = sum + result;
    //     printf("%i ", result);
    //     f++;
    // }
    // printf("= %i", sum);


        
 // C Program to Display Lucus Sequence
    // printf("%i %i ", a, b);
    // while(f<tem){
    //     result = a + b;
    //     printf("%i ", result);
    //     a = b;
    //     b = result;
    //     f++;
    // }
    return 0;
}