#include<stdio.h>
#include<conio.h>
void main()
{
    int set1[10],set2[10],set3[20],n1,n2,ch,i,j,k,p,flag;
    printf("Enter the size of the set1:");
    scanf("%d",&n1);
    printf("Enter the elements of the set1:");
    for(i=0;i<n1;i++)
    {
        scanf("%d",&set1[i]);
    }
    printf("Enter the size of the set2:");
    scanf("%d",&n2);
    printf("Enter the elements of the set2:");
    for(i=0;i<n2;i++)
    {
        scanf("%d",&set2[i]);
    }
    do
    {
        printf("\n SET OPERATIONS");
        printf("\n 1.UNION");
        printf("\n 2.INTERSECTION");
        printf("\n 3.DIFFERENCE (SET1-SET2)");
        printf("\n 4.DIFFERENCE (SET2-SET1)");
        printf("\n 5.EXIT");
        printf("\n Enter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            k=0;
            for(i=0;i<n1;i++)
            {
                set3[k]=set1[i];
                k++;
            }
            for(i=0;i<n2;i++)
            {
                flag=1;
                for(j=0;j<n1;j++)
                {
                    if(set2[i]==set1[j])
                    {
                        flag=0;
                        break;
                    }
                }
                if(flag==1)
                {
                    set3[k]=set2[i];
                    k++;
                }
            }
            p=k;
            printf("set after union");
            for(k=0;k<p;k++)
            {
                printf("\n%d",set3[k]);
            }
            break;
        case 2:
            k=0;
            for(i=0;i<n2;i++)
            {
                flag=1;
                for(j=0;j<n1;j++)
                {
                    if(set2[i]==set1[j])
                    {
                        flag=0;
                        break;
                    }
                }
                if(flag==0)
                {
                    set3[k]=set2[i];
                    k++;
                }
            }
            p=k;
            printf("set after intersection:");
            for(k=0;k<p;k++)
            {
                printf("\n%d\t",set3[k]);
            }
            break;
        case 3:
            k=0;
            for(i=0;i<n1;i++)
            {
                flag=1;
                for(j=0;j<n2;j++)
                {
                    if(set1[i]==set2[j])
                    {
                        flag=0;
                        break;
                    }
                }
                if(flag==1)
                {
                    set3[k]=set1[i];
                    k++;
                }
            }
            p=k;
            printf("set after difference (set1-set2)");
            for(k=0;k<p;k++)
            {
                printf("\n%d\t",set3[k]);
            }
            break;
        case 4:
            k=0;
            for(i=0;i<n2;i++)
            {
                flag=1;
                for(j=0;j<n1;j++)
                {
                    if(set2[i]==set1[j])
                    {
                        flag=0;
                        break;
                    }
                }
                if(flag==1)
                {
                    set3[k]=set2[i];
                    k++;
                }
            }
            p=k;
            printf("set after difference (set2-set1)");
            for(k=0;k<p;k++)
            {
                printf("\n%d\t",set3[k]);
            }
            break;
            case5:
                break;
        }

    }while(ch!=5);
}

