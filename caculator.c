/*calculator for + - x / 
BUL ID:1944419*/
#include<stdio.h>
//make 4 functions for caculation 
float plus(float a,float b)
{
float result0;
result0=a+b;
return result0;    
} 


float minus(float a,float b)
{
float result0;
result0=a-b;
return result0;    
}


float multply(float a,float b)
{
float result0;
result0=a*b;
return result0;
}


float divide(float a,float b)
{
float result0;
result0=a/b;
return result0;    
}


/*---------------------------------------------------------------------------------------------------*/

// main function


int main()
{
    char i;
    float a,m,n;//m is the result
    float b;
    printf("please enter your calculation and press enter \nfor example input 1+3= and press enter\n");
    scanf("%f%c%f",&a,&i,&b);
    m=a;
    n=b;
    for (int t;;t++)//endless for-loop
    {
        switch (i)
        {
        case '+':
        m=plus(m,n);
        break;

        case '*':
        case 'x':
        case 'X'://to support some ways of inputing the multiply
        m=multply(m,n);
        break;
       

        case '/':
        m=divide(m,n);
        break;

        case '-':
        m=minus(m,n);
        break;

        default:
        printf("error,please check your calculation\n tips:plus(+) minus(-) multiply(* or x or X) divide(/) \n");
        // an alart to prevent other conditons
        break;
        }

        i=getchar();//in order to obtain the "=" of the calculation
        if(i=='=') //the condition for jumping out of the loop
        {
        printf("%f\n",m);
        break;//jumping out of the loop
        }
        else
        {
        scanf("%f",&n);
        /*if the last one char is not the "=",the loop will continue,
        but for the calculation is in the  format of "a+b+" instead of "a+ba"
        so there need a new scanf to prevent this situation*/
        }
        
    }
return 0;
}