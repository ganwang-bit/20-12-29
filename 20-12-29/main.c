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
////    char* p=dststr;//用于保存datstr的首地址
////     while(*dststr!='\0')
////     dststr++;//将指针移到未尾
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
////     printf("输入一个数组:");
////     gets(c);
////     printf("输入另一个数组:");
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
//    printf("[1] 按照身高查询\n[2] 按照球员编号查询\n[3] 退出当前菜单\n请选择,输入选项前面的数字后回车: ");
//    if(scanf("%d",&b)==1)
//        return b;
//    else
//        return 4;
//}
//void findheight()
//{
//    int height,i,flag=0;
//    printf("请输入需要查询球员的身高:");
//    while(1)
//    {
//        if(scanf("%d",&height)==1&&height>=0)
//        {
//            if(count==0)
//                printf("提示:未录入任何球员信息\n");
//            else
//            {
//                for(i=0;i<count;i++)
//                {
//                    if(player[i].height==height)
//                    {
//                        flag=1;
//                        printf("%-20s %-20s\n","编号: ",player[i].ID);
//                        printf("%-20s %-20s\n","姓名: ",player[i].name);
//                        printf("%-20s %-20s\n","性别: ",player[i].sex);
//                        printf("%-20s %-20d\n","身高: ",player[i].height);
//                        printf("%-20s %-20s\n","国籍: ",player[i].position);
//                        printf("%-20s %-20s\n","位置: ",player[i].place);
//                        printf("%-20s %-20d\n","分数: ",player[i].score);
//                        printf("%-20s %-20s\n","邮箱: ",player[i].email);
//                        printf("%-20s %-20s\n\n","电话: ",player[i].tele);
//                    }
//                }
//                if(flag==0)
//                    printf("提示:未找到身高为%d的球员信息\n",height);
//            }
//            printf("按任意键退出当前界面");
//            getch();
//            break;
//        }
//        else
//        {
//            printf("提示:请输入有效数据:");
//        }
//    }
//}
//void findid()
//{
//    int score,i,flag=0;
//    printf("请输入需要查询球员的分数:");
//    while(1)
//    {
//        if(scanf("%d",&score)==1&&score>=0)
//        {
//            if(count==0)
//                printf("提示:未录入任何球员信息\n");
//            else
//            {
//                for(i=0;i<count;i++)
//                {
//                    if(player[i].score==score)
//                    {
//                        flag=1;
//                        printf("%-20s %-20s\n","编号: ",player[i].ID);
//                        printf("%-20s %-20s\n","姓名: ",player[i].name);
//                        printf("%-20s %-20s\n","性别: ",player[i].sex);
//                        printf("%-20s %-20d\n","身高: ",player[i].height);
//                        printf("%-20s %-20s\n","国籍: ",player[i].position);
//                        printf("%-20s %-20s\n","位置: ",player[i].place);
//                        printf("%-20s %-20d\n","分数: ",player[i].score);
//                        printf("%-20s %-20s\n","邮箱: ",player[i].email);
//                        printf("%-20s %-20s\n\n","电话: ",player[i].tele);
//                    }
//                }
//                if(flag==0)
//                    printf("提示:未找到分数为%d的球员信息\n",score);
//            }
//            printf("按任意键退出当前界面");
//            getch();
//            break;
//        }
//        else
//        {
//            printf("提示:请输入有效数据:");
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
//        printf("[1] 球员信息录入\n[2] 退出当前界面\n");
//        if(scanf("%d",&choose)==1)
//        {
//            switch(choose)
//            {
//            case 1:
//                while(c)
//                {
//                    if(count==24)
//                    {
//                        printf("提示:球员信息已满");
//                        c=0;
//                    }
//                    printf("请输入球员的编号:");
//                    scanf("%s",player[count].ID);
//                    printf("请输入球员的姓名:");
//                    scanf("%s",player[count].name);
//                    printf("请输入球员的性别:");
//                    scanf("%s",player[count].sex);
//                    printf("请输入球员的身高:");
//                    scanf("%d",&player[count].height);
//                    printf("请输入球员的国籍:");
//                    scanf("%s",player[count].position);
//                    printf("请输入球员的球场上的位置:");
//                    scanf("%s",player[count].place);
//                    printf("请输入球员的分数:");
//                    scanf("%d",&player[count].score);
//                    printf("请输入球员的邮箱:");
//                    scanf("%s",player[count].email);
//                    printf("请输入球员的电话:");
//                    scanf("%s",player[count].tele);
//                    count++;
//                    while(getchar()!='\n');
//                    printf("录入成功\n是否继续输入,如想继续输入，请输入 Y/y");
//                    tmp=getchar();
//                    if(tmp!='Y'&&tmp!='y')
//                        c=0;
//                }
//                break;
//            case 2:
//                c=0;
//                break;
//            default:
//                printf("提示一下:请输入1到2之间的数字\n");
//                break;
//            }
//        }
//        else
//        {
//            printf("提示一下:请输入1到2之间的数字\n");
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
//                printf("退出当前菜单\n");
//                c=0;
//                break;
//            default:
//                printf ("提示一下:请重新输入1到3的数字\n");
//                system("pause");
//                system("cls");
//                break;
//        }
//  }
//  return 0;
//}
