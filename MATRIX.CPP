#include<iostream.h>
#include<conio.h>
#include<math.h>
void matrix (int a[10][10],int x,int y);
int main()
{
int a[10][10],m,n,j,i;
cout<<"Enter the value of m and n:";
cin>>m>>n;
cout<<"Enter matrix elements"<<endl;
matrix(a,m,n);
cout<<"The matrix is:"<<endl;
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
cout<<a[i][j]<<"\t";
}
cout<<endl;
}
return 0;
}
void matrix(int a[10][10],int x,int y)
{
int i,j;
for(i=0;i<x;i++)
{
for(j=0;j<y;j++)
{
cin>>a[i][j];
}
}
}