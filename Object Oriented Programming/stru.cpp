# include <conio.h>
# include <stdio.h>
struct stu
{
    int rno;
    float eng,math,phy;
};
void main(void)
{
    struct stu s[100];
    int f;
    float tot,per;
    for(f=0;f<100;f++)
    {
        printf("enter student %d Rollno",f+1);
        scanf("%d",&s[f].rno);
        printf("enter student %d Eng Marks",f+1);
        scanf("%f",&s[f].eng);
        printf("enter student %d Math Marks",f+1);
        scanf("%f",&s[f].math);
        printf("enter student %d Phy Marks",f+1);
        scanf("%f",&s[f].phy);
    }

    for(f=0;f<100;f++)
    {
        printf("\n\n \t\t\t Student %d Record",f+1);
        printf("\n rno=%d",s[f].rno);
         printf("\n Eng=%f",s[f].eng);
          printf("\n math=%f",s[f].math);
           printf("\n Phy=%f",s[f].phy);
           tot=s[f].eng + s[f].math + s[f].phy;
           per=tot/300*100;
           printf("\n total obtain marks=%f",tot);
           printf("\n Per=%f",per);
    }

}
