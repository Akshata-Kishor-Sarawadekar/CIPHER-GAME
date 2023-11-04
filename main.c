#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>

// FISHER YATES CODE (RANDOMISED THE CODE)
void randomize ( int arr1[], int n )
{
    srand ( time(NULL) );
    for (int i = n-1; i > 0; i--)
    {
        int j = rand() % (i+1);
        swap(&arr1[i], &arr1[j]);
    }
}

void swap (int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// DISPLAY THE RANDOMISED CODE
void Randomizedcode (int arr1[], int n)
{
    printf ("The numbers in the code in jumbled form are - \n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr1[i]);
    printf("\n");
}

// COMPARING THE CODES ENTERED BY BOTH THE PLAYERS
bool compare(int temp[], int arr2[], int n) {
    for (int i = 0; i < n; i++) {
        if (temp[i] != arr2[i]) {
            return false;
        }
    }
    return true;
}




int main(){
    int n,i,j,arr7[n];
    // INTRO


    printf("\n\n");
    printf("           +---------------------------------------------------------------------------------------------------------------------------------------------------+\n");
    printf("           |                                                                                                                                                   |\n");
    printf("           |                                                                                                                                                   |\n");
    printf("           |      W W                   W W  E E E E E E E     L L           C C C C C C C      O O O O O O O    M M           M M     E E E E E E E           |\n");
    printf("           |       W W                 W W   E E               L L           C C                O O       O O    M M  M     M  M M     E E                     |\n");
    printf("           |        W W       W       W W    E E E E E         L L           C C                O O       O O    M M     M     M M     E E E E                 |\n");
    printf("           |         W W   W     W   W W     E E               L L           C C                O O       O O    M M           M M     E E                     |\n");
    printf("           |          W W           W W      E E E E E E E     L L L L L L   C C C C C C C      O O O O O O O    M M           M M     E E E E E E E           |\n");
    printf("           |                                                                                                                                                   |\n");
    printf("           |                                                                                                                                                   |\n");
    printf("           |                                                                 T T T T T T   O O O O O O O                                                       |\n");
    printf("           |                                                                     T T       O O       O O                                                       |\n");
    printf("           |                                                                     T T       O O       O O                                                       |\n");
    printf("           |                                                                     T T       O O       O O                                                       |\n");
    printf("           |                                                                     T T       O O O O O O O                                                       |\n");
    printf("           |                                                                                                                                                   |\n");
    printf("           |                                                                                                                                                   |\n");
    printf("           |                                        C C C C C   I I I I I I   P P P P P   H H     H H   E E E E E   R R R R R                                  |\n");
    printf("           |                                        C C             I I       P P     P   H H     H H   E E         R R     R                                  |\n");
    printf("           |                                        C C             I I       P P P P P   H H H H H H   E E E       R R R R R                                  |\n");
    printf("           |                                        C C             I I       P P         H H     H H   E E         R R   R                                    |\n");
    printf("           |                                        C C C C C   I I I I I I   P P         H H     H H   E E E E E   R R     R                                  |\n");
    printf("           |                                                                                                                                                   |\n");
    printf("           |                                                                                                                                                   |\n");
    printf("           +---------------------------------------------------------------------------------------------------------------------------------------------------+\n");
    getch();
    system ("cls");
    // RULES
    printf("\t\tHOW TO PLAY\n");
    printf("\n\n1]	In this game the first player has to first enter the number of digits they want their code to be [maximum limit - 10 digits].\n");
    printf("2]	Then player 1 has to enter the numbers of their code and press ENTER after entering each number.\n");
    printf("3]	Then comes in the second player who will receive the numbers of the code player 1 entered in a jumbled format.\n");
    printf("4]	Player 2 has to guess the correct sequence of the numbers displayed on the screen to crack the code.\n");
    printf("5]	Every time player 2 guesses the sequence wrongly player2 will be given another chance until they crack the code.\n");
    printf("\n\n\tPress ENTER to begin the game and have some fun\n");
    getch();

    // BEGINING OF GAME (PLAYER 1)
    printf ("----------------------------------------------------------------------------------------------------------\n");
    printf ("\n\nPLAYER 1:\n");
    re_enter:
    printf("Enter the size of the code: \n");
    scanf ("%d",&n);
    // SIZE VERIFICATION OF CODE
    if (n>10){
        printf ("OOPS! looks like you exceeded the limit of the code\nPLEASE TRY AGAIN\n");
        goto re_enter;
    }
    else{

    int arr1[n],temp[n];
     printf ("Enter %d numbers of your code: \n",n);
    for(i=0;i<n;i++){
      scanf ("%d",&arr1[i]);
      temp[i]=arr1[i];                         //SOLVED PROBLEM
   }

    system("cls");

    randomize (arr1, n);                       //FUNCTION TO RANDOMISE THE CODE
    Randomizedcode(arr1, n);                   //FUNCTION TO DISPLAY THE RANDOMISED CODE


    // SECOND PHASE OF THE GAME(PLAYER 2)
    printf("PLAYER 2:\n");
    int arr2[n];
    AGAIN:
        printf ("----------------------------------------------------------------------------------------------------------\n");
        printf ("Guess %d numbers of the code: \n",n);
    for(j=0;j<n;j++){
        scanf ("%d",&arr2[j]);
       }


    if (compare(temp, arr2, n)) {                                       // FUNCTION TO COMPARE THE CODES
        system("cls");
           printf("\n\n");
           printf("                     +--------------------------------------------------------------------------------------------------------------------------+\n");
           printf("                     |                                                                                                                          |\n");
           printf("                     |                                                                                                                          |\n");
           printf("                     |           C C C C C   O O O O O O O   N N     N N   G G G G G   R R R R R      A A      T T T T T T    S S S S S         |\n");
           printf("                     |           C C         O O       O O   N N N   N N   G G         R R     R     A   A         T T        S S               |\n");
           printf("                     |           C C         O O       O O   N N  N  N N   G G   G G   R R R R R    A A A A        T T        S S S S S         |\n");
           printf("                     |           C C         O O       O O   N N   N N N   G G     G   R R   R     A       A       T T              S S         |\n");
           printf("                     |           C C C C C   O O O O O O O   N N     N N   G G G G G   R R     R  A         A      T T        S S S S S         |\n");
           printf("                     |                                                                                                                          |\n");
           printf("                     |                                                                                                                          |\n");
           printf("                     +--------------------------------------------------------------------------------------------------------------------------+\n");          // OUTRO + GAME END
        }
      else {
        printf("OOPS! \nTRY AGAIN\n\n");
        goto AGAIN;
       }
    }
return 0;
}
