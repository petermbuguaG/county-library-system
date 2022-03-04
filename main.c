#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int menu();// prototype
void execute_action(int action);
int main()
{
    printf("COUNTY LIBRARY SYSTEM!\n")
    printf("welcome Mr.Titus!\n")
    execute_action(menu());
    return 0;
}
 int menu()
 {
   int action;
   do {
      printf( "select an action below\n");
      printf( "1.Add new patron\n");
      printf( "2.View patrons\n");
      printf( "3.View books\n");
      printf( "4.Add new book\n");
      printf( "5.Add new book\n");
      printf("your action(1-4):\n");
      scanf("%d",&action);
      if(action<1 || action> 4){
            system("cls");
      printf("invalid Action. Try again.\n");
}
    } while(action < 1 || action > 4);
    return action;
}
void execute_action(int action){
 printf("the action is %d",action);
