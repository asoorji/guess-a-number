/* Online C Compiler and Editor */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int numberEntered, numberGenerated, contd;

do{
    printf("Guess a number (0 - 5): ");
    scanf("%d", &numberEntered);
    //uses the current time as a seed to generate random numbers
    srand(time(0));
    numberGenerated = (rand() % 5) + 1;
    
      if(numberEntered > numberGenerated){
        printf("Too high!\n");
        printf("The answer is %d\n", numberGenerated);
        printf("Do you wish to continue?: (1 or 2): ");
        scanf("%d", &contd);
    }
     else if(numberEntered < numberGenerated){
        printf("Too low!\n");
        printf("The answer is %d\n", numberGenerated);
        printf("Do you wish to continue?: (1 or 2): ");
        scanf("%d", &contd);
    } 
        else {
        printf("Correct!\n");
        printf("Your guess is %d", numberEntered);
        printf(" and the number is also %d", numberGenerated);
        printf("Do you wish to continue?: (1 or 2): ");
        scanf("%d", &contd);
    } 
} while(contd == 1);
 
printf("Thank You!");
    
return 0;
}
