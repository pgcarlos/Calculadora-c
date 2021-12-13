#include<stdio.h>
#include<stdlib.h>


void menu();
float sum(float,float,float);
float rest(float,float,float);
float multiplication(float,float,float);
float division(float,float,float);


int main(){
    menu();
    return 0;
}

void menu(){
    float a,b,c;

    int option;
    printf("Choose an option: \n");
    printf("1.- Sum \n");
    printf("2.- Rest \n");
    printf("3.- Multiplication\n");
    printf("4.- Division \n");
    printf("5.- Exit \n");
    scanf("%d",&option);

    switch (option)
    {
    case 1:       
        sum(a,b,c);
        break;
    case 2: 
         rest(a,b,c);   
        break;
    case 3: 
         multiplication(a,b,c); 
        break;
    case 4: 
         division(a,b,c);   
        break;
    case 5: 
         printf("EXIT SUCESS!\n");   
        break;
    
    default:
        break;
    }

}

float sum(float a, float b, float c){
    printf("Enter the first number: \n");
    scanf("%f",&a);
    printf("Enter the second number: \n");
    scanf("%f",&b);

    c=a+b;

    printf("The result of the sum is: %.3f\n",c);


   return c;
}

float rest(float a, float b, float c){
    printf("Enter the first number: \n");
    scanf("%f",&a);
    printf("Enter the second number: \n");
    scanf("%f",&b);

    c=a-b;

    printf("The result of the rest is: %.3f\n",c);


   return c;
}

float multiplication(float a, float b, float c){
    printf("Enter the first number: \n");
    scanf("%f",&a);
    printf("Enter the second number: \n");
    scanf("%f",&b);

    c=a*b;

    printf("The result of the multiplication is: %.3f\n",c);


   return c;
}

float division(float a, float b, float c){
    printf("Enter the first number: \n");
    scanf("%f",&a);
    printf("Enter the second number: \n");
    scanf("%f",&b);  

    while (b==0)
    {
        printf("You can't divide a number by 0. \n\n");
        printf("Give a number different than 0: \n");
        scanf("%f",&b);
    }

    c=a/b;

    printf("The result of the division is: %.3f\n",c);
    

    /* 
    if (b==0)
    {
        printf("You cant divided a number by 0");
    }
    else
    {
       c=a/b; 
    }
    printf("The result of the division is: %.2f\n",c);
    */
    
   return c;
}