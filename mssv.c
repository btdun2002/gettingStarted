#include <stdio.h>
main ()
	{int	n,mssv[8];
	int	i;
	scanf("%d",&n);
	for (i=7;i>=0;i--)
	{mssv[i] = n/pow(10,i);
	n = n-mssv[i]*pow(10,i);}
	for (i=7;i>=0;i--)
	{switch (mssv[i]) {
	case 0:
		{printf("khong");
		break;}
	case 1:
		{printf("mot");
		break;}
	case 2:
		{printf("hai");
		break;}
	case 3:
		{printf("ba");
		break;}
	case 4:
		{printf("bon");
		break;}
	case 5:
		{printf("nam");
		break;}
	case 6:
		{printf("sau");
		break;}
	case 7:
		{printf("bay");
		break;}
	case 8:
		{printf("tam");
		break;}
	case 9:
		{printf("chin");
		break;}
	}
		printf(" ");
	}
	}
