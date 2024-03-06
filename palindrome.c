#include <stdio.h>

int main(){
    int num , original , reversed=0 ,reminder;
    printf("enter a number in here:");
    scanf("%d",&num);
    original=num;
    while (num > 0)
    {
        reminder =num %10;
        reversed= reversed * 10 +reminder;
        num /= 10;
    }
    if (reversed==original)
    {
        printf("the number is palindrome %d",reversed);
    }
    else
    {
        printf("the number is not palindrome %d ",reversed);
    }
    return 0;
}