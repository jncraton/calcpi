#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const long INTERVALS = 12000000;

int main()
{

  double sum = 0.0;
  double midpoint;
  double area;

  clock_t start = clock();

  for (int i=0; i < INTERVALS; i++) {
    midpoint=((1.0/INTERVALS)*(i+0.5));
    sum+=4.0/(1.0+midpoint*midpoint);
  }

  area = sum * (1.0/INTERVALS);

  double elapsed_time =  (double)(clock() - start) / CLOCKS_PER_SEC;
  
  printf("Calculated pi as %13.11f in %.02f seconds\n", area, elapsed_time);
  fflush (stdout);
  
  return 0;
}
