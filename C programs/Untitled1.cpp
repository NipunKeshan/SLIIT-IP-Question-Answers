#include<stdio.h>
int main()
{
    int total,option,clas;
    char e,b;
    printf("Input Airline Option :");
    scanf("%d",&option);
    
    if(option == 1)
    {
        printf("Class type");
        scanf("%d",&clas);
        if(clas == 1)
        {
            total = total + 36500;
        }
        else if(clas == 2)
        {
            total = total + 77600;
        }
    }
    else if(option == 2)
    {
        printf("Class type");
        scanf("%d",&clas);
        if(clas == 1)
        {
            total = total + 35800;
        }
        else if(clas == 2)
        {
            total = total + 76500;
        }
    }
    else if(option == 3)
    {
        printf("Class type");
        scanf("%d",&clas);
        if(clas == 1)
        {
            total = total + 54600;
        }
        else if(clas == 2)
        {
            total = total + 84700;
        }
    }
    else if(option == 4)
    {
        printf("Class type");
        scanf("%d",&clas);
        if(clas == 1)
        {
            total = total + 28500;
        }
        else if(clas == 2)
        
            {
			total = total + 42800;
            }
    }
    printf("Total price : %d",total);
    return 0;
}
