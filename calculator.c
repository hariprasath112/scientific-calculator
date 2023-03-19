#include <stdio.h>
#include <math.h>

long double memory=0,func_name,result,askdo_input;

int repeat(){
  memory=result;
  system("clear");
  askdo();

}
int askdo(){
  system("clear");
  printf("\033[1;32m---------------------------------------\033[0m\n");
  printf("\033[1;32m%Lf\033[0m\n",memory);
  printf("\033[1;32m---------------------------------------\033[0m");
  printf("\n0. Clear all\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. sin (deg)\n6. cos (deg)\n7.tan (deg)\n8. n Power\n9. n Root\n");
  printf("Enter function option number/memory input num>9: ");
  scanf("%Lf",&askdo_input);
  if (askdo_input==0){
    result=0.0;
    repeat();
  }
  if(askdo_input>=10){
    result=askdo_input;
    repeat();
  }
  if(memory==0&&(askdo_input==1||askdo_input==2||askdo_input==3||askdo_input==4)){
    printf("Enter memory number/primary number:");
    scanf("%Lf",&memory);
  }else;
  printf("Enter performing number:");
  scanf("%Lf",&func_name);
  int choice = askdo_input;
  long double val;
  switch(choice){
    case 1: result=memory+func_name;break;
    case 2: result=memory-func_name;break;
    case 3: result=memory*func_name;break;
    case 4: result=memory/func_name;break;
    case 5: result=sin(func_name/57.2957795);break;
    case 6: result=cos(func_name/57.2957795);break;
    case 7: result=tan(func_name/57.2957795);break;
    case 8: printf("Enter exponent value: "); scanf("%Lf",&val);
            result=pow(func_name,val);break;
    case 9: printf("Enter root cap value: "); scanf("%Lf",&val);
            result=pow(func_name,1/val);break;
    }
  repeat();

}
int main(){
  askdo();
}
