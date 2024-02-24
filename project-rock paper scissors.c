#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main() {
  char a[10]="yes";
  while(strcmp(a,"yes")==0)
    {
    char *choices[] = {"rock", "paper", "scissors"};
    char name[50];
    printf("Hello! What's your name? ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';/* Remove newline character from input.strcspn returns index of first '\n' in name */


    char person[20];
    printf("What will you choose, %s? (rock, paper, or scissors) ", name);
    fgets(person, sizeof(person), stdin);
    person[strcspn(person, "\n")] = '\0';/* Remove newline character from input.strcspn returns index of first '\n' in person */  

    srand(time(0)); 
    char *computer_choice = choices[rand() % 3];
    printf("\n");

    if (strcmp(computer_choice, "rock") == 0) {
        printf("Computer played rock\n");
        printf("   _______\n"
               "---'   ____)____\n"
               "          ______)\n"
               "          _______)\n"
               "         (____)\n"
               "---.____(___)\n");
    } else if (strcmp(computer_choice, "paper") == 0) {
        printf("Computer played paper\n");
        printf("   _______\n"
               "---'   ____)____\n"
               "              ______)\n"
               "              _______)\n"
               "             (____)\n"
               "---.__________)\n");
    } else if (strcmp(computer_choice, "scissors") == 0) {
        printf("Computer played scissors\n");
        printf("   _______\n"
               "---'   ____)____\n"
               "              ______)\n"
               "       __________)\n"
               "---.____(___)\n");
    }

    if (strcmp(person, "rock") == 0) {
        printf("You played rock\n");
        printf("   _______\n"
               "---'   ____)____\n"
               "          ______)\n"
               "          _______)\n"
               "         (____)\n"
               "---.____(___)\n");
    } else if (strcmp(person, "paper") == 0) {
        printf("You played paper\n");
        printf("   _______\n"
               "---'   ____)____\n"
               "              ______)\n"
               "              _______)\n"
               "             (____)\n"
               "---.__________)\n");
    } else if (strcmp(person, "scissors") == 0) {
        printf("You played scissors\n");
        printf("   _______\n"
               "---'   ____)____\n"
               "              ______)\n"
               "       __________)\n"
               "---.____(___)\n");
    }

    printf("\n");

    if (strcmp(computer_choice, person) == 0) {
        printf("It's a tie, play again.\n");
        printf("Do you want to play again? (yes/no) ");
        scanf("%s",a);
    } else if ((strcmp(computer_choice, "rock") == 0 && strcmp(person, "paper") == 0) ||
               (strcmp(computer_choice, "paper") == 0 && strcmp(person, "scissors") == 0) ||
               (strcmp(computer_choice, "scissors") == 0 && strcmp(person, "rock") == 0)) {
        printf("Congratulations! You won.\n");
        printf("do you want to play again? (yes/no) ");
        scanf("%s",a);
         
    } else {
        printf("Sorry, you lost. Play again.\n");
        printf("do you want to play again? (yes/no) ");
        scanf("%s",a);
    }
  }    
  printf("thanks for playing");
    return 0;
}
