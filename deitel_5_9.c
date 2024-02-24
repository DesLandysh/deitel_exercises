/* Deitel, 5.9 task */

#include <stdio.h>
#include <math.h>

/* used for cloisures */
static double total_hours = 0;
static double total_charge = 0;


double calculateCharges(double hours){
  double temp;
  if (hours == 24.0)      temp = 10.0;
  else if (hours <= 3.00) temp =  2.0;
  else      temp = 2 + (hours - 3) * 0.5;
  total_charge += temp;   /* side effect Cloisure */
  return temp;
}

double calcHours(double *time)
{
  double hours;
  hours = 24.0 - fmod(*time, 24.0);
  if (!hours) hours = 24.0;
  total_hours += hours;   /* side effect Cloisure */
  return hours;
}


int main(void)
{
  int driver_counter = -1;
    
  puts("Введите количество водителей: ");
  scanf("%d", &driver_counter);

  /* TIME GETTING & CALCULATION */
  double drivers_time[driver_counter];
  for (int driver = 1; driver <= driver_counter; ++driver){
    int h;  int _m;
    double mins;
    
    printf("Введите время начала парковки для %d водителя (HH:MM): ", driver);
    scanf("%d:%d", &h, &_m);
    
    mins = _m / 60.0;  /* 60system to DEC */
    drivers_time[driver] = (double)h + mins;
    drivers_time[driver] = calcHours(&drivers_time[driver]);

  }
  
  /* PRINT OUTPUT */
  puts("Car\t Hours\t Charge");
  for (int driver = 1; driver <= driver_counter; ++driver){
    printf("%d\t %5.1f\t %6.2f\n", driver, drivers_time[driver], calculateCharges(drivers_time[driver]));
  }
  printf("TOTAL\t %5.1f\t %6.2f\n", total_hours, total_charge);
  
  return 0;
}