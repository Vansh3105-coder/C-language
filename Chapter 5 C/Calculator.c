#include <stdio.h>
#include <math.h>

// Function prototype
float sum(float, float);
float subtract(float, float);
float multiply(float, float);
float division(float, float);
float sine(float);
float cosine(float);
float tangent(float);
float cosecant(float);
float secant(float);
float cotangent(float);
float sine_inv(float);
float cosine_inv(float);
float tangent_inv(float);


int main(void)
{
    int e;
    do
    {
        int p;
        float x,y,t;
        printf("Choose the operation:\n");
        printf("1) Addition\t        2) Subtraction\t        3) Multiplication\n4) Division\t        5) Sine value\t        6) Cosine value\n");
        printf("7) Tangent value\t8) Cosecant value\t9) Secant value\n10) Cotangent value\t11) Sine_inverse value\t");
        printf("12) Cosine_inverse value\n13) Tangent_inverse value\n");
        scanf("%d",&p);

        if(p==1||p==2||p==3||p==4)
        {
            printf("Enter value of x:\n");
            scanf("%f", &x);
            printf("Enter value of y:\n");
            scanf("%f", &y);
            if(p==1)
            {
                sum(x, y); // Function call
            }
            else if(p==2)
            {
                subtract(x, y); // Function call
            }
            else if(p==3)
            {
                multiply(x, y); // Function call
            }
            else if(p==4)
            {
                division(x, y); // Function call
            }
        }
        else if(p==5)
        {
            printf("Enter the angle in degrees u want to calculate sine value of:\n");
            scanf("%f", &t);
            sine(t);
        }
        else if(p==6)
        {
            printf("Enter the angle in degrees u want to calculate cosine value of:\n");
            scanf("%f", &t);
            cosine(t);
        }
        else if(p==7)
        {   
            printf("Enter the angle in degrees u want to calculate tangent value of:\n");
            scanf("%f", &t);
            tangent(t);
        } 
        else if(p==8)
        {
            printf("Enter the angle in degrees u want to calculate cosecant value of:\n");
            scanf("%f", &t);
            cosecant(t);
        }   
        else if(p==9)
        {
            printf("Enter the angle in degrees u want to calculate secant value of:\n");
            scanf("%f", &t);
            secant(t);
        }
        else if(p==10)
        {
            printf("Enter the angle in degrees u want to calculate cotangent value of:\n");
            scanf("%f", &t);
            cotangent(t);
        }
        else if(p==11)
        {
            printf("Enter the value u want to calculate sin_inverse of:\n");
            scanf("%f", &t);
            sine_inv(t);
        }
        else if(p==12)
        {
            printf("Enter the value u want to calculate cosine_inverse of:\n");
            scanf("%f", &t);
            cosine_inv(t);
        }
        else if(p==13)
        {
            printf("Enter the value u want to calculate tangent_inverse of:\n");
            scanf("%f", &t);
            tangent_inv(t);
        }
        
        printf("Want to use the calculator again?(0/1)\n");
        scanf("%d",&e);

    }while(e==1);

    printf("Thank you for using our calculator.\nHope you are having a good day.\n");
return 0;   
}
    



// Function definition
float sum(float a, float b)
{
    printf("The sum is %.2f\n", a + b);
    return a + b;
}

float subtract(float a, float b)
{
    printf("The difference is %.2f\n", a - b);
    return a - b;
}

float multiply(float a, float b)
{
    printf("The product is %.2f\n", a * b);
    return a * b;
}

float division(float a, float b)
{
    if (b == 0)
    {
        printf("The division is invalid, please choosed another number instead of 0.\n");
    }
    else
    {
        printf("The division is %.2f\n", a / b);
        return a / b;
    }
}

float sine(float degree)
{
    float rad = (degree * 3.14159) / 180;
    printf("The sin value is %.5f\n", sin(rad));
    return sin(rad);
}
float cosine(float degree)
{
    float rad = (degree * 3.14159) / 180;
    printf("The cosine value is %.5f\n", cos(rad));
    return cos(rad);
}
float tangent(float degree)
{
    float rad = (degree * 3.14159) / 180;
    if(fmod(degree,180) == 90 || fmod(degree,180)== -90)
    {
        printf("Tangent at the given angle is not defined or infinitely large.\n");
        return 0;
        
    }
    else
    {
        printf("The tangent value is %.5f\n", tan(rad));
        return tan(rad);
    }
    
}
float cosecant(float degree)
{
    if(fmod(degree,180)==0)
    {
        printf("Cosecant at the given angle is not defined.\n");
        return 0;
    }
    else
    {
        float rad = (degree * 3.14159) / 180;
        printf("The cosecant value is %.5f\n", 1/(sin(rad)));
        return 1/(sin(rad));
    }
}
float secant(float degree)
{
    if(fmod(degree,180)==90 || fmod(degree,180)==-90)
    {
        printf("Secant at the given angle is not defined.\n");
        return 0;
    }
    else
    {
        float rad = (degree * 3.14159) / 180;
        printf("The secant value is %.5f\n", 1/(cos(rad)));
        return 1/(cos(rad));
    }
}
float cotangent(float degree)
{
    if(fmod(degree,180)==0)
    {
        printf("Cotangent at the given angle is not defined.\n");
        return 0;
    }
    else
    {
        float rad = (degree * 3.14159) / 180;
        printf("The cotangent value is %.5f\n", 1/(tan(rad)));
        return 1/(tan(rad));
    }
}
float sine_inv(float num)
{
    if(num>1||num<-1)
    {
        printf("Invalid value.\nPlease enter value which comes in domain of arc(sine).\n");
        return 0;
    }
    else 
    {
        printf("The Sine_inverse value is %.5f\n", ((asin(num))*180)/3.14159);
        return ((asin(num))*180)/3.14159;
    }
}
float cosine_inv(float num)
{
    if(num>1||num<-1)
    {
        printf("Invalid value.\nPlease enter value which comes in domain of arc(cosine).\n");
        return 0;
    }
    else
    {
        printf("The Cosine_inverse value is %.5f\n", ((acos(num))*180)/3.14159);
        return ((acos(num))*180)/3.14159;
    }
    
}
float tangent_inv(float num)
{
    
    printf("The Tangent_inverse value is %.5f\n", ((atan(num))*180)/3.14159);
    return ((atan(num))*180)/3.14159;
}
