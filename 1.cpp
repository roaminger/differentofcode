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
    printf("Сѧ����ѧ���������¼ϵͳ\n");
	printf("1.ע�Ტ��¼\t\n2.�˳�\n");
	scanf("%d",&f);
	switch(f){
	case 1:
        printf("ע�Ὺʼ\n�����û���:\t");
        fflush(stdin);//������뻺��������ֹ��һ�εĻس����ڶ��β�׽ͨ����Ϊ��ȷ����Ӱ���������ݶ�ȡ�������ڶ���һ���ַ������������Ҫ��ȡһ���ַ�����ʱӦ����ִ��fflush(stdin);����
        gets(UserName);
        printf("�������룺\t");
        gets(Passwd);
        printf("ע��ɹ�\n");
 
        for(i=1;i<4;i++)
        {
            printf("�����û���:\t");
            gets(UserName1);
            printf("��������:\t");
            gets(Passwd1);
 
            if(strcmp(UserName,UserName1)==0&&strcmp(Passwd,Passwd1)==0){
                printf("��¼�ɹ�\n");
                break;
            }
            else if (i < 3) {
                printf("�û����������������������\n");
            }
            if(i==3){
                printf("�û��ѱ�����\n");
                exit(0);
            }
        }
        break;
    case 2:
        printf("�ټ�\n");
        break;
    }
	while(1){
        clearScreen();
		system("color 40");
 
		c=getchar();
		//getchar();//�ٶ�
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
			default:printf("������ѡ��:\n");
		}
	} // end of while(1)
} //end of main()
 
void clearScreen(void){
    system("cls");//������clean��s(��Ļ)
    printf("Сѧ�������������\n");
    printf("##################\n");
    printf("#        A########\n");
    printf("#        B########\n");
    printf("#        C########\n");
    printf("#        D########\n");
    printf("#        E########\n");
    printf("##################\n");
    printf("\n\n��������Ӧѡ���ǰ�����ĸ(A-E)\n");
}
 
void Add(void){
	int a,b,i,sum;
	system("cls");
	srand(( int )time( 0 ));//�������
	for( i = 1; i <= 10; i ++ ){
		a = rand() % 10;//�������1��10���ڵģ�1��100��%100��1��20�ģ�(+10)%10��
		b = rand() % 10;
		printf( "%d+%d=", a, b );
		scanf("%d", &sum );
		if( sum == a + b ){
			printf("�ش���ȷ!\n");
		}
		else
			printf("�ش����!\n");
 
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
            printf("�ش���ȷ!\n");c++;
        }
        else{ 
			printf("�ش����!\n");d++;
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
            printf( "�ش���ȷ!\n" );
        }else
            printf( "�ش����!\n" );
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
			 printf("�ش���ȷ!\n");c++;
        }else{
            printf("�ش����!\n");d++;
        }
        i=c+d;
	} //end of while(i<=10)
}
