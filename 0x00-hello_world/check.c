#include <stdio.h>
int main(){
  int name;
  printf("What class are you?\n");
  scanf("%d", &name);
  if (name == 2){
    printf("You're welcome");
  }
  else if (name == 3){
    printf("Welcome, Olaleye");
  }
  else{
    printf("Welcome,", &name);
  }
}