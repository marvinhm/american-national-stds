#include <stdio.h>

/* print Farenheit-Celsius table for fahr = 0, 20, ..., 300; floating-point version */

main()
{
  float celsius, fahr;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  // celsius = lower;
  // while(celsius <= upper) {
  //   fahr = celsius * (9.0/5.0) + 32.0;
  //   printf("%3.0f %6.1f \n", celsius, fahr);
  //   celsius = celsius + step;
  // }

  for(celsius = upper; celsius >= lower; celsius = celsius - step) {
    fahr = celsius * (9.0/5.0) + 32.0;
    printf("%3.0f %6.1f\n", celsius, fahr);
  }

}