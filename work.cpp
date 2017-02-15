#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
#include<windows.h>
int a,b,c,d,jieguo,daan,i=0,j=0; 
bool english=0; 
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
void jiafa()                         //加法函数 
{
	srand(time(0));
	a=rand()%10;
	b=rand()%10;
	printf("%d+%d=",a,b);
	daan=a+b; 
	scanf("%d",&jieguo);
	if(daan==jieguo)
	{if(english==0)
	{
		printf("正确！\n");
	}
	else
	{
		printf("RIGHT!\n");
	}
	i++;}
	else
	{if(english==0)
	{
		printf("错误！\n");
	}
	else
	{
		printf("WRONG!\n");
	}
	j++;}
}  
void jianfa()                         //减法函数 
{
	srand(time(0));
	a=rand()%10;
	b=rand()%10;
	printf("%d-%d=",a,b);
	daan=a-b; 
	scanf("%d",&jieguo);
	if(daan==jieguo)
	{if(english==0)
	{
		printf("正确！\n");
	}
	else
	{
		printf("RIGHT!\n");
	}
	i++;}
	else
	{if(english==0)
	{
		printf("错误！\n");
	}
	else
	{
		printf("WRONG!\n");
	}
	j++;}
}  
void chengfa()                       //乘法函数 
{
	srand(time(0));
	a=rand()%10;
	b=rand()%10;
	printf("%d*%d=",a,b);
	daan=a*b; 
	scanf("%d",&jieguo);
	if(daan==jieguo)
	{if(english==0)
	{
		printf("正确！\n");
	}
	else
	{
		printf("RIGHT!\n");
	}
	i++;}
	else
	{if(english==0)
	{
		printf("错误！\n");
	}
	else
	{
		printf("WRONG!\n");
	}
	j++;}
}  
void chufa()                         //除法函数 
{
	float h,s;
	srand(time(0));
	a=rand()%10;
	b=rand()%10;
	printf("%d÷%d=",a,b);
	h=((int)(((float)a/b)*100+0.5))/100.0;
	scanf("%f",&s);
	if(h==s)
	{if(english==0)
	{
		printf("正确！\n");
	}
	else
	{
		printf("RIGHT!\n");
	}
	i++;}
	else
	{if(english==0)
	{
		printf("错误！\n");
	}
	else
	{
		printf("WRONG!\n");
	}
	j++;}
}  
void hunhe1()                      //混合运算模板1 
{
	srand(time(0));
	a=rand()%10;
	b=rand()%10;
	c=rand()%10;
	d=rand()%10;
	printf("(%d+%d)*(%d-%d)=",a,b,c,d);
	daan=(a+b)*(c-d); 
	scanf("%d",&jieguo);
	if(daan==jieguo)
	{if(english==0)
	{
		printf("正确！\n");
	}
	else
	{
		printf("RIGHT!\n");
	}
	i++;}
	else
	{if(english==0)
	{
		printf("错误！\n");
	}
	else
	{
		printf("WRONG!\n");
	}
	j++;}
}  
void hunhe2()                       //混合运算模板2 
{
	srand(time(0));
	a=rand()%10;
	b=rand()%10;
	c=rand()%10;
	d=rand()%10;
	printf("(%d+%d)-(%d-%d)=",a,b,c,d);
	daan=(a+b)-(c-d); 
	scanf("%d",&jieguo);
	if(daan==jieguo)
	{if(english==0)
	{
		printf("正确！\n");
	}
	else
	{
		printf("RIGHT!\n");
	}
	i++;}
	else
	{if(english==0)
	{
		printf("错误！\n");
	}
	else
	{
		printf("WRONG!\n");
	}
	j++;}
}  
void hunhe3()                         //混合运算模板3 
{
	srand(time(0));
	a=rand()%10;
	b=rand()%10;
	c=rand()%10;
	printf("%d+%d*%d=",a,b,c);
	daan=a+b*c; 
	scanf("%d",&jieguo);
	if(daan==jieguo)
	{if(english==0)
	{
		printf("正确！\n");
	}
	else
	{
		printf("RIGHT!\n");
	}
	i++;}
	else
	{if(english==0)
	{
		printf("错误！\n");
	}
	else
	{
		printf("WRONG!\n");
	}
	j++;} 
}  
void hunhe4()                    //混合运算模板4 
{
	srand(time(0));
	a=rand()%10;
	b=rand()%10;
	c=rand()%10;
	printf("%d+%d-%d=",a,b,c);
	daan=a+b-c; 
	scanf("%d",&jieguo);
	if(daan==jieguo)
	{if(english==0)
	{
		printf("正确！\n");
	}
	else
	{
		printf("RIGHT!\n");
	}
	i++;}
	else
	{if(english==0)
	{
		printf("错误！\n");
	}
	else
	{
		printf("WRONG!\n");
	}
	j++;}
}  
void fenshujiafa()                    //分数加法 
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
		{if(english==0)
	{
		printf("正确！\n");
	}
	else
	{
		printf("RIGHT!\n");
	}
		i++;
		}
		else
		{
		if(english==0)
	{
		printf("错误！\n");
	}
	else
	{
		printf("WRONG!\n");
	}
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
			if(english==0)
	{
		printf("正确！\n");
	}
	else
	{
		printf("RIGHT!\n");
	}
			i++; 
		}
		else
		{
		if(english==0)
	{
		printf("错误！\n");
	}
	else
	{
		printf("WRONG!\n");
	}
			j++;
		}
	}

}
void fenshujianfa()                   //分数减法 
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
		{if(english==0)
	{
		printf("正确！\n");
	}
	else
	{
		printf("RIGHT!\n");
	}
		i++;
		}
		else
		{
			if(english==0)
	{
		printf("错误！\n");
	}
	else
	{
		printf("WRONG!\n");
	}
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
			if(english==0)
	{
		printf("正确！\n");
	}
	else
	{
		printf("RIGHT!\n");
	}
			i++; 
		}
		else
		{
			if(english==0)
	{
		printf("错误！\n");
	}
	else
	{
		printf("WRONG!\n");
	}
			j++;
		}
	}

}
void fenshuchengfa()                    //分数乘法 
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
		{if(english==0)
	{
		printf("正确！\n");
	}
	else
	{
		printf("RIGHT!\n");
	}
		i++;
		}
		else
		{
			if(english==0)
	{
		printf("错误！\n");
	}
	else
	{
		printf("WRONG!\n");
	}
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
			if(english==0)
	{
		printf("正确！\n");
	}
	else
	{
		printf("RIGHT!\n");
	}
			i++; 
		}
		else
		{
			if(english==0)
	{
		printf("错误！\n");
	}
	else
	{
		printf("WRONG!\n");
	}
			j++;
		}
	}

}
void fenshuchufa()                      //分数除法 
{
	int q,w,e,result1,result2,qq,ww;
	struct fenshu x,y;
	srand(time(0));
	x.fenzi=rand()%10+1;
	x.fenmu=rand()%10+1;
	y.fenzi=rand()%10+1;
	y.fenmu=rand()%10+1;
	printf("%d/%d÷%d/%d=",x.fenzi,x.fenmu,y.fenzi,y.fenmu); 
	q=x.fenmu*y.fenzi;        //fenmu
	w=x.fenzi*y.fenmu;          //fenzi 
	e=fun(q,w);
	if(q/e==1)
	{
		result1=w/e;
		scanf("%d",&qq);
		if(qq==result1)
		{if(english==0)
	{
		printf("正确！\n");
	}
	else
	{
		printf("RIGHT!\n");
	}
		i++;
		}
		else
		{
			if(english==0)
	{
		printf("错误！\n");
	}
	else
	{
		printf("WRONG!\n");
	}
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
			if(english==0)
	{
		printf("正确！\n");
	}
	else
	{
		printf("RIGHT!\n");
	}
			i++; 
		}
		else
		{
			if(english==0)
	{
		printf("错误！\n");
	}
	else
	{
		printf("WRONG!\n");
	}
			j++;
		}
	}

}
int main()
{
	int e,k;
	int nSelect=MessageBox(NULL,TEXT("您好,单击确定选择中文，click cancle switch to English"),TEXT("语言设置"),MB_OKCANCEL);
	if(nSelect==IDOK)
	{
	printf("欢迎使用口算心算天天练！\n输入“e”来停止。\n说明：除法保留两位小数,分数运算依次输入分子分母中间用空格隔开。除号为'÷',分数线为'/'。\n"); 
	printf("**********************************************\n");
	for(k=0;1<4;k++)
	{
			srand(time(0));
			e=rand()%12+1;
			char o;
		switch (e)
	{
		case 1:
		jiafa();break;
		case 2:
		jianfa();break;
		case 3:
		chengfa();break;
		case 4:
		chufa();break;
		case 5:
		hunhe1();break;
		case 6:
		hunhe2();break;
		case 7:
		hunhe3();break;
		case 8:
		hunhe4();break;
		case 9:
		fenshujiafa();break;
		case 10:
		fenshujianfa();break;
		case 11:
		fenshuchengfa();break;
		case 12:
		fenshuchufa();break;
	}
	o=getchar();
	if(o=='e'){
	
		printf("**********************************************\n");
		printf("本次测试做对%d道题目\n",i);
		printf("本次测试做错%d道题目\n\n",j-1);
		printf("有志者事竟成！\n");
		break;
}
	}
	
	
	}
	else
	{
		english=1;
		printf("Welcome!\ninput“e”to stop.\n Notes:divison operation keep two places of decimal,fraction operation please input numerator than input denominator and space between them.The sign of divisor is '÷',the sign of fraction is'/'.\n"); 
		printf("**********************************************\n");
	for(k=0;1<4;k++)
	{
			srand(time(0));
			e=rand()%12+1;
			char o;
		switch (e)
	{
		case 1:
		jiafa();break;
		case 2:
		jianfa();break;
		case 3:
		chengfa();break;
		case 4:
		chufa();break;
		case 5:
		hunhe1();break;
		case 6:
		hunhe2();break;
		case 7:
		hunhe3();break;
		case 8:
		hunhe4();break;
		case 9:
		fenshujiafa();break;
		case 10:
		fenshujianfa();break;
		case 11:
		fenshuchengfa();break;
		case 12:
		fenshuchufa();break;
	}
	o=getchar();
	if(o=='e'){
	
		printf("**********************************************\n");
		printf("the number of right answer is %d in this quiz\n",i);
		printf("the number of wrong answer is %d in this quiz\n\n",j-1);
		printf("where there is a will there is a way！\n"); 
		break;
}
	}
	 
	}
	 getch();
	 return 0;  
	
 } 
