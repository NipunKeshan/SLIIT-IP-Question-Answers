//Allthe ip tutes in IP module 
//................................................................................................................

//Tutorial 02

//Exesice 3

/*
#include<stdio.h>
int main()
{
	int mark1,mark2;
	float ave;
	
	printf("Enetr the mark 1 : ");
	scanf("%d",&mark1);
	
	printf("Enter the mark 2 :");
	scanf("%d",&mark2);
	
	ave = (mark1 + mark2) / 2;
	
	printf("The average is : %.2f",ave);
	
	return 0;

}
*/

//Exesice 4

/*
#include<stdio.h>
int main()
{
	
	
	struct item
	{
		int itemNo;
		double price;
		int quantity;
		
	}item1,item2;
	
	item1.itemNo = 1;
	item1.price = 10;
	item1.quantity = 12;
	
	item2.itemNo = 2;
	item2.price = 15;
	item2.quantity = 4;
	
	printf("Item No\t");
	printf("Price\t");
	printf("Quantity\n");
	
	printf("%d\t",item1.itemNo);
	printf("%.2f\t",item1.price);
	printf("%d\n",item1.quantity);
	
	printf("%d\t",item2.itemNo);
	printf("%.2f\t",item2.price);
	printf("%d\t",item2.quantity);
	
	return 0;
}
*/

//--------------------------------------------------------------------------------------------------------------------
//Totorial 03
//Exesice 01

/*
#include<stdio.h>
int main()
{
    float r,dia,circ,area;
    
    printf("Enter the radius of the circle :");
    scanf("%f",&r);
    
    dia = 2.0 * r;
    
    circ = 2.0 * 22.0 / 7 * r;
    
    area = 22.0 / 7 * r * r;
    
    printf("The Diameter of the circle is : %.2f\n",dia);
    printf("The circumference of the circle is  : %.2f\n",circ);
    printf("The Area of the circle is : %.2f\n",area);
    
    return 0;
	
}
*/

//Exesice 02
/*
#include<stdio.h>
int main()
{
	int num;
	
	printf("Enter the number : ");
	scanf("%d",&num);
	
	printf("%d\t%d\t%d\t%d\t%d",num / 10000, num / 1000 % 10, num / 100 % 10, num /10  % 10,num % 10  );
	
	return 0;
	
	
}
*/

//Execise 3

/*
#include<stdio.h>
int main()
{
	int i,j,k,m;
	
	i=1;
	j=2;
	k=3;
	m=2;
	
	printf( "%d\n", i == 1 );
    printf( "%d\n", j == 3 );
    printf( "%d\n", i >= 1 && j < 4 );
    printf( "%d\n", k + m < j || 3 - j >= k );
    printf( "%d\n", !m );
    printf( "%d\n", !( j - m ) );

	return 0;
	
}
*/

//------------------------------------------------------------------------------------------------
//Tuotorial 04
//Execise 1
/*
#include<stdio.h>
int main()
{
	int num;
	
	printf("Enter the number :");
	scanf("%d",&num);
	
	if(num < 0)
	{
		num = num * -1;
		
	}
	
	printf("%d",num);
	
	return 0;
}
*/

//Execise 2
/*
#include<stdio.h>
int main()
{
	float bal,amount,balnew;
	char option;
	
	printf("Enter the bank balance : ");
	scanf("%f",&bal);
	
	printf("Enter the amount : ");
	scanf("%f",&amount);
	
	printf("Enter the transaction type :");
    scanf(" %c",&option);
	
	if(option == 'W' || option == 'w')
	{
		printf("You have selected to withdraw money\n");
		balnew =  bal - amount ;
		printf("The new balance is : %.2f", balnew);
		
	}
	
	else if(option == 'D' || option == 'd')
	{
		printf("You have selected to deposit money\n");
		balnew = bal + amount;
		printf("The new balance is : %.2f");
		
	}
	
	else if(option != 'D'||option != 'd'||option != 'W'|| option != 'w')
	{
		printf("Invalid type");
	}
	
	return 0;
}
*/

//Exesice 03
/*
#include<stdio.h>
int main()
{
	
	char ope;
	int num1,num2,ans;
	
	printf("Enter the number 1 :");
	scanf("%d",&num1);
	
	printf("Enter the number 2 :");
	scanf("%d",&num2);
	
	printf("Enter the operator :");
	scanf(" %c",&ope);
	
	if(ope == '+')
	{
		ans = num1 + num2;
		printf("Answer is  :%d",ans);
		
	}
	
	else if(ope == '-')
	{
		ans = num1 - num2;
		printf("Answer is  :%d",ans);
		
	}
	
	
	else if(ope == '/')
	{
		ans = num1 / num2;
		printf("Answer is  :%d",ans);
		
	}
	
	else if(ope == '*')
	{
		ans = num1 * num2;
		printf("Answer is  :%d",ans);
		
	}
	
	return 0;
}
*/

//Exesice 4
/*
#include<stdio.h>
int main()
{
	char ope;
	int num1,num2,ans;
	
	printf("Enter the number 1 :");
	scanf("%d",&num1);
	
	printf("Enter the number 2 :");
	scanf("%d",&num2);
	
	printf("Enter the operator :");
	scanf(" %c",&ope);
	
	switch(ope)
	{
		case '+' : ans = num1 + num2;
		           printf("Answer is  :%d",ans);
		           break;
		           
		case '-' : ans = num1 - num2;
		           printf("Answer is  :%d",ans);
		           break;
		
		case '*' : ans = num1 * num2;
		           printf("Answer is  :%d",ans);
		           break;
				   
		case '/' : ans = num1 / num2;
		           printf("Answer is  :%d",ans);
		           break;
		
				   		   		              
   }
   
   return 0;
	
}
*/

//-----------------------------------------------------------------------------------------------------------
//Tutorial 05
//Execise 1
/*
// First question
#include<stdio.h>
int main()
{
	int i;
	
	for(i=10 ; i<=20 ; i++)
	{
	
		printf("%d",i);
		
	}
	
	return 0;
}
*/

/*
//Second question
#include<stdio.h>
int main()
{
	int num;
	
	printf("Enter the number :\n");
	scanf("%d",&num);
		
	printf("%d",num);
		
	while (num > 0)
	{
		printf("Enter the number :");
		scanf("%d",&num);
		
		printf("\n%d\n",num);
		
		
		
	}
	
	return 0; 
}
*/

//Execise 03
/*
#include<stdio.h>
int main()
{
	int i,mark,count,j,max,std;
	
	count = 0;
	max = 0;
	std = 0;
	
	for(j=0 ; j<3; j++)
	{
		printf("\nEntert the student %d marks ,\n",j+1);
		
		for(i=0; i<4; i++)
	{
		printf("Enter the marks %d :",i+1);
		scanf("%d",&mark);
		
		count = count + mark;
	}
	
	printf("The total mark is : %d\n",count);
	
	if(count > max)
	{
		max = count;
		std = j+1;
	}
	
	}
	
	printf("The highest total mark is : %d\n",count);
	printf("The highest mark student is %d",std);
	
	return 0;
	
}

*/

//Exesice 04
/*
#include<stdio.h>
int main()
{
	
	int i,j;
	
	for(i=0; i<8; i++)
	{
		for(j=0; j<i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	for(i=7; i>0; i-=2)
	{
		for(j=0; j<i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	
	return 0;
}
*/

//-----------------------------------------------------------------------------------------------------------------
//Tutorial 06
//Exesice 01

/*
#include<stdio.h>
#include<math.h>
int main()
{
	float x;
	
	printf("%.2f\n",floor(7.5));
	printf("%.2f\n",ceil(0.0));
	printf("%.2f\n",ceil(-6.4));
	printf("%.2f\n",log10(100.0));
	printf("%.2f\n",ceil(floor(-5.5)));

	return 0;
}
*/

//Exesice 2
/*
#include<stdio.h>
float circleArea(float radius);
int main()
{
	float radius,area;
	
	printf("Enter the radius of the circle :");
	scanf("%f",&radius);
    
    area = circleArea( radius);
    
    printf("\nThe area of the circle is : %.2f",area);
    
    return 0;
}
float circleArea(float radius)
{
	float area;
	
	area = 22.0 / 7 * radius * radius;
	return area;
	
}
*/

//--------------------------------------------------------------------------------------------------------------------------
//Tutorial 07
//Exercise 1


//Exercise 2
/*
#include<stdio.h>
int main()
{
	int i,j,k,l,m,n;
	int matrx1[4][4];
	int matrx2[4][4];
	int matrx3[4][4];
	
	
	printf("Enter the First matrix :\n");
	
	for(i=0; i<4; i++)
	{
		printf("\nEnter the elements for %d row : \n",i+1);
		
		for(j=0; j<4; j++)
		{
			printf("Enter the %d element :",j+1);
			scanf("%d",&matrx1[i][j]);
		}
		printf("\n");
	}
	
	printf("Enter the Second matrix :\n");
	for(k=0; k<4; k++)
	{
		printf("\nEnter the elements for %d row : \n",k+1);
		
		for(l=0; l<4; l++)
		{
			printf("Enter the %d element :",l+1);
			scanf("%d",&matrx2[k][l]);
		}
		printf("\n");
	}
	
	for(m=0; m<4; m++)
	{
		
		for(n=0; n<4; n++)
		{
			matrx3[m][n] = matrx1[m][n] + matrx2[m][n];
			printf("%d\t",matrx3[m][n]);
		}
		printf("\n");
	}
	
	return 0;
} 
*/

//Execise 3



//------------------------------------------------------------------------------------------------------------
//Tutorial 08
//Exercise 1
/*
#include<stdio.h>
int main()
{
	int i,mark,sum;
	int markArray[10];
	sum = 0;
	
	for(i=0; i<10; i++)
	{
		printf("Enter the mark %d :",i+1);
		scanf("%d",&mark);
		
		if(mark >= 0 || mark <= 20)
		{
			markArray[i] = mark;
			
		}
	}
	
	for(i=0; i<10; i++)
	{
		printf("%d\t",markArray[i]);
	}
	
	for(i=0; i<10; i++)
    {
    	sum = sum + markArray[i];
	}
     
    printf("\nThe Sum is :%d",sum);
	
	return 0;
}
*/

//Exercise 3
/*
#include<stdio.h>
int main()
{
	int numArray1[5];
	int i;
	
	for(i=0; i<5; i++)
	{
		printf("Enter the number : ");
		scanf("%d",&numArray1[i]);
		
	}
	
	printf("\n");
	
	for(i=0;i<4; i++)
	{
		printf("%d\t",numArray1[i+1]);
	}
	
	printf("%d",numArray1[0]);
	
	return 0;
	
}

*/

//Execise 4
/*
#include<stdio.h>
int main()
{
	int i,j;
	int numArray[10];
	
	for(i=0; i<10; i++)
	{
		printf("Enter the number :");
		scanf("%d",&numArray[i]);
		
	}
	
	printf("Element\t");
	printf("Value\t");
	printf("Histogram\n");
	
	for(i=0; i<10; i++)
	{
		printf("%d\t",i);
		printf("%d\t",numArray[i]);
		
		for(j=0; j<numArray[i]; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
*/

//------------------------------------------------------------------------------------------------------------------------------------
//Tutorial 09
//Execise 1
/*
#include<stdio.h>
#include<assert.h>
int qualityPoints(int ave);
int main()
{
	int ave,grade;
	
	assert(qualityPoints(95) == 4);
	assert(qualityPoints(85) == 3);
	assert(qualityPoints(75) == 2);
	assert(qualityPoints(65) == 1);
	assert(qualityPoints(30) == 0);
	
	printf("Enter the student average marks : ");
	scanf("%d",&ave);
	
	grade = qualityPoints(ave);
	
	printf("\n%d",grade);
	
	return 0;
	
}
int qualityPoints(int ave)
{
	if(ave > 90 && ave < 100)
	{
		return 4;
	}
	
	else if(ave > 80 && ave < 89)
	{
		return 3;
	}
	
	else if(ave > 70 && ave < 79)
	{
		return 2;
	}
	
	else if(ave > 60 && ave < 69)
	{
		return 1;
	}
	
	else if( ave < 60)
	{
		return 0;
	}
	
	
}

*/

//Execise 2
/*
#include<stdio.h>
#include<math.h>
#include<assert.h>
float hypotenses(float side1, float side2);
int main()
{
	
	float side1,side2;
	float ans;
	
	
	
	printf("Enter the side 1 : ");
	scanf("%f",&side1);
	
	printf("Enter the side 2 : ");
	scanf("%f",&side2);
	
	ans =  hypotenses( side1,  side2);
	
	printf("The hypotenuse is : %.2f",ans);
	
	return 0;
	
}
float hypotenses(float side1, float side2)
{
	float hypo;
	hypo = sqrt( (side1 * side1) + (side2 * side2) );
	return hypo;
}
*/

//----------------------------------------------------------------------------------------------------------------------------------
//Tutorial 10

//Exercise 1
/*
#include<stdio.h>
int main()
{
	int i,num1;
	int num[5];
	
	FILE * ptr;
	
	ptr = fopen("number.dat","w");
	
	if(ptr == NULL)
	{
		printf("File not open correctly");
		return -1;
		
	}
	
	for(i=0; i<5; i++)
	{
		printf("Enter the number :");
		scanf("%d",&num[i]);
		
		fprintf(ptr,"%d\n",num[i]);
		
	}
	
	fclose(ptr);
	
	printf("Enter the  another number  : ");
	scanf("%d",&num1);
	
	ptr = fopen("number.dat","r");
	
	for(i=0; i<5; i++)
	{
		
		fscanf(ptr,"%d\n",&num[i]);
		
		if(num1 != num[i])
		{
			fprintf(ptr,"%d\n",num1);
		}
		
		else if(num1 == num[i])
		{
			printf("Number already exist");
			
		}
		
	}
	
	return 0;
	
}
*/

//Exercise 2
/*
#include<stdio.h>
int main()
{
	char name[50];
	char catecory[10];
	int count1,count2,count3,i;
	char C,R,S;
	
	
	FILE * ptr;
	
	ptr = fopen("appoinment.dat","w");
	
	if(ptr == NULL)
	{
		printf("File not open correctly");
		return -1;
	}
	
	for(i=0; i<5; i++)
	{
		printf("Enter the name :");
		scanf("%s",name);
		
		printf("Enter the appoinment type :");
		scanf(" %c",&catecory[i]);
		
		fprintf(ptr,"%s\t%c\n",name,catecory);
		
	}
	
	fclose(ptr);
	

		
	return 0;	
}
*/

























