 #include<stdio.h>
int fibo(int a)
{
if( a==1)
return 0;
else if ( a==2)	
return 1;
else{
 return (fibo(a-1)+fibo(a-2));
}}

int main()
{
	int n;
	printf(" enter term you want\n");
	scanf("%d",&n);
	printf("%dth term is %d",n,fibo(n));
	return 0;
}

