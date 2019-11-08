#include<stdio.h>
struct naga(struct A obj);
struct A
{
int a;
};
int main()
{
struct A obj,obj2;
printf("enter data..\n");
scanf("%d",&obj.a);
obj2=naga(obj);
printf("struc %d\n",obj2.a);

}
struct naga(struct  obj)
{
int a=20;
obj.a=obj.a+a;
return obj;
}
