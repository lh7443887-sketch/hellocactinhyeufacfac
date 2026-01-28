#include<stdio.h>

int main()
{
	//nhap mang
int a [50][50];
int i,j,m,n;
printf("Nhap so dong=");
scanf("%d",&m);
printf("Nhap so cot=");
scanf("%d",&n);

for (i=0;i<m;i++)
{
	for(j=0;j<n;j++)
	{
		printf("a[%d][%d]=",i,j);
		scanf("%d",&a[i][j]);
	}
}

   //xuatmang
printf("\nXuat ma tran:\n");
for(i=0;i<m;i++)
{
	printf("\n");
	for (j=0;j<n;j++)
	{
		printf("%5d",a[i][j]);
	}
}

	//tinh tong
	int s=0;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			s=s+a[i][j];
		}
	}
printf("\nTong tat ca:%d",s);	
return 0;
}
