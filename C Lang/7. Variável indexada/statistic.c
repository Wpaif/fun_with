#include <math.h>
#include <stdio.h>

int main(void) {
  double ma = 0, mq = 0, dp = 0;
  float arr[] = {1.2, 2.3, 3.4, 4.5};
  size_t length = sizeof(arr) / sizeof(arr[0]);

  for (size_t i = 0; i < length; i++) {
    ma += arr[i];
    mq += pow(arr[i], 2);
  }

  ma /= length;
  mq /= length;

  for (size_t i = 0; i < length; i++)
    dp += pow(arr[i] - ma, 2);

  dp = sqrt(dp) / sqrt(length);

  printf("Arithmetic Average: %4.2f\n", ma);
  printf("Root Mean Square: %6.2f\n", mq);
  printf("Standard Deviation: %4.2f%%\n", dp);
}