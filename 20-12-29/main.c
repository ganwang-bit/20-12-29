////#include <stdio.h>
////#include <stdlib.h>
////
////int main()
////{
////    printf("Hello world!\n");
////    return 0;
////}
//// #include<stdio.h>
////#define N 4
////char *Mystrcat (char *dststr, char *srcstr)
////{
////    char* p=dststr;//���ڱ���datstr���׵�ַ
////     while(*dststr!='\0')
////     dststr++;//��ָ���Ƶ�δβ
////    for(; *srcstr!='\0'; dststr++, srcstr++)
////     {
////         *dststr=*srcstr;
////     }
////     *dststr='\0';
////     return p;
////}
//// int main()
//// {
////    char c[2*N],b [N];
////     printf("����һ������:");
////     gets(c);
////     printf("������һ������:");
////     gets(b);
////     printf("%s", Mystrcat(c,b));
////     return 0;
//// }
//
//#include <stdio.h>
//#include<stdlib.h>
//#include<conio.h>
//struct person
//{
//    char ID[20];
//    char name[24];
//    char sex[5];
//    int height;
//    char position[24];
//    char place[24];
//    int score;
//    char email[24];
//    char tele[20];
//}player[24];
//int count=0;
//int menu()
//{
//    int b;
//    printf("[1] ������߲�ѯ\n[2] ������Ա��Ų�ѯ\n[3] �˳���ǰ�˵�\n��ѡ��,����ѡ��ǰ������ֺ�س�: ");
//    if(scanf("%d",&b)==1)
//        return b;
//    else
//        return 4;
//}
//void findheight()
//{
//    int height,i,flag=0;
//    printf("��������Ҫ��ѯ��Ա�����:");
//    while(1)
//    {
//        if(scanf("%d",&height)==1&&height>=0)
//        {
//            if(count==0)
//                printf("��ʾ:δ¼���κ���Ա��Ϣ\n");
//            else
//            {
//                for(i=0;i<count;i++)
//                {
//                    if(player[i].height==height)
//                    {
//                        flag=1;
//                        printf("%-20s %-20s\n","���: ",player[i].ID);
//                        printf("%-20s %-20s\n","����: ",player[i].name);
//                        printf("%-20s %-20s\n","�Ա�: ",player[i].sex);
//                        printf("%-20s %-20d\n","���: ",player[i].height);
//                        printf("%-20s %-20s\n","����: ",player[i].position);
//                        printf("%-20s %-20s\n","λ��: ",player[i].place);
//                        printf("%-20s %-20d\n","����: ",player[i].score);
//                        printf("%-20s %-20s\n","����: ",player[i].email);
//                        printf("%-20s %-20s\n\n","�绰: ",player[i].tele);
//                    }
//                }
//                if(flag==0)
//                    printf("��ʾ:δ�ҵ����Ϊ%d����Ա��Ϣ\n",height);
//            }
//            printf("��������˳���ǰ����");
//            getch();
//            break;
//        }
//        else
//        {
//            printf("��ʾ:��������Ч����:");
//        }
//    }
//}
//void findid()
//{
//    int score,i,flag=0;
//    printf("��������Ҫ��ѯ��Ա�ķ���:");
//    while(1)
//    {
//        if(scanf("%d",&score)==1&&score>=0)
//        {
//            if(count==0)
//                printf("��ʾ:δ¼���κ���Ա��Ϣ\n");
//            else
//            {
//                for(i=0;i<count;i++)
//                {
//                    if(player[i].score==score)
//                    {
//                        flag=1;
//                        printf("%-20s %-20s\n","���: ",player[i].ID);
//                        printf("%-20s %-20s\n","����: ",player[i].name);
//                        printf("%-20s %-20s\n","�Ա�: ",player[i].sex);
//                        printf("%-20s %-20d\n","���: ",player[i].height);
//                        printf("%-20s %-20s\n","����: ",player[i].position);
//                        printf("%-20s %-20s\n","λ��: ",player[i].place);
//                        printf("%-20s %-20d\n","����: ",player[i].score);
//                        printf("%-20s %-20s\n","����: ",player[i].email);
//                        printf("%-20s %-20s\n\n","�绰: ",player[i].tele);
//                    }
//                }
//                if(flag==0)
//                    printf("��ʾ:δ�ҵ�����Ϊ%d����Ա��Ϣ\n",score);
//            }
//            printf("��������˳���ǰ����");
//            getch();
//            break;
//        }
//        else
//        {
//            printf("��ʾ:��������Ч����:");
//        }
//    }
//}
//void creat()
//{
//    int choose;
//    char tmp;
//    int c=1;
//    while(c)
//    {
//        printf("[1] ��Ա��Ϣ¼��\n[2] �˳���ǰ����\n");
//        if(scanf("%d",&choose)==1)
//        {
//            switch(choose)
//            {
//            case 1:
//                while(c)
//                {
//                    if(count==24)
//                    {
//                        printf("��ʾ:��Ա��Ϣ����");
//                        c=0;
//                    }
//                    printf("��������Ա�ı��:");
//                    scanf("%s",player[count].ID);
//                    printf("��������Ա������:");
//                    scanf("%s",player[count].name);
//                    printf("��������Ա���Ա�:");
//                    scanf("%s",player[count].sex);
//                    printf("��������Ա�����:");
//                    scanf("%d",&player[count].height);
//                    printf("��������Ա�Ĺ���:");
//                    scanf("%s",player[count].position);
//                    printf("��������Ա�����ϵ�λ��:");
//                    scanf("%s",player[count].place);
//                    printf("��������Ա�ķ���:");
//                    scanf("%d",&player[count].score);
//                    printf("��������Ա������:");
//                    scanf("%s",player[count].email);
//                    printf("��������Ա�ĵ绰:");
//                    scanf("%s",player[count].tele);
//                    count++;
//                    while(getchar()!='\n');
//                    printf("¼��ɹ�\n�Ƿ��������,����������룬������ Y/y");
//                    tmp=getchar();
//                    if(tmp!='Y'&&tmp!='y')
//                        c=0;
//                }
//                break;
//            case 2:
//                c=0;
//                break;
//            default:
//                printf("��ʾһ��:������1��2֮�������\n");
//                break;
//            }
//        }
//        else
//        {
//            printf("��ʾһ��:������1��2֮�������\n");
//        }
//    }
//
//}
//int main()
//{
//    int m,c=1;
//    while ( c )
//    {
//        creat();
//        m=menu();
//        switch ( m )
//        {
//            case 1:
//                findheight();
//                system("cls");
//                break;
//            case 2:
//                findid();
//                system("cls");
//                break;
//            case 3 :
//                printf("�˳���ǰ�˵�\n");
//                c=0;
//                break;
//            default:
//                printf ("��ʾһ��:����������1��3������\n");
//                system("pause");
//                system("cls");
//                break;
//        }
//  }
//  return 0;
//}
