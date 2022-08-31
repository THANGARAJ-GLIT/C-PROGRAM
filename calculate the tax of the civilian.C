#include<stdio.h>
int main(){
	float income,tax;
	char gender[100];
	int i,ans = 1;
	while(ans){
		printf("Enter the Income of the Civilian : ");
		scanf("%f",&income);
		printf("Enter the Gender of the Civilian : ");
		scanf("%s",&gender);
		for(i=0; gender[i] !='\0' ; i++){
			if(gender[i] == 'M'){
				if(income <= 0){
					printf("Enter Valid Income!!!\n\n");
				}
				else if(income>0 && income <=150000){
					printf("No Tax!!!\n\n");
				}
				else if(income>150000 && income<=300000){
					tax = income*0.1;
					printf("Tax Amount : %.2f\n\n",tax);
				}
				else if(income>300000 && income<=500000){
					tax = income*0.2;
					printf("Tax Amount : %.2f\n\n",tax);
				}
				else{
					tax = income*0.3;
					printf("Tax Amount : %.2f\n\n",tax);
				}
			}
			else if(gender[i] == 'F'){
				if(income <= 0){
					printf("Enter Valid Income!!!\n\n");
				}
				else if(income>0 && income <=150000){
					printf("No Tax!!!\n\n");
				}
				else if(income>150000 && income<=300000){
					tax = income*0.05;
					printf("Tax Amount : %.2f\n\n",tax);
				}
				else if(income>300000 && income<=500000){
					tax = income*0.15;
					printf("Tax Amount : %.2f\n\n",tax);
				}
				else{
					tax = income*0.25;
					printf("Tax Amount : %.2f\n\n",tax);
				}
			}
		}
		printf("Do you want to Continue ? ");
		scanf("%d",&ans);
		printf("\n");
	}
	return 0;    
}
