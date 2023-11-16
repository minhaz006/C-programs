#include<stdio.h>

int main()
{
    int num[20],sum = 0, i, n,j, max;

    /*
    // 2d array declaration and print
    int num[3][5];
    {
        {2, 3, 4, 5, 6},
        {21, 32, 44, 56, 67},
        {20, 31, 42, 53, 64},
    };
    for(i = 0; i<3; i++){
        for(j = 0; j<5; j++){
            printf("%i ", num[i][j]);
        }
        printf("\n");
    }
    */


    /*
    //Scannig a simple natrix
        int A[3][4], B[3][4];

        printf("Enter matrix A digits: ");
        for(i= 0; i<3; i++) {
            for(j= 0; j<4; j++) {
                scanf("%i", &A[i][j]);
            }
            printf("\n");
        }

        printf("\n\n");


        printf("Enter matrix B digits: ");
        for(i= 0; i<3; i++) {
            for(j= 0; j<4; j++) {
                scanf("%i", &B[i][j]);
            }
            printf("\n");
        }

        printf("A = ");
        for(i= 0; i<3; i++) {
            printf("\t");
            for(j= 0; j<4; j++) {
                printf("%i ", A[i][j]);
            }
            printf("\n");
        }
        printf("\n");

        printf("B = ");
        for(i= 0; i<3; i++) {
            printf("\t");
            for(j= 0; j<4; j++) {
                printf("%i ", B[i][j]);
            }
            printf("\n");
        }
    */


//Matrix Addition and Subtraction
    int A[10][10], B[10][10], C[10][10], D[10][10], row, col;

    printf("No. of rows and column: \n");
    scanf("%i %i", &row, &col);
    printf("Enter matrix A digits: \n");

    for(i= 0; i<row; i++) {
        for(j= 0; j<col; j++) {
            printf("A[0][1]: ");
            scanf("%i", &A[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");


    printf("Enter matrix B digits: \n");
    for(i= 0; i<row; i++) {
        for(j= 0; j<col; j++) {
            printf("B[0][1]: ");
            scanf("%i", &B[i][j]);
        }
        printf("\n");
    }

    printf("A = ");
    for(i= 0; i<row; i++) {
        printf("\t");
        for(j= 0; j<col; j++) {
            printf("%i ", A[i][j]);
        }
        printf("\n");
    }
    printf("\n");


    printf("B = ");
    for(i= 0; i<row; i++) {
        printf("\t");
        for(j= 0; j<col; j++) {
            printf("%i ", B[i][j]);
        }
        printf("\n");
    }
    printf("\n");

//Addition 
    printf("\n");
    for(i= 0; i<row; i++) {
        for(j= 0; j<col; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    printf("\nA+B=");
    for(i= 0; i<row; i++) {
        printf("\t");
        for(j= 0; j<col; j++) {
            printf("%i ", C[i][j]);
        }
        printf("\n");
    }
    printf("\n");

// Subtraction 
    printf("\n");
    for(i= 0; i<row; i++) {
        for(j= 0; j<col; j++) {
            D[i][j] = A[i][j] - B[i][j];
        }
    }

    printf("\nA-B=");
    for(i= 0; i<row; i++) {
        printf("\t");
        for(j= 0; j<col; j++) {
            printf("%i ", D[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}