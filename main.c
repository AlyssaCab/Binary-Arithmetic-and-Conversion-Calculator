#include <stdio.h>
#define MAX 8 // Byte = 8 bits
#include "complement.h"
#include "conversion.h"
#include "logic.h"

int main(void) {
  setbuf(stdout, NULL);
  int x[MAX];
  int y[MAX];
  int z[MAX];
  int choice;
  int error;
  int conversion;
  while (1) {
    printf("Enter the command number:\n0) Exit\n1) AND\n2) OR\n3) NOT\n4) 1’s "
           "complement\n5) 2’s complement\n6) 2’s complement*\n");
    scanf("%d", &choice);

    if (choice == 0) {
      break;
    } else if (choice == 1 || choice == 2 || choice == 3 || choice == 4 ||
               choice == 5 || choice == 6) {
      if (choice == 1 || choice == 2) {
        while (1) {
          error = 0;
          printf("Enter the first binary number:\n");
          for (int i = 0; i < MAX; i = i + 1) {
            scanf("%d", &x[i]);
            printf("x%d = %d\n", i, x[i]);
          }
          for (int counter1 = 0; counter1 < MAX; counter1 = counter1 + 1) {
            if (x[counter1] != 0 && x[counter1] != 1) {
              printf("ERROR!\nPlease enter a valid binary number.\n");
              error = 1;
              break;
            } else {
            }
          }
          if (error == 1) {
          } else {
            break;
          }
        }
        while (1) {
          error = 0;
          printf("Enter the second binary number:\n");
          for (int i = 0; i < MAX; i = i + 1) {
            scanf("%d", &y[i]);
            printf("y%d = %d\n", i, y[i]);
          }
          for (int counter1 = 0; counter1 < MAX; counter1 = counter1 + 1) {
            if (y[counter1] != 0 && y[counter1] != 1) {
              printf("ERROR!\nPlease enter a valid binary number.\n");
              error = 1;
              break;
            } else {
            }
          }
          if (error == 1) {
          } else {
            break;
          }
        }
        while (1) {
        printf("Enter the output base:\n1) Binary\n2) Octal\n3) Decimal\n4) "
               "Hexadecimal\n");
        scanf("%d", &conversion);
        if (conversion == 1 || conversion == 2 || conversion == 3 ||
            conversion == 4) {
          break;
        } else {
          printf("ERROR!\nPlease enter a valid command number.\n");
        }
      }
        if (choice == 1) {
          func_and(x, y, z);
          switch (conversion) {
          case 1:
            printf("The first number AND second binary number in binary form yeild: ");
            for (int i = 0; i < MAX; i = i + 1) {
              printf("%d", z[i]);
            }
            printf("\n");
            break;
          case 2:
            printf("The first number AND second binary number in octal form yeild: ");
            to_octal(z);
            break;
          case 3:
            printf("The first number AND second binary number in decimal form yeild: ");
            to_decimal(z);
            break;
          case 4:
            printf("The first number AND second binary number in hexadecimal form yeild: ");
            to_hexadecimal(z);
            break;
          }
        } else {
          func_or(x, y, z);
          switch (conversion) {
          case 1:
            printf("The first number OR second binary number in binary form yeild: ");
            for (int i = 0; i < MAX; i = i + 1) {
              printf("%d", z[i]);
            }
            printf("\n");
            break;
          case 2:
            printf("The first number OR second binary number in octal form yeild: ");
            to_octal(z);
            break;
          case 3:
            printf("The first number OR second binary number in decimal form yeild: ");
            to_decimal(z);
            break;
          case 4:
            printf("The first number OR second binary number in hexadecimal form yeild: ");
            to_hexadecimal(z);
            break;
          }
        }
      } else {
        while (1) {
          error = 0;
          printf("Enter the first binary number:\n");
          for (int i = 0; i < MAX; i = i + 1) {
            scanf("%d", &x[i]);
            printf("x%d = %d\n", i, x[i]);
          }
          for (int counter1 = 0; counter1 < MAX; counter1 = counter1 + 1) {
            if (x[counter1] != 0 && x[counter1] != 1) {
              printf("ERROR!\nPlease enter a valid binary number.\n");
              error = 1;
              break;
            } else {
            }
          }
          if (error == 1) {
          } else {
            break;
          }
        }
        while (1) {
          printf("Enter the output base:\n1) Binary\n2) Octal\n3) Decimal\n4) "
                 "Hexadecimal\n");
          scanf("%d", &conversion);
          if (conversion == 1 || conversion == 2 || conversion == 3 ||
              conversion == 4) {
            break;
          } else {
            printf("ERROR!\nPlease enter a valid command number.\n");
          }
        }
        if (choice == 3) {
          func_not(x, z);
          switch (conversion) {
          case 1:
            printf("The NOT operation of the binary number in binary form is: ");
            for (int i = 0; i < MAX; i = i + 1) {
              printf("%d", z[i]);
            }
            printf("\n");
            break;
          case 2:
            printf("The NOT operation of the binary number in octal form is: ");
            to_octal(z);
            break;
          case 3:
            printf("The NOT operation of the binary number in decimal form is: ");
            to_decimal(z);
            break;
          case 4:
            printf("The NOT operation of the binary number in hexadecimal form is: ");
            to_hexadecimal(z);
            break;
          }

        } else if (choice == 4) {
          func_1s_comp(x, z);
          switch (conversion) {
          case 1:
            printf("The 1's complement of the binary number in binary form is: ");
            for (int i = 0; i < MAX; i = i + 1) {
              printf("%d", z[i]);
            }
            printf("\n");
            break;
          case 2:
            printf("The 1's complement of the binary number in octal form is: ");
            to_octal(z);
            break;
          case 3:
            printf("The 1's complement of the binary number in decimal form is: ");
            to_decimal(z);
            break;
          case 4:
            printf("The 1's complement of the binary number in hexadecimal form is: ");
            to_hexadecimal(z);
            break;
          }

        } else if (choice == 5) {
          func_2s_comp(x, z);
          switch (conversion) {
          case 1:
            printf("The 2's complement of the binary number in binary form is: ");
            for (int i = 0; i < MAX; i++) {
              printf("%d", z[i]);
            }
            printf("\n");
            break;
          case 2:
            printf("The 2's complement of the binary number in octal form is: ");
            to_octal(z);
            break;
          case 3:
            printf("The 2's complement of the binary number in decimal form is: ");
            to_decimal(z);
            break;
          case 4:
            printf("The 2's complement of the binary number in hexadecimal form is: ");
            to_hexadecimal(z);
            break;
          }
        } else {
          func_2s_comp_star(x, z);
          switch (conversion) {
          case 1:
            printf("The 2's complement of the binary number in binary form is: ");
            for (int i = 0; i < MAX; i = i + 1) {
              printf("%d", z[i]);
            }
            printf("\n");
            break;
          case 2:
            printf("The 2's complement of the binary number in octal form is: ");
            to_octal(z);
            break;
          case 3:
            printf("The 2's complement of the binary number in decimal form is: ");
            to_decimal(z);
            break;
          case 4:
            printf("The 2's complement of the binary number in hexadecimal form is: ");
            to_hexadecimal(z);
            break;
          }
        }
      }
    } else {
      printf("ERROR!\nPlease enter a valid command number.\n");
    }
  }
  return 0;
}
