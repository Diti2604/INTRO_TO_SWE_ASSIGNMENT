#include <stdio.h>
#include <stdlib.h>

double average()
{
    int n, sum=0, num;
    double avg;
    printf("Enter the number of numbers you'd like the average of: \n");
    scanf("%d", &n);
    printf("Enter the numbers: \n");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &num);
        sum+=num;
    }
    avg=(double)sum/n;
    return avg;
}

int main()
{
    printf("Type a if you want to find the average: \n");
    char selection;
    scanf("%c", &selection);
    if(selection == 'a')
        printf("The average is: %.2f", average());
    return 0;
}
