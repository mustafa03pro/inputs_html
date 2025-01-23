#include<stdio.h>
void main(){
    int days,weeks,months,years;
    printf("enter the years: ");
    scanf("%d",&years);
    printf("enter the weeks: ");
    scanf("%d",&weeks);
    printf("enter the months: ");
    scanf("%d",&months);
    printf("enter the days: ");
    scanf("%d",&days);
    days=((years*365)+(weeks*7)+(months*30)+days);
    // years=days/365;
    // months=days%365/30;
    // weeks=days%365%30/7;
    // days=days%365%30%7;
    printf("%d days ",days);
    
    
}