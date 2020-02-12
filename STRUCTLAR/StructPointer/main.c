#include <stdio.h>
#include <stdlib.h>
struct name
{
    int a;
    float b;
};
int main()
{
    struct name *ptr,p;
    ptr=&p;
    printf("Integer :");
    scanf("%d",&(*ptr).a);
    printf("Float :");
    scanf("%f",&ptr->b);
    printf("%d\n",(*ptr).a);
    printf("%f\n",ptr->b);
}
