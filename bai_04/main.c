#include<stdio.h>

int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	
	int x=a;
	int y=b;
	
	while(y!=0){
		int r=x%y;
		x=y;
		y=r;
	}
	int ucln=x;
	int bcnn=(a*b)/ucln;
	printf("UCLN: %d\n",ucln);
	printf("BCNN: %d",bcnn)
}
