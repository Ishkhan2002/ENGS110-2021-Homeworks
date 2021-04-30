#include<stdio.h>

int main(){
	int x;
	printf("Enter your age");
	scanf("%d",&x);
	int temp = 0;
	int a = 0, b = 1, s = 0;
	while(a+temp<=x){
	temp=a;
	a=a+b;
	b=temp;
	s=s+a;
	}
	printf("sum=%d\n",s);
	
	int c, k;
	for(c=31;c>=0; c--)
	{
	k= s>>c;
		if(k&1)
			printf("1");
		else
			printf("0");
	}

}



