#include<iostream>
#include<conio.h>
#include<process.h>
using namespace std;
#define MAXC 10

class spm
{
public:  int r,c,val;
 public:
  void read_sm(spm *,int,int);
  void transpose(spm *,spm *);
  void ftranspose(spm *,spm *);
  void display(spm *);
};
void spm::read_sm(spm a[],int m, int n)
{
 int item;
 a[0].r=m;
 a[0].c=n;
 int k=1;
 for(int i=0;i<m;i++)
 {
  for(int j=0;j<n;j++)
  {
   cin>>item;
   if(item==0)continue;
   a[k].r=i;
   a[k].c=j;
   a[k].val=item;
   k++;
  }
 }
 a[0].val=k-1;
}

void spm::transpose(spm a[],spm b[])
{
 b[0].r=a[0].c;
 b[0].c=a[0].r;
 b[0].val=a[0].val;
 int k=1;
 for(int i=0;i<a[0].c;i++)
 {
  for(int j=1;j<=a[0].val;j++)
  {
   if(a[j].c==i)
   {
    b[k].r=a[j].c;
    b[k].c=a[j].r;
    b[k].val=a[j].val;
    k++;
   }
  }
 }
}

int main (int argc, char *argv[])
{
  //clrscr();
  spm s1[20],s2[20];
  int r,c,v,val;
  cout<<"Enter the no. of rows:\n"; cin>>r;
  cout<<"Enter the no. of cols:\n"; cin>>c;
  cout<<"Enter the no. of values:\n"; cin>>v;
  //s[0]=read_sm(r,c,v);

  //cout<<"Enter the elements of the sparse matrix:\n";
  //for(int i=1;i<=v;i++)
  //{
    //cout<<"\nrow "<<i<<": ";    cin>>r;
    //cout<<"\ncol "<<i<<": ";    cin>>c;
    //cout<<"\nvalue "<<i<<": ";    cin>>val;
    //s[i]=sparse(r,c,val);
  //}

  s1[0].transpose(s1,s2);
    cout<<"row\tcol\tvalue\n";
  for(int i=0;i<=s1[0].val;i++)
  {
    //cout<<s2[i].r<<"\t"<<s2[i].c<<"\t"<<s2[i].value<<"\n";
  }
  //getch();
  return 0;
}
