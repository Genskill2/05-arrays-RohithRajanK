/* Enter your solutions in this file */
#include <stdio.h>
//maximum

int max(int a[],int b)
{
int big=a[0];

for(int i=0;i<b;i++)
{
if(a[i]>big)
{
big=a[i];
}
}
return(big);
}

//minimum

int min(int a[],int b)
{
int small=a[0];

for(int i=0;i<b;i++)
{
if(a[i]<small)
{
small=a[i];
}
}
return(small);
}
//average

float average(int a[], int b)
{
float avg=0;
for(int i=0;i<b;i++)
{
avg=avg+a[i];
}
return(avg);
}


//mode

int mode(int a[], int b)
{
int big=a[0];

for(int i=0;i<b;i++)
{
if(a[i]>big)
{
big=a[i];
}
}
int count[big+1];
for(int j=0;j<big+1;j++)
{
count[j]=0;
for(int i=0;i<big+1;i++)
{
if(a[i]==j)
{
count[j]=count[j]+1;
}
}
}
int big1;
for(int i=0;i<big+1;i++)
{
if(count[i]>big1)
{
big1=count[i];
}
}
int value;
for(int i=0;i<big+1;i++)
{
if(count[i]==big1)
{
value=i;
break;
}
}
return(value);





//prime factor
int factors(int n, int f[])
{
	
	int r=n,p=0,i=2;
	while(r!=1)
	{
		int flag=0;
		for(int j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				flag=1;
				break;
			}
				
		}
		if (flag==0)
		{
			while(r%i==0)
			{
				r=r/i;
				f[p]=i;
				p++;
			}
				
			
		}
		i++;
	}
	//return f;
	return p;
}
