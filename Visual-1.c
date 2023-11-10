// #include <stdio.h>
// #include <conio.h>

// int main() {
//     int choice;

//     while (1) {
//         clrscr(); // Clear the screen

//         // Display a menu
//         textcolor(WHITE);
//         gotoxy(10, 5);
//         printf("Main Menu");
//         gotoxy(10, 7);
//         printf("1. Option 1");
//         gotoxy(10, 8);
//         printf("2. Option 2");
//         gotoxy(10, 9);
//         printf("3. Option 3");
//         gotoxy(10, 10);
//         printf("4. Quit");
//         gotoxy(10, 12);
//         printf("Enter your choice: ");

//         // Get user input
//         scanf("%d", &choice);

//         // Process user input
//         switch (choice) {
//             case 1:
//                 clrscr();
//                 textcolor(YELLOW);
//                 gotoxy(10, 5);
//                 printf("You selected Option 1.");
//                 break;
//             case 2:
//                 clrscr();
//                 textcolor(GREEN);
//                 gotoxy(10, 5);
//                 printf("You selected Option 2.");
//                 break;
//             case 3:
//                 clrscr();
//                 textcolor(RED);
//                 gotoxy(10, 5);
//                 printf("You selected Option 3.");
//                 break;
//             case 4:
//                 clrscr();
//                 textcolor(WHITE);
//                 gotoxy(10, 5);
//                 printf("Goodbye!");
//                 delay(2000); // Delay for 2 seconds
//                 return 0;
//             default:
//                 clrscr();
//                 textcolor(LIGHTRED);
//                 gotoxy(10, 5);
//                 printf("Invalid choice. Please try again.");
//                 break;
//         }

//         // Wait for a key press
//         getch();
//     }

//     return 0;
// }


// #include <stdio.h>

// int main() {
//     int choice;

//     do {
//         printf("Main Menu\n");
//         printf("1. Option 1\n");
//         printf("2. Option 2\n");
//         printf("3. Option 3\n");
//         printf("4. Quit\n");
//         printf("Enter your choice: ");

//         if (scanf("%d", &choice) != 1) {
//             while (getchar() != '\n'); // Clear input buffer on invalid input
//             printf("Invalid input. Please enter a number.\n");
//             continue;
//         }

//         switch (choice) {
//             case 1:
//                 printf("You selected Option 1.\n");
//                 break;
//             case 2:
//                 printf("You selected Option 2.\n");
//                 break;
//             case 3:
//                 printf("You selected Option 3.\n");
//                 break;
//             case 4:
//                 printf("Goodbye!\n");
//                 break;
//             default:
//                 printf("Invalid choice. Please try again.\n");
//                 break;
//         }
//     } while (choice != 4);

//     return 0;
// }


#include <stdio.h>
#ifdef _WIN32
#include <conio.h> // For Windows only
#endif

int main() {
    char choice;
    do {
        system("cls"); // Clear the screen on Windows
        printf("Main Menu\n");
        printf("1. Option 1\n");
        printf("2. Option 2\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");

        // Get user input
        choice = getchar();

        // Handle user input
        switch (choice) {
            case '1':
                // Perform action for option 1
                printf("Option 1 selected.\n");
                break;
            case '2':
                // Perform action for option 2
                printf("Option 2 selected.\n");
                break;
            case '3':
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
        
        #ifdef _WIN32
        _getch(); // On Windows, use _getch to wait for a key press
        #else
        getchar(); // On other platforms, use getchar
        #endif
    } while (choice != '3');

    return 0;
}