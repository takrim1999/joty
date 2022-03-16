#include<stdio.h>
int main(){
    char chr , word[20], string[20];
    printf("your character?\n");
    scanf("%c",&chr);
    printf("Your chac is %c\n", chr);
    printf("your word?\n");
    scanf("%s",word);
    printf("Your word is %s\n", word);
    printf("your string?\n");
    scanf(" %[^\n]",string);
    printf("Your string is %s\n", string);
    
    
    return 0;
}