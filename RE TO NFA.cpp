 #include<stdio.h>
#include<string.h>
int main()
{
	char regular[20];
	int arr[20][3],i,j,len,a,b;
	for(a=0;a<20;a++)
	{
		for(b=0;b<3;b++)
		{
			arr[a][b]=0;
		}
	}
	scanf("%s",regular);
	len=strlen(regular);
	i=0;
j=1;
	while(i<len)
	{
		if(regular[i]=='a'&&regular[i+1]!='|'&&regular[i+1]!='*')
		{
			arr[j][0]=j+1;
			j++;
		}
		if(regular[i]=='b'&&regular[i+1]!='|'&&regular[i+1]!='*')
		{
			arr[j][1]=j+1;
			j++;
		}
		if(regular[i]=='e'&&regular[i+1]!='|'&&regular[i+1]!='*')
		{
			arr[j][2]=j+1;
			j++;
		}
		if(regular[i]=='a'&&regular[i+1]=='|'&&regular[i+2]=='b')
		{
			arr[j][2]=((j+1)*10)+(j+3);
			j++;
			arr[j][0]=j+1;
			j++;
			arr[j][2]=j+3;
			j++;
			arr[j][1]=j+1;
			j++;
			arr[j][2]=j+1;
			j++;
			i=i+2;
		}
		if(regular[i]=='b'&&regular[i+1]=='|'&&regular[i+2]=='a')
		{
			arr[j][2]=((j+1)*10)+(j+3);
			j++;
			arr[j][1]=j+1;
			j++;
			arr[j][2]=j+3;
			j++;
			arr[j][0]=j+1;
			j++;
			arr[j][2]=j+1;
			j++;
			i=i+2;
		}
		if(regular[i]=='a'&&regular[i+1]=='*')
		{
			arr[j][2]=((j+1)*10)+(j+3);
			j++;
			arr[j][0]=j+1;
			j++;
			arr[j][2]=((j+1)*10)+(j-1);
			j++;
		}
		if(regular[i]=='b'&&regular[i+1]=='*')
		{
			arr[j][2]=((j+1)*10)+(j+3);
			j++;
			arr[j][1]=j+1;
			j++;
			arr[j][2]=((j+1)*10)+(j-1);
			j++;
		}
		if(regular[i]==')'&&regular[i+1]=='*')
		{
			arr[0][2]=((j+1)*10)+1;
			arr[j][2]=((j+1)*10)+1;
			j++;
		}
		i++;
	}
	printf("Transition func will be : \n");
	for(i=0;i<=j;i++)
	{
		if(arr[i][0]!=0)
			printf("\n arr[%d,a]-->%d",i,arr[i][0]);
		if(arr[i][1]!=0)
			printf("\n arr[%d,b]-->%d",i,arr[i][1]);
		if(arr[i][2]!=0)
		{
			if(arr[i][2]<10)
				printf("\n arr[%d,e]-->%d",i,arr[i][2]);
			else
				printf("\n arr[%d,e]-->%d & %d",i,arr[i][2]/10,arr[i][2]%10);
		}
	}
	return 0;
}

 
