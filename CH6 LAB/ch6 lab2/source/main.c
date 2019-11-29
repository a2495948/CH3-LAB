#include <stdio.h>
#include <stdlib.h>

void main()
{
	typedef struct _dates
	{
		int year;
		int month;
		int day;
	}dates;

	typedef struct _order
	{
		char num[11];
		dates date;
		int amount;
	}order;

	order ord1 = { "AHK08A1024", {2008, 10,  5}, 886686688 };
	order ord2 = { "USA08A1025", {2008, 11, 12}, 1234567 };
	order ord3 = { "USA08A1028", {2008, 12, 30}, 98765432 };

	printf("              **************\n");
	printf("              *  訂單資料  *\n");
	printf("              **************\n\n");
	printf("============================================\n");
	printf(" 訂單編號        訂貨日期        訂貨金額\n");
	printf("============================================\n");
	printf("%-10s  %8d/%02d/%02d    NT$%10d\n", ord1.num, ord1.date.year, ord1.date.month, ord1.date.day, ord1.amount);
	printf("%-10s  %8d/%02d/%02d    US$%10d\n", ord2.num, ord2.date.year, ord2.date.month, ord2.date.day, ord2.amount);
	printf("%-10s  %8d/%02d/%02d    HK$%10d\n", ord3.num, ord3.date.year, ord3.date.month, ord3.date.day, ord3.amount);
	printf("\n\n");
	system("pause");
	return 0;

}