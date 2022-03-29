#include <stdio.h>
float input()
{
	float x;
	printf("enter the value of a number which u want to find square root");
	scanf("%f",&x);
	return x;
	}
	float my_sqrt(float x)
	{
		float guess=x/2;
		float next=x/guess;
		while(fabs(guess-next)>0.000001)
		{
			guess=0.5*(guess+next);
			next=x/guess;
			}
			return next;
			}
			void output(float x,float sqrt_result)
			{
			printf(%f is a sqrt of %f",mysqrt,x);
				}
				
				int main()
				{
					float x,mysqrt;
					x=input();
					mysqrt=find_sqrt(x);
					output(x,mysqrt);
					return 0;
					}