//Change the date format from dd/04/yyyy to dd-Apr-yyyy.
#include <stdio.h>

int main() {
    char date[15];
    int dd, mm, yyyy;

    printf("Enter date in dd/mm/yyyy format: ");
    scanf("%d/%d/%d", &dd, &mm, &yyyy);


    char *months[] = {
        "Jan", "Feb", "Mar", "Apr", "May", "Jun",
        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
    };

    if (mm < 1 || mm > 12) {
        printf("Invalid month!\n");
        return 1;
    }

    printf("%02d-%s-%04d\n", dd, months[mm - 1], yyyy);

    return 0;
}
