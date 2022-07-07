#include <stdio.h>
#include "main.h"
#include <time.h>

/**
 * print_remaining_days - takes a date and prints how many days are
 * left in a year, taking leap of years in account
 * @month: month in a number format
 * @day: day of month
 * @year: year
 * Return: void
 */

void print_remainugn_days(int month, int day, int year)
{
	if (year % 4 == 0 || (year % 400 == 0 && year % 100 == 0))
	{
		if ( month > 2 && day >= 60)
		{
			day++;
		}

		printf("Day of the year: %d\n", day);
		printf("Remaining days: %d\n", 366 - day);
	}
	else
	{
		if (month == 2 && day == 60)
		{
			printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
		}
		else
		{
			printf("Day of the year: %d\n", day);
			printf("Remaining days: %d\n", 365 - day);
		}
	}
}
