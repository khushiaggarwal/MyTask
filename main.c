#include<stdio.h>
/*
void main()
{
    float Radius, Area, Perimeter, PI= 3.14;
    printf("Enter the Radius: ");
    scanf("%f", &Radius);
    Perimeter=2*Radius*PI ;
    printf("The Perimeter of the Circle is= %f\n ",Perimeter);
    Area=PI*Radius*Radius;
    printf("the Area of the Circle is= %f ", Area);
return 0;
}
*/
void main()
{
    int sec_numb = 22;
    int guess ;
    int guesscount = 0;
    int guesslimit = 3;
    while( guess!=sec_numb && guesscount != 4) {
        if (guesscount < guesslimit){
        printf("Enter Number: ");
        scanf("%d", &guess);
        guesscount++;
        }
        else{
            guesscount++;
        }
    }
    if(guesscount <= guesslimit){
    printf("you win");
    }
    else{
        printf("You lose");
    }
return 0;
}
