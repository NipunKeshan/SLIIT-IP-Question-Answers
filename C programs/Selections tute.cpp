#include<stdio.h>
int main()
{
      
    int num1,num2;
    float ans;
    char opt;
    
    printf("Enter the number 1 :");
    scanf("%d",&num1);
    
    printf("Entre the number 2 :");
    scanf("%d",&num2);
    
    printf("Input the operetion :");
    scanf(" %c",&opt);
    
    
    switch(opt)
    {
    	case '+' : ans = num1 + num2;
    	           printf("The answer is %.2f",ans);
    	           break;
    	           
    	case '-' : ans = num1 - num2;
    	           printf("The answer is %.2f",ans);
    	           break;
				   
		case '*' : ans = num1 * num2;
    	           printf("The answer is %.2f",ans);
    	           break;
				   
		case '/' : ans = num1 / num2;
    	           printf("The answer is %.2f",ans);
    	           break;
				   
		default : printf("Invalid type");
				   		   		              
	}
    
    
    
    
    return 0;
    
}
























