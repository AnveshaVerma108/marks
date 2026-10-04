#include <stdio.h>
int main() {
    int marks1,marks2,marks3;
    printf("enter marks1\n ");
    scanf("%d",&marks1);
    printf("enter marks2\n ");
    scanf("%d",&marks2);
    printf("enter marks3\n ");
    scanf("%d",&marks3);
    printf("your marks are %d %d %d\n",marks1,marks2,marks3);
    if(marks1<33 || marks2<33 || marks3<33){
        printf("you have failed because you scored less than 33 in one or more subjects\n");
    }
    else if((marks1+marks2+marks3)/3.0>=40){
        printf("you are passed because u scored more than 40 percent\n");
    }
    else{
        printf("you have failed because you scored less than 40 percent\n");
    }
    return 0;
}