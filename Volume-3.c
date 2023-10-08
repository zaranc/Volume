#include<stdio.h>
enum week
{
	sunday,monday,tuseday,wednesday,thursday,friday,saturday
};
main()
{
	char n;
	printf("enter any value of n:");
	scanf("%c",&n);
    switch(n)
    {
    	case'S':
    		printf("%d",sunday);
    		break;
    	case'M':
    		printf("%d",monday);
    		break;
		case't':
    		printf("%d",tuseday);
    		break;
		case'W':
    		printf("%d",wednesday);
    		break;
		case'T':
    		printf("%d",thursday);
    		break;
	    case'F':
    		printf("%d",friday);
    		break;
    	case's':
    		printf("%d",saturday);
    		break;
    }
}
