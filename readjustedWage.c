#include <stdio.h>

int main () {

  float wage;

  printf("Enter your wage: ");
  scanf("%f", &wage);

  if (wage<=2000.00 && wage>0) {
    wage = wage*1.5;
    printf("\n50%% of wage readjustment");
    printf("\nNew Wage: %.2f", wage);
  }
  else if (wage>2000) {
    wage = wage*1.3;
    printf("\n30%% of wage readjustment");
    printf("\nNew Wage: %.2f", wage);
  }
  else {printf("\nNot valid value.");
  }
}
