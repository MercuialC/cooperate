#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int a,b,c,d,jieguo,daan,i=0,j=0; 
struct fenshu
{
	int fenzi;
	int fenmu;
};
int fun(int m,int n)
{
	int t;
	while(n!=0)
	{
		t=m%n;
		m=n;
		n=t;
	}
	return m;
}
void jiafa()                         //�ӷ����� 
{
	srand(time(0));
	a=rand()%10;
	b=rand()%10;
	printf("%d+%d=",a,b);
	daan=a+b; 
	scanf("%d",&jieguo);
	if(daan==jieguo)
	{printf("��ȷ\n");
	i++;}
	else
	{printf("����\n");
	j++;}
}  
void jianfa()                         //�������� 
{
	srand(time(0));
	a=rand()%10;
	b=rand()%10;
	printf("%d-%d=",a,b);
	daan=a-b; 
	scanf("%d",&jieguo);
	if(daan==jieguo)
	{printf("��ȷ\n");
	i++;}
	else
	{printf("����\n");
	j++;}
}  
void chengfa()                       //�˷����� 
{
	srand(time(0));
	a=rand()%10;
	b=rand()%10;
	printf("%d*%d=",a,b);
	daan=a*b; 
	scanf("%d",&jieguo);
	if(daan==jieguo)
	{printf("��ȷ\n");
	i++;}
	else
	{printf("����\n");
	j++;}
}  
void chufa()                         //�������� 
{
	float h,s;
	srand(time(0));
	a=rand()%10;
	b=rand()%10;
	printf("%d��%d=",a,b);
	h=((int)(((float)a/b)*100+0.5))/100.0;
	scanf("%f",&s);
	if(h==s)
	{printf("��ȷ\n");
	i++;}
	else
	{printf("����\n");
	j++;}
}  
void fenshujiafa()                    //�����ӷ� 
{
	int q,w,e,result1,result2,qq,ww;
	struct fenshu x,y;
	srand(time(0));
	x.fenzi=rand()%10+1;
	x.fenmu=rand()%10+1;
	y.fenzi=rand()%10+1;
	y.fenmu=rand()%10+1;
	printf("%d/%d+%d/%d=",x.fenzi,x.fenmu,y.fenzi,y.fenmu); 
	q=x.fenmu*y.fenmu/fun(x.fenmu,y.fenmu);          //fenmu
	w=q/x.fenmu*x.fenzi+q/y.fenmu*y.fenzi;           //fenzi 
	e=fun(q,w);
	if(q/e==1)
	{
		result1=w/e;
		scanf("%d",&qq);
		if(qq==result1)
		{printf("��ȷ��\n");
		i++;
		}
		else
		{
			printf("����\n");
			j++;
		}
	}
	else
	{
		result1=w/e;
		result2=q/e;
		scanf("%d %d",&qq,&ww);
		if(qq==result1&&ww==result2)
		{
			printf("��ȷ��\n");
			i++; 
		}
		else
		{
			printf("����\n");
			j++;
		}
	}

}
void fenshujianfa()                   //�������� 
{
	int q,w,e,result1,result2,qq,ww;
	struct fenshu x,y;
	srand(time(0));
	x.fenzi=rand()%10+1;
	x.fenmu=rand()%10+1;
	y.fenzi=rand()%10+1;
	y.fenmu=rand()%10+1;
	printf("%d/%d-%d/%d=",x.fenzi,x.fenmu,y.fenzi,y.fenmu); 
	q=x.fenmu*y.fenmu/fun(x.fenmu,y.fenmu);          //fenmu
	w=q/x.fenmu*x.fenzi-q/y.fenmu*y.fenzi;           //fenzi 
	e=fun(q,w);
	if(q/e==1)
	{
		result1=w/e;
		scanf("%d",&qq);
		if(qq==result1)
		{printf("��ȷ��\n");
		i++;
		}
		else
		{
			printf("����\n");
			j++;
		}
	}
	else
	{
		result1=w/e;
		result2=q/e;
		scanf("%d %d",&qq,&ww);
		if(qq==result1&&ww==result2)
		{
			printf("��ȷ��\n");
			i++; 
		}
		else
		{
			printf("����\n");
			j++;
		}
	}

}
void fenshuchengfa()                    //�����˷� 
{
	int q,w,e,result1,result2,qq,ww;
	struct fenshu x,y;
	srand(time(0));
	x.fenzi=rand()%10+1;
	x.fenmu=rand()%10+1;
	y.fenzi=rand()%10+1;
	y.fenmu=rand()%10+1;
	printf("%d/%d*%d/%d=",x.fenzi,x.fenmu,y.fenzi,y.fenmu); 
	q=x.fenmu*y.fenmu;          //fenmu
	w=x.fenzi*y.fenzi;       //fenzi 
	e=fun(q,w);
	if(q/e==1)
	{
		result1=w/e;
		scanf("%d",&qq);
		if(qq==result1)
		{printf("��ȷ��\n");
		i++;
		}
		else
		{
			printf("����\n");
			j++;
		}
	}
	else
	{
		result1=w/e;
		result2=q/e;
		scanf("%d %d",&qq,&ww);
		if(qq==result1&&ww==result2)
		{
			printf("��ȷ��\n");
			i++; 
		}
		else
		{
			printf("����\n");
			j++;
		}
	}

}
void fenshuchufa()                      //�������� 
{
	int q,w,e,result1,result2,qq,ww;
	struct fenshu x,y;
	srand(time(0));
	x.fenzi=rand()%10+1;
	x.fenmu=rand()%10+1;
	y.fenzi=rand()%10+1;
	y.fenmu=rand()%10+1;
	printf("%d/%d��%d/%d=",x.fenzi,x.fenmu,y.fenzi,y.fenmu); 
	q=x.fenmu*y.fenzi;        //fenmu
	w=x.fenzi*y.fenmu;          //fenzi 
	e=fun(q,w);
	if(q/e==1)
	{
		result1=w/e;
		scanf("%d",&qq);
		if(qq==result1)
		{printf("��ȷ��\n");
		i++;
		}
		else
		{
			printf("����\n");
			j++;
		}
	}
	else
	{
		result1=w/e;
		result2=q/e;
		scanf("%d %d",&qq,&ww);
		if(qq==result1&&ww==result2)
		{
			printf("��ȷ��\n");
			i++; 
		}
		else
		{
			printf("����\n");
			j++;
		}
	}

}

