#include <stdio.h>
int input_array_size(){
	int n;
	printf("enter array size:");
	scanf("%d",&n);
	return n;
	}
	void input_array(int n,int a[n]){
		int i;
		printf("enter the elements of the array:/n");
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
			}
			}
			int sum_n_arrays(int n,int a[n]){
				int i,sum=0;
				for(i=0;i<n;i++){
					sum+=a[i];
					}
					return sum;
					}
					void out_put(int n,int a[n],int sum){
						int i;
						printf("the sum of the array elements\n");
						for(i=0;i<n-1;i++){
							printf("%d+",a[i]);
							}
							printf("%d is %d\n",a[n-1],sum);
							}