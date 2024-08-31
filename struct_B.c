#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct b {
    char s[10];};
char* comp(struct b *stack) {
    int i = 0;
    while(stack->s[i] != '\0') {
        if(stack->s[i] == '(' && stack->s[i+1] == ')') {
            return "true";
        } else if(stack->s[i] == '{' && stack->s[i+1] == '}') {
            return "true";
        } else if(stack->s[i] == '[' && stack->s[i+1] == ']') {
            return "true"; }
        i++;  }
    return "false";}
int main() {
    struct b a;
    scanf("%s", a.s);
    printf("%s", comp(&a));
    return 0;}

