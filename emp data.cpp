#include<stdio.h>
struct employee{
    char name[30];
    int age;
    char phonenumber[10];
    int salary;
};
struct employee emp[20];
display ()//to display the employee data
{
    
    printf("Name\t");  
	printf("Age\t"); 
	printf("Phone Number\t"); 
	printf("Salary\n"); 
	for(int i=0;i<20;i++){
	  printf("%s\t",emp[i].name);
      printf("%d\t",emp[i].age);
      printf("%s\t",emp[i].phonenumber);
      printf("%d\n",emp[i].salary);     
	     
    }
	return 0;
}
	

 
int main()
{
    for(int i=0;i<20;i++){
	
       printf("\nEnter details of employee:%d\n",i+1);//to collect the information
       printf("Name:");          
	   scanf("%s",&emp[i].name);
       printf("Age:");            
	   scanf("%d",&emp[i].age);
	   printf("Phone Number:");            
	   scanf("%s",&emp[i].phonenumber);
       printf("Salary:");        
	   scanf("%d",&emp[i].salary);
    }
    display();
}
