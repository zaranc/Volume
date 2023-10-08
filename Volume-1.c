#include<stdio.h>

struct distance{
	int inch;
	int feet;
};

main()
{
	struct distance d1,d2,d3;
	
	printf("Enter Feet 1 =");
	scanf("%d",&d1.feet);
	printf("Enter Inch 1 =");
	scanf("%d",&d1.inch);
	printf("Enter Feet 2 =");
	scanf("%d",&d2.feet);
	printf("Enter Inch 2 =");
	scanf("%d",&d2.inch);
	
	d3.feet = d1.feet + d2.feet;
	d3.inch = d1.inch + d2.inch;
	
	while(d3.inch>=12)
	{
		d3.feet++;
		d3.inch-=12;
	}
	
	printf("Total Feet = %d\n",d3.feet);
	printf("Total Inch = %d\n",d3.inch);
}
