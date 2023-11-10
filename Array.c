#include <stdio.h>
int main(){
    int sum = 0,result,n,i,num[5];
    char name,c;
    printf("Enter digits: ");
    for(i = 0; i<=4; i++){
        scanf("%i", &num[i]);
        sum = sum + num[i];
    }
    for(int i = 0; i<=4; i++){
        printf("%i ",num[i]);
    }
    printf(" = %i",sum);
    return 0;
}