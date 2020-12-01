#include<stdio.h>
void main(){
	int n,i,j,k,x=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(k=1;k<=n-i;k++){
			printf("    ");
		}
		for(j=1;j<=i;j++)
		{
			if(x<11)
			printf("%d   ",x);
			else
			printf("%d  ",x);
			x++;
		}
		printf("\n");
	}

}
