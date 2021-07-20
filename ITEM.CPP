#include<iostream.h>
#include<conio.h>
class item
{
private:
int a,b;
public:
void getData(int x,int y)
{
a=x;
b=y;
}
void putData()
{
cout<<"The value of a is:"<<a<<endl;
cout<<"The value of b is:"<<b<<endl;
}
};
int main()
{
int x,y;
item i;
cout<<"Enter two numbers:"<<endl;
cin>>x>>y;
i.getData(x,y);
i.putData();
return 0;
}
