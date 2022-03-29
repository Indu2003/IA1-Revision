#include <stdio.h>
int input()
{
	int x;
	printf("enter 3 numbers");
	scanf("%d",&x);
	return x;
	}
	int cmp(int a,int b,int c){
		if(a>b && a>c)
		{
			return a;
			}
			else if(b>a && b>c)
			{
				return b;
				}
				else 
				{
					return c;
					}
					}
					void output	(int a,int b,int c,int largest)
					{
						printf("the largest number of %d%d%d is %d",a,b,c,largest);
						}
					int main()
					{
						int p,q,r,s;
						p=input();
						q=input();
						r=input();
						s=cmp(p,q,r);
						printf("%d\n",s);
						return 0;
						}