#include <stdio.h>

float  add(float x,float y);
float  sub(float x,float y);
float  mult(float x,float y);
float  div(float x,float y);
int  and(int x,int y);
int  or(int x,int y);
int Not(int x);
int  xor(int x,int y);
int remider(int x,int y);
float  dec(float x);
float  inc(float x);


int main()
{
    printf("Enter the cod of the opration : ");
    int k;
    int x,y;
    scanf("%d",&k);

    if(k>9||k==7)
    {
        printf("Enter the number:");
        scanf("%d",&x);
    }
    else
    {
        printf("Enter the frist  number:");
        scanf("%d",&x);
        printf("Enter the second number:");
        scanf("%d",&y);
    }


switch (k){
                case 1:
                    printf("%f",add(x,y));
                    break;
                case 2:
                    printf("%f",sub(x,y));
                    break;
                 case 3:
                    printf("%f",mult(x,y));
                    break;
                case 4:
                    printf("%f",div(x,y));
                    break;
                case 5:
                    printf("%d",and(x,y));
                    break;
                    case 6:
                    printf("%d",or(x,y));
                    break;
                    case 7:
                    printf("%d",Not(x));
                    break;
                    case 8:
                    printf("%d",xor(x,y));
                    break;
                    case 9:
                    printf("%d",remider(x,y));
                    break;
                    case 10:
                    printf("%f",inc(x));
                    break;
                    case 11:
                    printf("%f",dec(x));
                    break;
        default :
            printf("0.0");}



}
float  add(float x,float y)
{
    return x+y;
}
float  sub(float x,float y)
{
    return x-y;
}
float  mult(float x,float y)
{
    return x*y;
}
float  div(float x,float y)
{
    return (x)/(y);
}

int  and(int x,int y)
{
    return x&y;
}
int  or(int x,int y)
{
    return x|y;
}
int Not(int x)
{
    int z =~x;
    return z;
}

int  xor(int x,int y)
{
    return x^y;
}
int remider(int x,int y)
{
    return x%y;
}

float  inc(float x)
{
    return++x;
}
float  dec(float x)
{
    return --x;
}
