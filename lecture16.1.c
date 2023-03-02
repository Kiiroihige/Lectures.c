#include<stdio.h>
#include<stdlib.h>

int main()
    {
        //  SWITCH CASE EXAMPLE A
        int number1,number2,result;
        char operation;
        number1=15;
        number2=12;
        printf("Operation: ");
        scanf("%s",&operation);

        switch(operation)
        {
            case '+':
                result=number1+number2;
                printf("Result: %d\n",result);
                break;
            case '-':
                result=number1-number2;
                printf("Result: %d\n",result);
                break;
            case '/':
                result=number1/number2;
                printf("Result: %d\n",result);
                break;
            case '*':
                result=number1*number2;
                printf("Result: %d\n",result);
                break;       
            default:
                printf("Wrong Operation\n");
        }

        return 0;
    }
