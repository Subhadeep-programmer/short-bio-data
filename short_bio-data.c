#include<stdio.h>
#include<stdbool.h>
int main()
{
int age, marks;
char name1 [30];
char name2 [30];
char name3 [30];
char name4 [30];
printf("what is your name? \n");
scanf("%s", name1);
printf("what is your age? \n");
scanf("%d", &age);
printf("what is your marks in Mathematics? \n");
scanf("%d", &marks);
printf("who is your best teacher? \n");
scanf("%s",name2);
printf("what is your favourite food? \n");
scanf("%s", name3);
printf("who is your favourite cricketer? \n");
scanf("%s", name4);
printf("you are %s are %d years old, obtained %d in Mathematics, likes %s as the best teacher, love to eat %s and like %s as a best cricketer in the world.", name1,age,marks,name2,name3,name4);
return 0;
}
