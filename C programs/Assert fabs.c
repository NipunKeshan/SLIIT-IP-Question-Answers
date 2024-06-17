#include<stdio.h>
#include<assert.h>
#include<math.h>
float calMark(float finalmark, float camark);
void testassert(float finalmark, float camark);
int main()
{
	float finalmark, camark,cal;
	
	testassert( finalmark,  camark);
	
	printf("Enter the final exam marks :");
	scanf("%f",&finalmark);
	
	printf("Enter the countinus assesment marks :");
	scanf("%f",&camark);
	

	
	cal = calMark(finalmark, camark);
	
	printf("The Final mark is %.2f",cal);
	
	return 0;
	
}

float calMark(float finalmark, float camark)
{
	float mark1 , mark2, overall;
	
	mark1 = finalmark * 0.6;
	mark2 = camark * 0.4;
	overall  = mark1 + mark2;
	return overall;
}
void testassert(float finalmark, float camark)
{
	assert(fabs(calMark(100, 100) - 100) < 0.01);
	assert(fabs(calMark(60, 70) - 64) < 0.01);
	return ;
}

