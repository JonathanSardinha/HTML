#include<iostream.h>
#include<conio.h>
float circle(float r)
{
return(3.14*r*r);
}
float square(float b)
{
return(4*b);
}
int main()
{
float r,b;
int ch;
do
{
cout<<"\nMenu\n1.Area of circle\n2.Area of square\nEnter your choice:";
cin>>ch;
switch(ch)
{
case 1:
{
cout<<"\nEnter the radius of circle:";
cin>>r;
cout<<"\nArea of circle:"<<circle(r);
break;
}
case 2:
{
cout<<"\nEnter the side of the square:";
cin>>b;
cout<<"\nArea of square:"<<square(b);
break;
}
default:
cout<<"\n Invalid Choice";
}
}while(ch!=4);
return 0;
}