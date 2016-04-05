#include <stdio.h> 
#include <stdlib.h> 
int main(void) {
	int n, m;
	printf("A(m,n)\nm=");
	scanf("%d",&m);
	printf("n=");
	scanf("%d",&n);
	printf("A(%d,%d)=%d\n",m,n,A(m,n));
}


int A(int m, int n) 
{
	if (m == 0)
	{
		return n + 1;
	}
	else if (n == 0)
	{
		return A(m - 1, 1);
	}
	else
	{
		return A(m - 1, A(m, n - 1));
	}
}



/*

A(m,n)= 

if(m==0)
	{n+1};
else if(n==0)
	{A(m-1,1) };
else
	{A(m-1,A(m,n-1)) };


*/
