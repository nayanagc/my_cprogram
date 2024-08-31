#include <stdio.h>
#include <string.h>
void reverse(char *str, int start, int end) {
    char temp;
    while (start < end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;}}
void reverseWords(char *sentence) {
    int len = strlen(sentence);
    reverse(sentence, 0, len - 1);
    int start = 0;
    for (int i = 0; i <= len; i++) {
        if (sentence[i] == ' ' || sentence[i] == '\0') {
            reverse(sentence, start, i - 1);
            start = i + 1;}}}
void printSentence(char *sentence) {
    printf("%s\n", sentence);}
int main() {
    char sentence[] = "Hello World";
    printf("Original sentence: ");
    printSentence(sentence);
    reverseWords(sentence);
    printf("Sentence after reversing words: ");
    printSentence(sentence);
    return 0;}
