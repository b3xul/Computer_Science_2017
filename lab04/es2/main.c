#include <stdio.h>

int main()
{
    int num_month;
    int num_day;
    int num_year;
    printf("Digit a date (ex.23/3/2012): ");
    scanf("%d/%d/%d", &num_day,&num_month,&num_year);
    printf("The current date is %d ", num_day);

    switch(num_month)
    {
            case 1:
            printf(" January ");
            break;
            case 2:
            printf(" February ");
            break;
            case 3:
            printf(" March ");
            break;
            case 4:
            printf(" April ");
            break;
            case 5:
            printf(" May ");
            break;
            case 6:
            printf(" June ");
            break;
            case 7:
            printf(" July ");
            break;
            case 8:
            printf(" Agoust ");
            break;
            case 9:
            printf(" September ");
            break;
            case 10:
            printf(" October ");
            break;
            case 11:
            printf(" November ");
            break;
            case 12:
            printf(" December ");
            break;
        default:
            printf(" none of the possible months\n");
            break;
    }

    printf("%d\n", num_year);

    return 0;
}
