#include<conio.h>
#include<stdio.h>
int main()
{
int p,r;
int i,j,var=0;
int avail[100];
int alloc[100][100],max[100][100],need[100][100];

printf("\nEnter number of process :");
scanf("%d",&p);
printf("\nEnter the no of resources : ");
scanf("%d",&r);
 
printf("\nEnter the allocated Resources :\n");
for(i=0;i<p;i++)
{
printf("p[%d] :\n",i);          
for(j=0;j<r;j++)
{
scanf("%d",&alloc[i][j]);
}
}

printf("\nEnter the maximum Resources\n");
for(i=0;i<p;i++)
{
printf("p[%d] :\n",i);
for(j=0;j<r;j++)
{
scanf("%d",&max[i][j]);
}
}

printf("\nEnter the Avilabe Resources :\n");
for(i=0;i<r;i++)
{  
printf("R[%d] : ",i);
scanf("%d",&avail[i]);
}


printf("\n");
printf("\nPROCESS  \t  NEED RESOURCE\n");
printf("\n\t");
for(j=0;j<r;j++)
{
printf("\tR[%d]",j);
}



for(i=0;i<p;i++)
{
printf("\np[%d]\t",i) ;
for(j=0;j<r;j++)
{
need[i][j]=max[i][j]-alloc[i][j];
printf("\t%d",need[i][j]);
}
}


printf("\n\n");
for(i=0;i<p;i++)
{  
for(j=0;j<r;j++)
{
if(need[i][j]<=avail[j])
{
var=1;
}
else
var=0;
}
}
if(var==0)
{
printf("The System is in Unsafe State");
}
else
printf("The System is in safe State");
}
