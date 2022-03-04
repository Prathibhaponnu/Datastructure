#include<stdio.h>
#include<conio.h>
void main()
{

    int a[10],b[10],c[20],i=0,j=0,k=0,m,n;
    printf("Enter the size of the first array:");
    scanf("%d",&m);
    printf("Enter the elements of the first array:");
    for(i=0;i<m;i++)
    {

        scanf("%d",&a[i]);
    }
    printf("Enter the size of the second array:");
    scanf("%d",&n);
    printf("Enter the elements of the second array:");
    for(j=0;j<n;j++)
    {
        scanf("%d",&b[j]);
    }
    i=0;
    j=0;
    while((i<m)&&(j<n))
    {
        if(a[i]<=b[j])
         {

             c[k]=a[i];
             i++;
         }
         else{
            c[k]=b[j];
            j++;
         }
         k++;
    }
    while(i<m){
        c[k]=a[i];
        i++;
        k++;
    }
    while(j<n)
    {
        c[k]=b[j];
        j++;
        k++;
    }
    printf("The first array is\n");
    for(i=0;i<m;i++)
    {
        printf("%d",a[i]);
        printf("\t\n");
    }
    printf("The second array is\n");
    for(j=0;j<n;j++)
    {

        printf("%d",b[j]);
        printf("\t\n");
    }
    printf("merged array\n");
    for(i=0;i<m+n;i++)
    {

        printf("%d",c[i]);
        printf("\t\n");
    }
    getch();
}
