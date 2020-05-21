#include<stdio.h>
#include<conio.h>
main()
{
// Code by Anonymous
 printf("\n\t\t // Code by Anonymous");
int cp,sp,lp;

printf("\n\n \t Entre Cost price : ");
scanf("%d", &cp);
printf("\n\t Entre Selling Price :");
scanf("%d", &sp);

if(sp > cp)
{
	lp=sp-cp;
	printf("\n\t Profit = %d ", lp);
}
if(cp > sp)
{
	lp=cp-sp;
	printf("\n\t Loss = %d", lp);
}
getch();
}
