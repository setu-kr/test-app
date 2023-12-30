#include<stdio.h>
int main()
{
    int exam;
    printf("enter no. of exams:");
    scanf("%d",&exam);

    for(int i=1;i<=exam;i++)  {
        int s;
        printf("Enter the rank:");
        scanf("%d",&s);

        if(s<=10) {
            printf("Pass");
        }
        else{
            printf("Fail");
        }
    }

}