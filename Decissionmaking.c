#include <stdio.h>
#include <math.h>
#include "Functions.h"
int main(){
    int a,uc,lc, b,c,d, year;
    float e,f,g,h,mul,div,sum,mod,sub;
    char k,l,m,n,o,p, spc;
    while(1){

    // C Program to Check Whether a Number is Even or Odd
    printf("C Program to Check Whether a Number is Even or Odd\n");
    printf("Enter your number: ");
    scanf("%i", &a);
    (a % 2 == 0)? printf("\nNumber %i is an even number", a): printf("\nNumber %i is an odd number", a);

    // C Program to Check Whether a Number is Positive or Negative
    printf("\nC Program to Check Whether a Number is Positive or Negative\n");
    (a > 0)? printf("Number %i is positive", a): printf("Number %i is negative");
    printf("\n");



    // C Program to Check Whether a Character is a Vowel or Consonant
    scanf("%c", &spc);
    printf("\nC Program to Check Whether a Character is a Vowel or Consonant\n");
    printf("Enter your character: ");
    scanf("%c", &k);
    uc = ('A' || 'E' || 'I' || 'O' || 'U'  || 'a' || 'e' || 'i' || 'o' || 'u');
    (k == uc)? printf("\nCharacter %c is a vowel"): printf("\nCharacter %c is a consonant");



    l3();
    printf("\n");







    // C Program to Check Whether a Character is an Alphabet or not

    // C Program to Find GCD of two Numbers
    // C Program to Find LCM of two Numbers
    // C Program to Display Characters from A to Z Using Loop
    // C Program to Count Number of Digits in an Integer
    // C Program to Reverse a Number
    // C Program to Calculate the Power of a Number
    // C Program to Check Whether a Number is Palindrome or Not
    // C Program to Check Whether a Number is Prime or Not
    // C Program to Display Prime Numbers Between Two Intervals
    // C Program to Check Armstrong Number
    // C Program to Display Armstrong Number Between Two Intervals
    // C Program to Display Factors of a Number
    // C Program to Make a Simple Calculator Using switch...case

    }
    return 0;
}