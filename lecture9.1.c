#include<stdio.h>
#include<stdlib.h>

int main()
{
    /*  
        
        && 	>	and			if(	x%2==0		&& 		y%4==0	)
        %	>	divide
        ||	>	or			if(	x%2==0	         ||		y%4==0	)
        ==	>	equal
        !=	>	not equal

    */
    int grade,midterm,final,makeup,project;

    printf("********** STUDENT GRADE SYSTEM **********\n\n");
    printf("Midterm Result      :       ");
    scanf("%d",&midterm);
    printf("Final Result        :       ");
    scanf("%d",&final);
    printf("Make-up Exam Result :       ");
    scanf("%d",&makeup);
    printf("Project Result      :       ");
    scanf("%d",&project);

    grade=(midterm+final+makeup+project)/4;

    if(grade<=40)
    {
        printf("GRADE               :       %d(FF)\n",grade);
    }
    if(grade>40 && grade<50)
    {
        printf("GRADE               :       %d(DD)\n",grade);
    }
    if(grade>=50 && grade<=65)
    {
        printf("GRADE               :       %d(CC)\n",grade);
    }
    if(grade>65 && grade<80)
    {
        printf("GRADE               :       %d(BB)\n",grade);
    }
    if(grade==80 || grade>80)
    {
        printf("GRADE               :       %d(AA)\n",grade);
    }
    return 0;
}