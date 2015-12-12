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
	int n,i;
	printf(" enter upto which term you want\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
	printf(" %d ",fibo(i));
	}
	return 0;
}

