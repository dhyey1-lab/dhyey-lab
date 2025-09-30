#include<stdio.h>
int main(){
    char str[100];
    int i,length;
    printf("enter a string:");
    scanf("%s",str);
    length = 0;
    for(i=0;str[i]!='\0';i++){
            length++;
    }
    printf("length of string is : %d",length);
    return 0;
}
