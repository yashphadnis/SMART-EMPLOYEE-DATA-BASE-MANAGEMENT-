#include<stdio.h>
struct student {
    char name [20];
    int age ;
    float salary ;
    int ref;
};
int main(){
    int n,r,q;
    printf("enter how many employees are there in the company:");
    scanf("%d",&n);
    printf("--------------------------------------------------\n");
    struct student s[100];
    for(int i=1;i<=n;i++){ 
        printf("Enter information for employee no :%d\n",i);
        printf("Name:");
        scanf("%s",&s[i].name);
        printf ("Age:");
        scanf("%d",&s[i].age);
        printf("Overall salary :");
        scanf("%f",&s[i].salary);
        printf("employee ref no. :");
        scanf("%d",&s[i].ref);
        printf("\n------------------------------------------------------\n");}
        printf ("The data for the employees have been saved successfully\n");
        printf("--------------------------------------------------------\n");
        printf("pls enter the Refrence number of employee you want information for ");
        scanf("%d",&q);
        for(r=1;r<=n;r++){
            if(s[r].ref==q){
                printf("The information for the Refrence no.%d\n",s[r].ref);
                printf("Name:%s\n",s[r].name);
                printf("Age:%d\n",s[r].age);
                printf("Overall salary :%f\n",s[r].salary);
            }
        }
      
        
    return 0;
}
