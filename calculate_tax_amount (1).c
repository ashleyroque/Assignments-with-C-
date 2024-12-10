#include <stdio.h>
int main() {
  float income, tax;
  int dependents, tax_credit;
  printf("Enter income: ");
  scanf("%f", &income);
  // This follows the same logic from the table given within the instructions 
  if (income <= 9275) {
    tax = income * .12;
  } else if (income <= 37650) {
    tax = income * .17;
  } else if (income <= 91150) {
    tax = income * .27;
  } else if (income <= 190150) {
    tax = income * .30;
  } else {
    tax = income * .35;
  }
  printf("Tax due = $%.2f \n", tax);

  printf("Enter the number of dependents (0 for none): ");
  scanf("%d", &dependents); 
  //The maximun tax credit is $2,250 with 5 dependents 
  if (dependents >= 5) {
    printf("Tax credit = $2250\n");
    tax_credit = 2250;
  } else {
    printf("Tax credit = $%d\n", dependents * 450);
    tax_credit = dependents * 450;
  }

  printf("Adjusted Tax = $%.2f\n", tax - tax_credit);
}
