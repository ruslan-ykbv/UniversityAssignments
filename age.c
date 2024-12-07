#include <stdio.h>
int main(void) {
    int monthBirth, yearBirth, monthNow, yearNow = 0;
    float age = 0;
    scanf("%d %d %d %d", &monthBirth, &yearBirth, &monthNow, &yearNow);
    if (monthBirth < 1 || monthBirth > 12 || monthNow < 1 || monthNow > 12 ||
        yearBirth < 1 || yearBirth > 9999 || yearNow < 1 || yearNow > 9999 ||
        (monthNow - monthBirth)/12 < 0 || (yearNow - yearBirth) < 0)
    {
        printf("Error!");
        return 1;
    }
    age = (float)(yearNow-yearBirth) + (float)(monthNow-monthBirth)/12;
    printf("You are %.2f years old", age);
    return 0;
}
