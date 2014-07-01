#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
int arr[100][100],row[100],col[100];
 int i,j,r,c,result,t1,t2,rc=0,cc=0,count=0;
printf("\n Enter the number of rows:");
scanf("%d",&r);
printf("\n Enter the number of columns:");
scanf("%d",&c);
printf("\n Enter Binary elements :\n");
for(i=1;i<=r;i++)
{
for(j=1;j<=c;j++)
{
printf("\n Element[%d][%d]=",i,j);
scanf("%d",&arr[i][j]);
}
}

printf("\n\n The Input Matrix: \n");

for(i=1;i<=r;i++)
{
for(j=1;j<=c;j++)
{
printf("%d\t",arr[i][j]);
}
printf("\n");
}

for(i=1;i<=r;i++)
{
for(j=1;j<=c;j++)
{
if(arr[i][j]==1)
{ 

	rc=rc+i;        //sums the row indices of cells which contains a '1'
	cc=cc+j;
	count++;        //sums the column indices of cells which contains a '1'
	row[count]=i;
	col[count]=j;   //storing row and column indices of such cell in separate 'row' and 'col' arrays for later use
}
}
}



rc=(int)((rc/count)+0.5);    //calculating average of row and column indices to obtain the row and column index of CG of the matrix
cc=(int)((cc/count)+0.5);      

printf("\n\n The C.G of the matrix is at Index[%d][%d]",rc,cc);

for(i=1;i<=count;i++)
{
	t1=pow((rc-row[i]),2);
	t2=pow((cc-col[i]),2);
	result=(int)((sqrt(t1+t2))+0.5);   //calculation of equivalent distance of each cell containing a '1' from CG 
	t1=row[i];
	t2=col[i];
	arr[t1][t2]=result;                //replacing the cell value of such cells with the equivalent distance
}

printf("\n\n The Euivalent Distance from C.G of the matrix is replaced as cell values in the matrix below :\n\n");

for(i=1;i<=r;i++)
{
for(j=1;j<=c;j++)
{
printf("%d\t",arr[i][j]);
}
printf("\n");
}

getch();
}
