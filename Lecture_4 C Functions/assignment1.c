#include <stdio.h>
#include <stdlib.h>
void get_Max(int x,int y,int z,int k);
void get_Min(int x,int y,int z,int k);
int main()
{ printf("Enter the values:");
    int x,y,z,k;
    scanf("%d",&x);
    scanf("%d",&z);
    scanf("%d",&y);
    scanf("%d",&k);
get_Max(x,y,z,k);
get_Min(x,y,z,k);
}
void get_Max(int x,int y,int z,int k)
{
    if (x>=y&&x>=z&&x>=k)
    {
        printf("The Maximum is : %d\n",x);
    }
    else if(y>=x&&y>=z&&y>=k)
    {
        printf("The Maximum is : %d",y);
    }
    else if(z>=x&&z>=y&&z>=k)
    {
        printf("The Maximum is : %d",z);
    }
    else
    {
         printf("The Maximum is : %d",k);
    }
    }

void get_Min(int x,int y,int z,int k)
{
    if (x<=y&&x<=z&&x<=k)
    {
        printf("The Manimum is : %d",x);
    }
    else if(y<=x&&y<=z&&y<=k)
    {
        printf("The Manimum is : %d",y);
    }
    else if(z<=x&&z<=y&&z<=k)
    {
        printf("The Manimum is : %d",z);
    }
    else
    {
         printf("The Manimum is : %d",k);
    }
    }




