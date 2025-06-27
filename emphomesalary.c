#include<stdio.h>
int main()
{
    int empID;
    float takehomesalary,basicsalary,houserent,dearnessallowances,professionaltax;

    printf("enter employee id");
    scanf("%d",&empID);

    printf("enter basic salary");
    scanf("%f",&basicsalary);

    houserent=0.10*basicsalary;
    dearnessallowances=0.30*basicsalary;
    professionaltax=0.05*basicsalary;

    takehomesalary=basicsalary+houserent+dearnessallowances-professionaltax;

    printf("empolyee id is :%d",empID);
    printf("basic salary is :%.2f",basicsalary);
    printf("houserent is :%.2f",houserent);
    printf("dearnessallowances is :%.2f",dearnessallowances);
    printf("professional tax is :%.2f",professionaltax);
    printf("takehomesalary is: %.2f",takehomesalary);

    return 0;
}
