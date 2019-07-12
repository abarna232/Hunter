#include <stdio.h>

int main()
{
  int n,a[100],i,j,b[100],c=0,k=0,l,t;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
      c=0;
      for(j=i+1;j<n;j++)
      {
          if(a[i]==a[j])
          {
              c=1;
              a[j]='\0';
          }
      }
      if(c==1)
      {
          b[k]=a[i];
          k++;
      }
  }
    for(j=0;j<k;j++)
    {
        for(l=j+1;l<k;l++)
        {
            if(b[j]>b[l])
            {
                t=b[j];
                b[j]=b[l];
                b[l]=t;
            }
        }
    }
      for(i=0;i<k;i++)
      {
          if(b[i]!=0)
          printf("%d ",b[i]);
      }

    return 0;
}
