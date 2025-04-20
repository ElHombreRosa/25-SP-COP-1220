#include <stdio.h>

int main(){
  //  char c[50] = "stringy";//

  //  char c[50] = { 's', 't', 'r', 'i', 'n', 'g', 'y', '\0'};

    char name[50];
    printf("Please enter your name: ");
    scanf("%s", name);

    printf("Your name is %s", name);

    return 0;
}