#include "stdio.h"
int main()
{
	long long int jiecheng(int b);
	int a=0;
	scanf("%d", &a);
	long long int c=jiecheng(a);
	printf("%d\n",c);
	return 0;
}
long long int jiecheng(int b)
{
	long long int k;
	if (b == 0 || b == 1)
		k = 1;
	else
		k = jiecheng(b - 1)*b;
		return(k);
}
//{
//	int a = 0;
//	a=sizeof(long long int);
//	printf("%d", a);
//	return 0;
//}