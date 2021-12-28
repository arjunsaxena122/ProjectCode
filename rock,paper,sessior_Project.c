#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int game(char you,char comp){
  if(you==comp)
{
    return 0;
}
if (you=='r'&& comp=='p')
{
    return -1;
}
else if (you=='p'&& comp=='r')
{
    return 1;
}
if (you=='p'&& comp=='s')
{
    return -1;
}
else if (you=='s'&& comp=='p')
{
    return 1;
}
if (you=='s'&& comp=='r')
{
    return -1;
}
else if (you=='r'&& comp=='s')
{
    return 1;
} 
}
int main(){
    
int number,result;
char you,comp;
srand(time(0));


number=rand()%100+1;
if (number>33)
{
    comp='r';
}
else if (number>33&&number<66)
{
    comp='p';
}
else{
comp='s';
}

printf("You choose character rock,paper, sessior:");
scanf("%c",&you);
result = game( you, comp);
 

if (result==0)
{
    printf("You draw");
}
else if (result==1)
{
    printf("You Win");
}
else{
    printf("You lose");
}
printf("You choose %c and computer choose %c",you,comp);
return 0;
}