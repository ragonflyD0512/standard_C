#include <stdio.h>
#define SECOND_PER_MINUTE 60
#define MINUTE_PER_HOUR 60
#define HOUR_PER_DAY 24
#define DAY_PER_YEAR 365

int main(void)
{
	int input = 31536000;
	int second = input % SECOND_PER_MINUTE;
	int minute = (input / SECOND_PER_MINUTE)%MINUTE_PER_HOUR;
	int hour = ((input / SECOND_PER_MINUTE) / MINUTE_PER_HOUR)%HOUR_PER_DAY;
	int day = (((input / SECOND_PER_MINUTE) / MINUTE_PER_HOUR) / HOUR_PER_DAY)%DAY_PER_YEAR;
	int year = (((input / SECOND_PER_MINUTE) / MINUTE_PER_HOUR) / HOUR_PER_DAY)/DAY_PER_YEAR;

	printf("%d년 %d일 %d시 %d분 %d초", year, day, hour, minute, second);

	return 0;
}