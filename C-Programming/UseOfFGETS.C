/*#include <stdio.h>

int main(){
char name[25];
printf("What is your name?\n");
scanf("%s", &name);

int age;
printf("How old are you?\n");
scanf("%d", &age);

printf("\nHello %s, how are you?", name);
printf("\nYou are %d years old", age);

    return 0;
} */


#include <stdio.h>
#include <string.h>

int main(){

char name[25];

printf("What is your name?\n");
fgets(name, 25, stdin);
name[strlen(name-1)] = '\0';

int age;
printf("How old are you?\n");
scanf("%d", &age);

printf("\nHello %s, how are you?", name);
printf("\nYou are %d years old", age);

return 0;
}