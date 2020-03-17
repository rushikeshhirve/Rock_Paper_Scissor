#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int generaterandomno()
{
    srand(time(NULL));
    return rand()%3+1;
}


int main()
{
    int rno,ch,player,comp,pscore=0,cscore=0;
    printf("welcome into the game Rock Papar Scissor\n");
    
    for (int i = 1; i <= 3; i++) 
    {
    printf("GAME %d:\n",i);
    printf("player's turn:\n");
    printf("choose the number as you want \n1.Rock  \n2.Papar \n3.Scissor\n");
    scanf("%d",&player);
    if(player==1)
    printf("You choose Rock\n\n");
    if(player==2)
    printf("You choose Papar\n\n");
    if(player==3)
    printf("You choose Scissor\n\n");
    
    printf("computer's turn:\n");
    printf("choose the number as you want \n1.Rock  \n2.Papar \n3.Scissor\n");
    rno = generaterandomno();
    if(rno==1)
    printf("computer choose Rock\n");
    if(rno==2)
    printf("computer choose Papar\n");
    if(rno==3)
    printf("computer choose Scissor\n");

    if(player == 1 && rno == 2 ) 
    cscore++;
    
    else if(player == 1 && rno == 3 ) 
    pscore++;
    
    else if(player == 2 && rno == 1 ) 
    pscore++;
    
    else if(player == 2 && rno == 3 ) 
    cscore++;
    
    else if(player == 3 && rno == 1 ) 
    cscore++;
    
    else if(player == 3 && rno == 2 ) 
    pscore++;
    
    else if(player == rno ) {
    cscore++;pscore++;}
    
    printf("player score is %d\t",pscore);
    printf("computer score is %d\n\n",cscore);
    }
    
    if(pscore < cscore ) 
    printf("You lose \nComputer won GAME\nbetter luck next time");
    
    else if(pscore > cscore ) 
    printf("YOU WON THE GAME \nWINNER WINNER CHICKEN DINNER\n");

    else if(pscore = cscore ) 
    printf("DRAW GAME\nTRY AGAIN");

    return 0;
}
