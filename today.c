#include<stdio.h>
#include<time.h>
#include "set.h"


int main(void)
{
//  time_t today;
//  struct tm *date;
  char *my_weekday[]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
//  time(&today);
//  printf("now is %s\n",asctime(localtime(&today)));
//  printf("now is %s\n\n",ctime(&today));
//  date=localtime(&today);
//  printf("today is a %s\n",weekday[date->tm]);

  set_t weekday, weekend, week;

  set_empty(weekday);set_empty(weekend);set_empty(week);

  set_add_range(weekday, 1, 5);  /* Monday to Friday */
  set_add_element(weekend,0);  /* Sunday */
  set_add_element(weekend,6);  /* Saturday */
  set_union(week,weekday,weekend);

  set_print_elements("weekday", weekday);
  set_print_elements("weekend", weekend);
  set_print_elements("week", week);

  int dayindex=6;//check Saturday
  if (set_inclusion(dayindex,weekday))
      printf("%s is a weekday",my_weekday[dayindex]);
  else if (set_inclusion(dayindex,weekend))
      printf("%s is a weekend",my_weekday[dayindex]);

  return 0;
}

