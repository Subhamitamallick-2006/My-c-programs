#include <stdio.h>
#include <stdlib.h> 
#include <time.h>   


int main() {
    int rounds;
    int user_choice, computer_choice;
    
    srand(time(0));
    printf("How many rounds do you want to play?\n" );
    scanf("%d",&rounds);

    printf("=== Stone, Paper, Scissors Game ===\n");
    printf("1. Stone\n2. Paper\n3. Scissors\n");
    printf("Enter your choice (1, 2, or 3): ");
    scanf("%d", &user_choice);

    computer_choice = (rand() % 3) + 1;

    if (computer_choice == 1) {
        printf("Computer chose: Stone\n");
    } else if (computer_choice == 2) {
        printf("Computer chose: Paper\n");
    } else {
        printf("Computer chose: Scissors\n");
    }

    if (user_choice == computer_choice) {
        printf("Result: It's a Tie! 🤝\n");
    } 

    else if ((user_choice == 1 && computer_choice == 3) || // Stone beats Scissors
             (user_choice == 2 && computer_choice == 1) || // Paper beats Stone
             (user_choice == 3 && computer_choice == 2))   // Scissors beats Paper
    {
        printf("Result: You Win! 🎉\n");
    } 

    else {
        printf("Result: Computer Wins! 🤖\n");
    }

    return 0;
}