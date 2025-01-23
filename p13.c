#include<stdio.h>
void main(){
    char sam;
    printf("enter the charter:");
    scanf("%c",&sam);
    sam=(sam>='A'&&sam<='Z')?sam+32:sam;
    printf("%c",sam);
}