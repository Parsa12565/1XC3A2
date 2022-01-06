#include <stdio.h>

void main()
{
	double sb;
	int ty;
	double rr;
	double ac;
	do
	{
		printf("Enter initial investment amount: ");
		scanf("%lf",&sb);
		if(sb<0)
		{
			printf("Initial investment cannot be negative.\n");
		}
	} while(sb<0);
	do
	{
		printf("Enter total years: ");
		scanf("%d",&ty);
		if(ty<1)
		{
			printf("Years must be greater than zero.\n");
		}
	} while(ty<1);
	do
	{
		printf("Enter return rate: ");
		scanf("%lf",&rr);
		if(rr<0)
		{
			printf("Rate cannot be negative.\n");
		}
	} while(rr<0);
	do
	{
		printf("Enter additional contribution amount: ");
		scanf("%lf",&ac);
		if(ac<0)
		{
			printf("Contribution cannot be negative.\n");
		}
	} while(ac<0);
	printf("\nYear      Start Balance       Interest            End Balance         \n");
	printf("**********************************************************************\n");
	int y;
	double i;
	double eb;
	for(y=1;y<=ty;y++)
	{
		i=sb*rr/100;
		eb=sb+i;
		printf("%-10d%-20.2lf%-20.2lf%-20.2lf\n",y,sb,i,eb);
		sb=eb+ac;
	}
}