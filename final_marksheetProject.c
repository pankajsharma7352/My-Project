#include<stdio.h>
#include<conio.h>
#include<string.h>
  struct mark_sheet{
               char name[200],dob[200],schl[200];
               long int rollno;
               int marks[10];
               int total,y;
               float perc;
               char rem[10];
               char div[20];
               }students[100];

  int main(){
            int a,b,n,flag=1;
            char ch;
            printf("How many students :");
            scanf("%d",&n);
            for(a=1;a<=n;++a){
            printf("\nEnter the details of %d students : ", n-a+1);
            printf("\nEnter student  %d  Name : ", a);
            scanf("%s", students[a].name);
            printf("\nEnter student %d Roll Number : ", a);
            scanf("%ld", &students[a].rollno);
              printf("\nEnter Date of Birth  %d : ", a);
            scanf("%s", students[a].dob);

            students[a].total=0;
            printf("\nEnter the Marks of English,Hindi,Physics,Chemistry,Mathematics\n");
            for(b=1;b<=5;++b){
            printf("\nEnter the mark of subject-%d :  ", b);
            scanf("%d", &students[a].marks[b]);
            students[a].total += students[a].marks[b];
            if(students[a].marks[b]<=33)
            flag=0;
            }
            students[a].perc = (float)(students[a].total)/5.0;
            if((students[a].perc>=75)&&(flag==1))
            strcpy(students[a].div,"Honours");
            else
            if((students[a].perc>=60)&&(flag==1))
            strcpy(students[a].div,"First");
            else
            if((students[a].perc>=50)&&(flag==1))
            strcpy(students[a].div,"Second");
            else
            if((students[a].perc>=33)&&(flag==1))
            strcpy(students[a].div,"Third");
            if(flag==1)
            strcpy(students[a].rem,"Pass");
            else
            strcpy(students[a].rem,"Fail");
            flag=1;
            }
            for(a=1;a<=n;++a){
 	printf("\n===========================================================================");
	printf("\n               BIHAR SCHOOL EXAMINATION BOARD PATNA,BIHAR         ");
	printf("\n===========================================================================");
            printf("\nName of Student : %s", students[a].name);
            printf("\t\t\t Roll No : %ld", students[a].rollno);
            printf("\nDate of Birth  : %s", students[a].dob);
            printf("\t\t\t School Name : P H S School, Bhore");
        printf("\n________________________________________________________________________\n");
       	printf("Subject \t Max \t\t Min \t\t Obt.Marks\n");
    	printf("==========================================================================\n");
			for(b=1;b<=5;b++){
        printf("\nSubject %d      \t 100      \t 33       \t %d", b,students[a].marks[b]);
        if(students[a].marks[b]<=33)
	    printf(" F");    
			}
        printf("\n___________________________________________________________________________\n");
            printf("\n\t\t\t\t\t Total Marks : %d", students[a].total);
            printf("\n\t\t\t\t\t Division : %s", students[a].div);
            printf("\nIssue Date:20-02-2022\t\t\t Percentage : %5.2f", students[a].perc);
            printf("\n\t\t\t\t\t Result : %s", students[a].rem);
         printf("\n============================================================================\n");
            printf("\n\n\n\t\t\t\t Press Y for continue . . . ");
            ch = getche();
            //if((ch=="y")||(ch=="Y"))
            continue;
            }
            return(0);
            }
