#include<iostream.h>
#include<conio.h>
class student
{
public:
int id;
char name;
void insert (int i,char n)
  {
    id =i;
    name=n;
   }
   void display()
   {
   cout<<id<<" " <<name<<endl;
   }
  };
  int main (void)
  {
  student s1;
  student s2;
  s1.insert(201,'X');
  s2.insert(202,'Y');
  s1.display();
  s2.display();
  getch();
}