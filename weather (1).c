#include <stdio.h>

int main() {
  int temp1, temp2, temp3, max, day;
  printf("You will be asked to enter the daily high temperature for 3 "
         "consecutive days.\n");
  printf("Enter a high temperature: ");
  scanf("%d", &temp1);
  printf("Enter a high temperature: ");
  scanf("%d", &temp2);
  printf("Enter a high temperature: ");
  scanf("%d", &temp3);

  if ((temp1 > temp2) && (temp1 > temp3)) { //If temp1 is the highest
    max = temp1;
    day = 1;
  } else if ((temp2 > temp1) && (temp2 > temp3)) { //If temp2 is the highest
    max = temp2;
    day = 2;
  } else if ((temp3 > temp1) && (temp3 > temp2)) { //If temp3 is the highest
    max = temp3;
    day = 3;
  }

  printf("\nThe highest recorded temperature in the 3-day period was: %d "
         "degrees\n",
         max);
  printf("Recorded on day #%d", day);

  return 0;
}