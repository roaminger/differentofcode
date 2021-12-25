#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#pragma comment(lib,"winmm.lib")
void Add(void);
void Sub(void);
void Multiply(void);
void Div(void);
void clearScreen(void);
 
int main()
{
	char c;
	int i,f;
	char UserName[6],UserName1[6],Passwd[8],Passwd1[8];
    printf("小学生数学四则运算登录系统\n");
	printf("1.注册并登录\t\n2.退出\n");
	scanf("%d",&f);
	switch(f){
	case 1:
        printf("注册开始\n输入用户名:\t");
        fflush(stdin);//清空输入缓冲区，防止第一次的回车被第二次捕捉通常是为了确保不影响后面的数据读取（例如在读完一个字符串后紧接着又要读取一个字符，此时应该先执行fflush(stdin);）。
        gets(UserName);
        printf("输入密码：\t");
        gets(Passwd);
        printf("注册成功\n");
 
        for(i=1;i<4;i++)
        {
            printf("输入用户名:\t");
            gets(UserName1);
            printf("输入密码:\t");
            gets(Passwd1);
 
            if(strcmp(UserName,UserName1)==0&&strcmp(Passwd,Passwd1)==0){
                printf("登录成功\n");
                break;
            }
            else if (i < 3) {
                printf("用户名或密码错误，请重新输入\n");
            }
            if(i==3){
                printf("用户已被锁定\n");
                exit(0);
            }
        }
        break;
    case 2:
        printf("再见\n");
        break;
    }
	while(1){
        clearScreen();
		system("color 40");
 
		c=getchar();
		//getchar();//假读
		switch(c){
			case 'A':
			case 'a':Add();break;
			case 'B':
			case 'b':Sub();break;
			case 'C':
			case 'c':Multiply();break;
			case 'D':
			case 'd':Div();break;
			case 'E':
			case 'e':
				return 0;
			default:printf("请重新选择:\n");
		}
	} // end of while(1)
} //end of main()
 
void clearScreen(void){
    system("cls");//清屏，clean，s(屏幕)
    printf("小学生四则运算程序\n");
    printf("##################\n");
    printf("#        A########\n");
    printf("#        B########\n");
    printf("#        C########\n");
    printf("#        D########\n");
    printf("#        E########\n");
    printf("##################\n");
    printf("\n\n请输入相应选项的前面的字母(A-E)\n");
}
 
void Add(void){
	int a,b,i,sum;
	system("cls");
	srand(( int )time( 0 ));//随机种子
	for( i = 1; i <= 10; i ++ ){
		a = rand() % 10;//随机数是1到10以内的（1到100：%100；1到20的：(+10)%10）
		b = rand() % 10;
		printf( "%d+%d=", a, b );
		scanf("%d", &sum );
		if( sum == a + b ){
			printf("回答正确!\n");
		}
		else
			printf("回答错误!\n");
 
	}//end of for()
} //end of jiafa()
 
void Sub( void )
{
   	int a,b,i,ca,c=0,d=0;
	system("cls");
    srand(( int )time( 0 ));
	while( i <= 10 ){
	    a = rand() % 10;
        b = rand() % 10;
        if ( a < b )
            continue;
        else {
            printf( "%d-%d=", a, b );
            scanf( "%d", &ca );
        }
        if ( ca == a - b ){
            printf("回答正确!\n");c++;
        }
        else{ 
			printf("回答错误!\n");d++;
		}
		i=c+d;
    }
}
void Multiply( void ){
	int a,b,i,ji;
	system( "cls" );
	srand(( int )time( 0 ));
	for ( i = 1; i <= 10; i++ ){
        a = rand() % 10;
        b = rand() % 10;
        printf( "%d*%d=", a, b );
        scanf( "%d", &ji );
        if( ji == a * b ){
            printf( "回答正确!\n" );
        }else
            printf( "回答错误!\n" );
    }
}
 
void Div( void ){
	int a,b,i,shang,c=0,d=0;
	system( "cls" );
    srand(( int )time( 0 ));
	while(i<=10){
        a = rand() % 10;
        b = rand() % 10;
        if( b==0 || a<b || a%b != 0 )
            continue;
		else{
            printf( "%d/%d=", a, b );
            scanf( "%d", &shang );
        }
        if( shang == a / b ){
			 printf("回答正确!\n");c++;
        }else{
            printf("回答错误!\n");d++;
        }
        i=c+d;
	} //end of while(i<=10)
}
