#include <stdio.h>
int main() {
  float radius, height, volume;
  printf("Enter radius: ");
  scanf("%f", &radius);

  printf("Enter height: ");
  scanf("%f", &height);
  //Operation needed that follows the formula given in the instructions
  volume = 3.14159 * (radius * radius) * height;
  printf("Volume: %.2f", volume);

  return 0;
}