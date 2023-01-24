#include<stdio.h>
#include<conio.h>
#include<string.h>
  struct mark_sheet{
               char name[200],dob[200],schl[200];
               long int rollno;
               int eng,hn,phy,chem,math;
               int total,y;
               float perc;
               char rem[10];
               char div[20];
               }students[100];

  int main(){
            int a,b,n,flag=1;
            char ch;
            
            printf("\nEnter the details of students : ");
            printf("\nEnter student Name : ");
            scanf("%s", students[a].name);
            printf("\nEnter student Roll Number : ");
            scanf("%ld", &students[a].rollno);
              printf("\nEnter Date of Birth : ", a);
            scanf("%s", students[a].dob);

            students[a].total=0;
            {
            printf("\nEnter the mark of Enlish: ");
            scanf("%d", &students[a].eng);
            printf("\nEnter the mark of Hindi : ");
            scanf("%d", &students[a].hn);
            printf("\nEnter the mark of Physics : ");
            scanf("%d", &students[a].phy);
            printf("\nEnter the mark of Chemistry : ");
            scanf("%d", &students[a].chem);
            printf("\nEnter the mark of Mathematics : ");
            scanf("%d", &students[a].math);
            
            students[a].total = students[a].eng+students[a].hn+students[a].phy+students[a].chem+students[a].math;
            if(students[a].total<40)
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
            if((students[a].perc>=40)&&(flag==1))
            strcpy(students[a].div,"Third");
            if(flag==1)
            strcpy(students[a].rem,"Pass");
            else
            strcpy(students[a].rem,"Fail");
            flag=1;
            
 	printf("\n=======================================================================");
	printf("\n           BIHAR SCHOOL EXAMINATION BOARD PATNA,BIHAR         ");
	printf("\n=======================================================================");
            printf("\nName of Student : %s", students[a].name);
            printf("\t\t\t Roll No : %ld", students[a].rollno);
            printf("\nDate of Birth  : %s", students[a].dob);
            printf("\t\t\t School Name : P H S School, Bhore");
        printf("\n_____________________________________________________________________\n");
       	printf("Subject \t Max \t\t Min \t\t Obt.Marks\n");
    	printf("=====================================================================\n");
		
        printf("\nEnglish      \t 100      \t 33       \t %d",students[a].eng);
		if (students[a].eng<=33) printf(" F");
        printf("\nHindi      \t 100      \t 33       \t %d",students[a].hn);
        if (students[a].hn<=33) printf(" F");
        printf("\nPhysics      \t 100      \t 33       \t %d",students[a].phy);
        if (students[a].phy<=33) printf(" F");
        printf("\nChemistry      \t 100      \t 33       \t %d",students[a].chem);
        if (students[a].chem<=33) printf(" F");
        printf("\nMathematics      100      \t 33       \t %d",students[a].math);
        if (students[a].math<=33) printf(" F");
            
            printf("\n___________________________________________________________________\n");
            printf("\n\t\t\t\t\t Total Marks : %d", students[a].total);
            printf("\n\t\t\t\t\t Division : %s", students[a].div);
            printf("\nIssue Date:22-02-2022\t\t\t Percentage : %5.2f", students[a].perc);
            printf("\n\t\t\t\t\t Result : %s");
            
         printf("\n=====================================================================\n");
            printf("\n\n\n\t\t\t\t Press Y for continue . . . ");
            ch = getche();
            //if((ch=="y")||(ch=="Y"))
            //
			//continue;
            
            return(0);
            }
