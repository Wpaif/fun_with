#include <stdio.h>
#include <string.h>

typedef char name[10];
typedef enum week_day day;
enum week_day { sun, mod, tue, wed, thu, fri, sat };

int main(void) {
  day today, yesterday, tomorrow;
  int i;
  name reg_today, name_day[7] = {"sunday",   "monday", "tuesday",  "wednesday",
                                 "thursday", "friday", "saturnday"};
  do {
    printf("Enter with today: ");
    scanf("%s", reg_today);

    for (i = 0; i <= 6; i++)
      if (strcmp(reg_today, name_day[i]) == 0) {
        today = i;
        break;
      }

    if (today >= sun && today <= sat) {
      yesterday = (today + 6) % 7;
      tomorrow = (today + 1) % 7;
      printf("\nToday = %s\nYesterday = %s\nTomorrow = %s\n\n", name_day[today],
             name_day[yesterday], name_day[tomorrow]);
    }
  } while (today >= sun && today <= sat);
}