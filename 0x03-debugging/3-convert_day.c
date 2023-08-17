#include "main.h"

int convert_day(int month, int day)
{
    int days_in_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int total_days = 0;

    for (int i = 1; i < month; i++)
    {
        total_days += days_in_month[i];
    }

    total_days += day;

    return total_days;
}
