#include<stdio.h>
#include<string.h>
struct students
{
    char name[50];
    int regno;
    int tamil;
    int english;
    int maths;
    int science;
    int social;
}s[4];
void main()
{
    int i,j,ave=0,total=0,perc[5],temp=0;
    int temp1=0,reg[5];
   char name1[5][30],temp2[30];
    for(i=1;i<5;i++)
    {
        printf("Enter the student name:");
        scanf("%s",&s[i].name);
        printf("Register no:");
        scanf("%d",&s[i].regno);
        printf("Tamil:");
        scanf("%d",&s[i].tamil);
        printf("English:");
        scanf("%d",&s[i].english);
        printf("Maths:");
        scanf("%d",&s[i].maths);
        printf("science:");
        scanf("%d",&s[i].science);
        printf("social:");
        scanf("%d",&s[i].social);
    }
    for(i=1;i<5;i++)
    {

        total=s[i].tamil+s[i].english+s[i].maths+s[i].science+s[i].social;
        ave=total/5;
        perc[i]=ave;
        reg[i]=s[i].regno;
        strcpy(name1[i],s[i].name);

        printf("Percentage of students %d\n",perc[i]);
         printf("Student name %s\n",s[i].name);
        printf("Register no %d\n",s[i].regno);
        printf("\n\n");
    }

    for(i=1;i<5;i++)
    {
        for(j=i+1;j<5;j++)
      {
          if(perc[i] < perc[j])
          {
              temp=perc[i];
              perc[i]=perc[j];
              perc[j]=temp;

              temp1=reg[i];
              reg[i]=reg[j];
              reg[j]=temp1;

              strcpy(temp2,name1[i]);
              strcpy(name1[i],name1[j]);
              strcpy(name1[j],temp2);

          }
          }
      }
      printf("        Topper on the Board        ");
      printf("1st Mark:%d register no:%d name:%s\n",perc[1],reg[1],name1[1]);
      printf("2nd Mark:%d register no:%d name:%s\n",perc[2],reg[2],name1[2]);
      printf("3rd Mark:%d register no:%d name:%s\n",perc[3],reg[3],name1[3]);
      printf("4th Mark:%d register no:%d name:%s\n",perc[4],reg[4],name1[4]);

    }


