/* Takes a given time in 24-hours format, and displays the departure and arrival for the flight whose 
 * departure time is closest 
 *
 * Departure time	Arrival time
 * 8:00am		10:16am
 * 9:43am		11:52am
 * 11:19am		1:31pm
 * 12:47pm		3:00pm
 * 2:00pm		4:08pm
 * 3:45pm		5:55pm
 * 7:00pm		9:20pm
 * 9:45pm		11:58pm
 */

#include <stdio.h>

int main(void)
{
	int flight1 = 8 * 60;
	int flight2 = 9 * 60 + 43;
	int flight3 = 11 * 60 + 19;
	int flight4 = 12 * 60 + 47;
	int flight5 = 14 * 60;
	int flight6 = 15 * 60 + 45;
	int flight7 = 19 * 60;
	int flight8 = 21 * 60 + 45;

	int hours, mins, total_mins;
	printf("Enter a 24-hour time(HH:MM): ");
	scanf("%d:%d", &hours, &mins);

	total_mins = hours * 60 + mins;
	
	
	if (total_mins > flight8) {
		printf("Closest departure time is 9:45pm, arriving at 11:58pm\n");
	} else if (total_mins > (flight7 + flight8) / 2) {
			printf("Closest departure time is 9:45pm, arriving at 11:58pm\n");
	} else if (total_mins > (flight6 + flight7) / 2) {
		printf("Closest departure time is 7:00pm, arriving at 9:20pm\n");
	} else if (total_mins > (flight5 + flight6) / 2) {
		printf("Closest departure time is 3:45pm, arriving at 5:55pm\n");
	} else if (total_mins > (flight4 + flight5) / 2) {
		printf("Closest departure time is 2:00pm, arriving at 4:08pm\n");
	} else if (total_mins > (flight3 + flight4) / 2) {
		printf("Closest departure time is 12:47pm, arriving at 3:00pm\n");
	} else if (total_mins > (flight2 + flight3) / 2) {
		printf("Closest departure time is 11:19am, arriving at 1:31pm\n");
	} else if (total_mins > (flight1 + flight2) / 2) {
		printf("Closest departure time is 9:43am, arriving at 11:52am\n");
	} else if (total_mins < flight1) {
		printf("Closet departure time is 8:00am, arriving at 10:16am\n");
	} else {
		printf("No flights available\n");
	}

	return 0;
}
