//Q. Write a function named slica, which take a string & return a sliced string from index n to m
#include <stdio.h>
#include <string.h>

void slica(char str[], int n, int m);

int main(){
    char str[] = "HelloWorld";
    slica(str, 3, 6);
    
}

void slica(char str[], int n, int m){
    char newStr[100];
    int j = 0;
    for(int i=n; i<=m; i++, j++) {
        newStr[j] = str[i];
    }
    newStr[j] = '\0';
        puts(newStr);
}
