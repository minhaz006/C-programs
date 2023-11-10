
// C Program to Check Leap Year
void lfyr(){
    int year;
    printf("\nC Program to Check Leap Year\n");
    printf("Enter year: ");
    scanf("%i", &year);
    (year % 400 == 0)? printf("Leaf year"): (year % 100 ==0)? printf("Not leaf year"): (year % 4 == 0)? printf("Leaf year"): printf("Not leaf year");
}

    // C Program to Find the Roots of a Quadratic Equation
void qrt(){
    double x, y, z, discriminant, root1, root2, imgprt, realprt;

    printf("\nC Program to Find the Roots of a Quadratic Equation\n");
    printf("Enter three number: ");
    scanf("%lf %lf %lf", &x, &y, &z);

    discriminant = x*x - 4 *y*z;

    if(discriminant > 0){
        root1 = (-y + sqrt(discriminant)) / (2*x);
        root2 = (-y - sqrt(discriminant)) / (2*x);
        printf("Positive Roots are %.2lf and %.2lf", root1, root2);
    }
    else if(discriminant == 0){
        root1 = root2 = -y / (2*x);
        printf("Equal Roots is %.2lf", root1);
    }
    else{
        realprt = -y / (2*x);
        imgprt = sqrt(-discriminant) / (2*x);
        printf("Negative Roots are %.2lf + %.2lf and %.2lf - %.2lf", realprt, imgprt, realprt, imgprt);
    }
}


void l3(){
    // C Program to Find the Largest Number Among Three Numbers
    int b, c, d;

    printf("\nC Program to Find the Largest Number Among Three Numbers\n");
    printf("Enter three number: ");
    scanf("%i %i %i", &b, &c, &d);

    printf("\n Numbers are %i, %i and %i.\nAnd largest number is: ", b, c, d);

    (b < c && d)? (c>d)? printf("%i ",c): printf("%i ",d): printf("%i ", b);
}


