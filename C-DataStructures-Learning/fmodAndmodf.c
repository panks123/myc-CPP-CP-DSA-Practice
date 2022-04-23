#include<stdio.h>
#include<math.h>

int main(){
  //1
  double firstNumber;
  double secondNumber;

  //2
  double number;
  double fractionPart;
  double intPart;

  //3
  printf("Enter the first number : ");
  scanf("%lf",&firstNumber);

  //4
  printf("Enter the second number : ");
  scanf("%lf",&secondNumber);

  //5
  printf("fmod(firstNumber,secondNumber) is %lf \n",fmod(firstNumber,secondNumber));

  //6
  printf("Enter another number : ");
  scanf("%lf",&number);

  //7
  fractionPart = modf(number,&intPart);
  printf("Interger component : %lf\n",intPart);
  printf("Fraction component : %lf\n",fractionPart);
}
