#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    int random, guess;
    srand(time(NULL));
    printf("Welcome to the world of Guessing Numbers!\n");
    random = rand() % 100 +1;

        printf("Guess a number between 1 to 100 : \n");
    
    do
    {
    scanf("%d", &guess);
    
        if (guess<random)
        {
            printf("guess a larger number \n");
        } else if (guess>random)
        {
            printf("guess a smaller number \n");
        } else {
            printf("Congratulations, you have guessed the right number!!!");
        }
        
        
    } while (guess != random);
    printf("Bye Bye! Thankyou for Playing");
    return 0;
    

}