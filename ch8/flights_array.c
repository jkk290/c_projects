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
	int departures[8] = {
		8 * 60,
		9 * 60 + 43,
		11 * 60 + 19,
		12 * 60 + 47,
		14 * 60,
		15 * 60 + 45,
		19 * 60,
		21 * 60 + 45
	};

	int arrivals[8] = {
		10 * 60 + 16,
		11 * 60 + 52,
		13 * 60 + 31,
		15 * 60,
		16 * 60 + 8,
		17 * 60 + 55,
		21 * 60 + 20,
		23 * 60 + 58
	};

	
	int hours, mins, total_mins;
	printf("Enter a 24-hour time(HH:MM): ");
	scanf("%d:%d", &hours, &mins);

	total_mins = hours * 60 + mins;

	for (int i = 0; i < (int) (sizeof(departures) / sizeof(departures[0])); i++) {
		if (total_mins <= departures[0]) {
			printf("Closest departure time is %.2d:%.2dAM, arriving at %.2d:%.2dAM\n", departures[0] / 60, departures[0] % 60, arrivals[0] / 60, arrivals[0] % 60);
			break;
		} else if (total_mins >= departures[i] && total_mins < departures[i + 1]) {
			int dep_hour, arr_hour;
			if (departures[i] / 60 > 12) {
				dep_hour = departures[i] / 60 - 12;
			} else {
				dep_hour = departures[i] / 60;
			}
			printf("Closest departure time is %.2d:%.2d", dep_hour, departures[i] % 60);
			if (departures[i] / 60 > 12) {
				printf("PM, ");
			} else {
				printf("AM, ");
			}

			if (arrivals[i] / 60 > 12) {
				arr_hour = arrivals[i] / 60 - 12;
			} else {
				arr_hour = arrivals[i] / 60;
			}
			printf("arriving at %.2d:%.2d", arr_hour, arrivals[i] % 60);
			if (arrivals[i] / 60 > 12){
				printf("PM\n");
			} else {
				printf("AM\n");
			}
			break;
		} else if (total_mins >= departures[7]) {
			printf("Closest departure time is %.2d:%.2dPM, arriving at %.2d:%.2dPM\n", departures[7] / 60 - 12, departures[7] % 60, arrivals[7] / 60 - 12, arrivals[7] % 60);
			break;
		}
	}	

	return 0;
}
