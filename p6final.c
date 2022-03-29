#include<stdio.h>
void input_two_string(char*a,char*b)
{
	printf("enter the first string :");
	scanf("%s",a);
	printf("enter the second string :");
	scanf("%s",b);
	}
	int strcmp(char *a,char *b)
	{
	 int i;
	 for(i=0;a[i]==b[i] && a[i]=='\0';i++)
	 {
	 return a[i] - b[i];
	 	}
	 	void output(char *a,char *b,int result)
	 	{
	 		if(result>0)
	 		{
	 		printf("%s is greater than %s",a,b);
	 			}
	 		else if(result<0)
	 			{
	 				printf("%s is greater than %s",b,a);
	 				}
	 				else 
	 				{
	 				printf("%s and %s are same size",a,b);
	 					}
	 					}
	 					int main()
	 					{
	 						char a[100],b[100]input_two_string(a,b);
	 						int result=strcmp(a,b);
	 						output(a,b,result);
	 						printf("%d",result);
	 						return 0;
	 						}