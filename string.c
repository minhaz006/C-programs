#include <stdio.h>
#include <string.h>
# define mx 30
int main(){
    // char rev[mx], name[mx];

    // char x[] = "Enter your name";
    // printf("%s\n",x);

    // gets(name);
    // printf("Your name is: %s\n", name);

    // strcpy(rev,name);
    // strrev(rev);
    // rev[30] = name[30];
    // printf("%s\n", rev);

    // int d = strcmp(rev,name);
    // if (d == 0){
    //     printf("String is palindrome");
    // }
    // else{
    //     printf("String is not palindrome");
    // }



    // // Pointer
    // int x = 5;
    // int *p = &x;

    // printf("%d\n", x);
    // printf("%d\n", &x);
    // printf("%d\n", p);
    // printf("%d\n", *p);
    // printf("%d\n", &p);

    // // sum with pointer
    // printf("\n\n");
    // int y = 10, z = 5, sum;
    // int *p1 = &y, *p2 = &z;
    // sum = *p1 + *p2;
    // printf("Sum is = %i", sum);


    // // swapping
    // printf("\n\n");
    // int a = 5, b = 10, temp;
    // int *s1 = &a, *s2 = &b;
    // //swap
    // temp = *s1;
    // *s1 = *s2;
    // *s2 = temp;

    // printf("\na = %i \nb = %i",a,b);


    // // printing array value
    // printf("\n\n");
    // int array[5] = {20,30,10,15,19};
    // int *ar = &array[0];

    // for(int i = 0; i<5; i++){
    //     printf("%i ",*ar);
    //     ar++;
    // }


    FILE *f;
    f = fopen("profile.txt","a+");
    printf("\nRegistration form\n----------------------------------\n\n");

    char nam[20], email[30];
    int pass, age, n,na;
    
    printf("Enter your name: ");
    gets(nam);
    printf("\n");

    printf("Email: ");
    gets(email);
    printf("\n");

    printf("Age: ");
    scanf("%i", &age);
    printf("\n");

    printf("Select gender: \n\t1: For male\n\t2: For female"); 
    printf("\n\t:");
    char gender[][20] = { "Male", "Female" };
    scanf("%i", &n);
    printf("\n");

    printf("Enter your password: ");
    scanf("%i", &pass);
    printf("\n\n\n");


    fprintf(f, "Profile\n---------\n\n Nmae: %s\n Age: %i\n Email: %s\n",nam,age,email);

    if (n == 1){
        fprintf(f," Gender: %s", gender[0]);
    }
    else if (n == 2){
        fprintf(f,"Gender: %s", gender[1]);
    }
    fprintf(f,"\n Password: %i",pass);
    fputs("\n\n\n", f);
    fclose(f);
    
    f = fopen("profile.txt","r+");
    char ch;
    while(!feof(f)){
        ch = fgetc(f);
        printf("%c",ch);
    }   
    fclose(f);
    
    return 0;
}