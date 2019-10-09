#include<iostream.h>
#include<conio.h>
void num(int x[],int n)
{
int a=0,i;
for(i=0;i<n;i++)
a=a*10+x[i];
cout<<a<<"\t";
}
/*
void change(int x[],int n)
{
int i,j,k,temp,q=0;
num(x,n);
for(k=0;k<=n-2;k++)
{
for(i=0+q;i<n-1;i++)
{
for(j=q+1;j<n-1;j++)
{
temp=x[j];
x[j]=x[j+1];
x[j+1]=temp;
}
if(i<n-2)
num(x,n);
}
q++;
}
}*/
void rec1(int[],int,int=0);
void main()
{
clrscr();
int n,i,temp,arr[10];
cout<<"Enter the no. of values available:";
cin>>n;
cout<<"enter the values\n";
for(i=0;i<n;i++)
cin>>arr[i];
cout<<"all the possible permutations are:\n";
/*
change(arr,n);
for(i=0;i<n-1;i++)
{
temp=arr[0];
arr[0]=arr[i+1];
arr[i+1]=temp;
change(arr,n);
}
temp=arr[0];
arr[0]=arr[n-1];
arr[n-1]=temp;
*/
rec1(arr,n);
getch();
}

void rec1(int x[],int n,int r)
{
int i;
for(i=r;i<n;i++)
{
if(r<n-1)
{
//cout<<"1"<<"\t";
rec1(x,n,r+1);
}//endif
else
{
//cout<<"2"<<"\t";
num(x,n);
return;
}//endelse
int temp;
for(int j=i;j<n-1;j++)
{
//cout<<"end swap j="<<j<<"\t";
temp=x[j];
x[j]=x[j+1];
x[j+1]=temp;
}//endfor2
}//endfor1
//cout<<"end rec,r="<<r<<"\t";
}//endrec1
