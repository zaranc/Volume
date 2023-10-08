#include<stdio.h>

struct Marks 
	{
		int rollno;
   		char name[30];
    	float chemmarks, mathsmarks, phymarks;
	};

int main() 
	{
		struct Marks marks[5];
    	int i;
    
    for(i=0; i<5; i++){
		printf("Student %d\n",i+1);
        printf("Enter roll no. :");
        	scanf("%d", &marks[i].rollno);
        printf("Enter name :");
        	scanf("%s",marks[i].name);
        printf("Enter Chemistry marks out of 100:");
        	scanf("%f", &marks[i].chemmarks);
        printf("Enter Maths marks out of 100 :");
        	scanf("%f", &marks[i].mathsmarks);
        printf("Enter Physics marks out of 100 :\n");
        	scanf("%f", &marks[i].phymarks);
    }
    
	for(i=0; i<5; i++)
	{
	    printf("Student %d\n",i+1);
	    float per=(marks[i].chemmarks+marks[i].mathsmarks+marks[i].phymarks)*100/300.0;
	    printf("Percentage : %f\n",per);
	}
}

