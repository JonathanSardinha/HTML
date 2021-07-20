#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
clrscr();
float a,b,r,area;
int ch;
cout<<"Menu \n1.Area of circle\n2. Area of square\nEnter your choice:";
cin>>ch;

switch(ch)
{
case 1 :
{
cout<<"\nEnter radius of circle:";
cin>>r;
area=3.14*r*r;
break;
}
case 2:
{
cout<<"\nEnter the side of the square:";
cin>>b;
area=4*b;
break;
}
default:cout<<"nWrong choice";
break;
}
cout<<"Area="<<area;
getch();
}