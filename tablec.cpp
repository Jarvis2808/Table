#include<stdio.h>
#include<conio.h>
main()
{
	int i,j;
	printf("Enter the numer:");
	scanf("%d", &j);
	for(i = 1 ; i <= 10 ; i++)
	{
		printf("%d X %d = %d\n", j,i,i*j);
	}
	getch();
}
