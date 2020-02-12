#include <stdio.h>
#include <stdlib.h>
struct car
{
    int model;
    float kilometre;
    char marka[30];
};
int main()
{
    struct car *ptr;
    int i,n;
    printf("Araba sayisi :\n");
    scanf("%d",&n);
    ptr=(struct car *)malloc(sizeof(struct car)*n);
    if(ptr==NULL)
        exit(1);
    for(i=0;i<n;i++)
    {
        printf("Marka,model ve kilometreyi sirayla giriniz : \n");
        scanf("%s %d %f",&(ptr+i)->marka,&(ptr+i)->model,&(ptr+i)->kilometre);
        //scanf("%s %d %f",&(*(ptr+i)).marka,&(*(ptr+i)).model,&(*(ptr+i)).kilometre);
    }
    for(i=0;i<n;i++)
    {
        printf("%s\t%d\t%2.f\n",(ptr+i)->marka,(ptr+i)->model,(ptr+i)->kilometre);
        //printf("%s\t%d\t%2.f\n",(*(ptr+i)).marka,(*(ptr+i)).model,(*(ptr+i)).kilometre);

    }
}
