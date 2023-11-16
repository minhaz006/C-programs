#include <stdio.h>
int main(){
    int sum = 0,result,n,i,num[20], j, max,min;
    char name,c;
    // printf("Enter digits: ");
    // for(i = 0; i<=4; i++){
    //     scanf("%i", &num[i]);
    //     sum = sum + num[i];
    // }
    // for(int i = 0; i<=4; i++){
    //     printf("%i ",num[i]);
    // }
    // printf(" = %i",sum);




    printf("Enter item number: ");
    scanf("%i", &n);
    printf("\nEnter numbers:\n");
    for(i = 0; i<n; i++) {
        scanf("%i", &num[i]);
    }


// Sum, Maximum, Minimum of array
    //Sum
    for(i = 0; i<n; i++) {
        sum = sum + num[i];
    }
    printf("\nSum of digits is = %i\n", sum);
//Maximum
    max = num[0];
    for(i = 1; i<n; i++) {
        if(max<num[i]) {
            max = num[i];
        }
    }
    printf("\nMaximum number is = %i\n",max);


// Minimum
    min = num[0];
    for(i = 1; i<n; i++) {
        if(min>num[i]) {
            min = num[i];
        }
    }
    printf("\nMinimum number is = %i\n",min);



//Fibonacci
    num[0]= 0;
    num[1]= 1;
    for (i=2; i<=n; i++){
        num[i] = num[i-1] + num[i-2];
    }
    printf("\nFibonacci = ");
    for (i=0; i<=n; i++){
        printf("%i ", num[i]);
    }
    printf("\n");



/*

//Linear search
    int item[5] = {23, 45, 40, 15, 39};
    int value = 15;
    int pos = -1;

    for(i=0; i<6; i++){
        if(value == item[i]){
            pos = i +1;
            break;
        }
    }
    if(pos == -1){
        printf("Number not available");
    }
    else{
        printf("%i",pos);
    }

    */
    return 0;
}