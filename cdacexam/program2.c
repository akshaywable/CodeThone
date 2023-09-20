//Write a function in C that reverses a given string in-place without using string
#include<stdio.h>
#include<string.h>
int main(){
    int i,n;
    char str[20];
    printf("enter any string:");
    scanf("%s",&str);
    n=strlen(str);
    printf("the reversed string is:");
    for(i=n-1;i>=0;i--)
    {
        printf("%c",str[i]);
    }


}
