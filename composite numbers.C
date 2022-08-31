#include <stdio.h> 
int main() 
{ 
	int num; 
	int composite;//flag 
	printf("\nEnter the number:"); 
	scanf("%d",&num); 
	if(num==2||num==3||num==5||num==7) 
		composite=0; 
	else if(num%2==0) 
		composite=1; 
	else if(num%3==0) 
		composite=1; 
	else if(num%5==0) 
		composite=1; 
	else if(num%7==0) 
		composite=1; 
	else 
		composite=0; 
	(composite?printf("%d is a composite number",num):(printf("%d is not a composite number",num))); 
	return 0; 
} 

