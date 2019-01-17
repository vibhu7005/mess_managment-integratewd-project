#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<fstream>
#include <stdlib.h>
#include<ctype.h>
#include<string.h>
#include<dos.h>
#include<MMsystem.h>
using namespace std;

struct student
{
    char name[30],roll_no[30];
    int refund;
    int sr_no;
}add,update,check;

struct inputdata
{
    int stock_dal;
    int stock_panner;
    int stock_mush;
    int wast_dal;
    int wast_panner;
    int wast_mush;
    int total_dal;
    int total_panner;
    int total_mush;
    int twas_dal;
    int twas_panner;
    int twas_mush;
}add1,check1,update1;

char FEEDBACK[1000],id[100],valid[3],valid1[3],valid2[3],valid3[3],valid4[3],valid5[3],valid6[3],eat[3],FEED[3];
char validchar,arr1[3][100]={"DAAL                    30 X ","SHAHI PANNER            50 X ","MUSHROOM                45 X "},arr2[4][100]={"PLAIN                   10 X ","BUTTER NAN              15 X ","PARANTHA                20 X ","ALOO PARANTHA           30 X "},arr3[4][100]={"VANILLA                 10 X ","BUTTER SCOTH            20 X ","CHOCOLATE               30 X ","STRAWBERRY              40 X "},finalarray[5][100],aaa[4]=" = ";
char s[31]=" WELCOME TO MESS MANAGEMENT ",s1[17]="SYSYTEM PROGRAM ",username1[6]="admin",username[100],password[100],password1[11]="codewithme",pass,password2[8]="exitplz";
long long int sum=0,i,c=0,count=0,n,len,narray[10],sumarray[100],sum1,ccc=2;
static int color=1;
void special2();
void special3();
void valid_input();
void admintable();
void wannaeat();
char wantmore();
void pannel();
void login();
void hostel();
void show_show();
void choosemeal();
void finalorder();
void boundary();
void regular();
void special();
int main();
void gotoxy(int x,int y)
{
    COORD c;
    c.X=x;
    c.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
void clrscr()
{
    system("@cls||clear");
}
void show();
void enter()
{
    clrscr();
    boundary();

	int test=0;
	FILE *file;
file=fopen("refund_data.dat","a+");
FILE *file1;
file1=fopen("ffff.dat","a+");
    gotoxy(38,20);
    cout<<"Enter roll number = ";
    scanf(" ");
    scanf("%s",check.roll_no);
	while(fscanf(file,"%s %s %d",add.roll_no,add.name,&add.refund)!=EOF)
    {
        if(strcmp(check.roll_no,add.roll_no)==0)
        {
            add.refund=add.refund + 50;
        	test++;
		}
        fprintf(file1,"%s %s %d\n" ,add.roll_no,add.name,add.refund);
    }
    fclose(file);
    fclose(file1);
    remove("refund_data.dat");
	rename("ffff.dat","refund_data.dat");
    if(test==0){
    file=fopen("refund_data.dat","a+");
    gotoxy(38,22);
    cout<<"Enter student name = ";
    scanf(" ");
    scanf("%s",check.name);
    check.refund=50;

        fprintf(file,"%s %s %d\n" , check.roll_no,check.name,check.refund);
        fclose(file);
	}
        gotoxy(38,28);
		printf(" Enter more data (Y/N) = ");
        char ch;
		scanf(" ");
        scanf("%c",&ch);
        if(ch=='y' || ch=='Y')
        {
        	system("cls");
        	enter();
		}
		else
		{
			system("cls");
			show();
		}

}
void show()
{
    clrscr();
    boundary();
		FILE *file;
		int nnn=1;
file=fopen("refund_data.dat","r");
    system("cls");
    gotoxy(38,14);
    printf(" \t\tROLL NO.            NAME     \tREFUND AMT.");
     while(fscanf(file,"%s %s %d",add.roll_no,add.name,&add.refund)!=EOF)
     {
         gotoxy(38,14+nnn);
         nnn++;
         printf("%15s \t%10s  \t%6d",add.roll_no,add.name,add.refund);
     }
}
void sleep_time(int n,int x,int y)
{
    int i;
    for(i=0;i<n;i++)
    {
        gotoxy(x+i,y);
        cout<<"*";
        Sleep(50);
    }
}

void div()
{
    if(color%5==0)
        system("color F0");
    else if(color%4==0)
        system("color 0E");
    else if(color%3==0)
        system("color 4E");
    else if(color%2==0)
        system("color F0");
    else if(color%1==0)
        system("color 8F");
    else
        system("color 50");
}

void boundary()
{
    div();
    int i;
     gotoxy(20,10);
    cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2";
    for(i=0;i<23;i++)
    {
        gotoxy(20,11+i);
        cout<<"\xB2\xB2";
        gotoxy(80,11+i);
        cout<<"\xB2\xB2";
    }
    gotoxy(20,34);
    cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2";
    color++;
}

void feedback()
{
     clrscr();
        boundary();
        gotoxy(35,15);
        cout<<"ENTER YOUR FEEDBACK";
        gotoxy(39,16);
        FILE *ptr;
        ptr=fopen("feedbackdata.dat","a");
        char input[10000];
        cin.ignore();
        gets(input);
        fprintf(ptr,input);
        fprintf(ptr,"\n");
        fclose(ptr);
}
void enter_data()
{
    clrscr();
    FILE *file;
file=fopen("add_data.dat","a+");
    printf("\nEnter today stock DAAL = ");
    scanf("%d",&add1.stock_dal);
	printf("\nEnter today stock PANNER = ");
    scanf("%d",&add1.stock_panner);
    printf("\nEnter today stock MUSHROOM = ");
    scanf("%d",&add1.stock_mush);
    printf("\nEnter today WASTE DAAL = ");
    scanf("%d",&add1.wast_dal);
    printf("\nEnter today WASTE PANNER = ");
    scanf("%d",&add1.wast_panner);
    printf("\nEnter today WASTE MUSHROOM = ");
    scanf("%d",&add1.wast_mush);

   fprintf(file,"%d %d %d %d %d %d\n",add1.stock_dal,add1.stock_panner,add1.stock_mush,add1.wast_dal,add1.wast_panner,add1.wast_mush);
   fclose(file);
		printf("\n\n Enter more data (Y/N) = ");
        char ch;
		scanf(" ");
        scanf("%c",&ch);
        if(ch=='y' || ch=='Y')
        {
        	system("cls");
        	enter_data();
		}
		else
		{
			system("cls");
			show_show();
		}
}
void show_show()
{
    clrscr();
    int day=1;
            FILE *file;
file=fopen("add_data.dat","a+");
add1.total_dal=0;
add1.total_panner=0;
add1.total_mush=0;
add1.twas_dal=0;
add1.twas_panner=0;
add1.twas_mush=0;
    system("cls");
    printf("                  STOCK                                  WASTAGE           \n");
    printf("  DAY     DAL     PANNER     MUSHROOM         DAL     PANNER     MUSHROOM\n\n");
     while(fscanf(file,"%d %d %d %d %d %d\n",&add1.stock_dal,&add1.stock_panner,&add1.stock_mush,&add1.wast_dal,&add1.wast_panner,&add1.wast_mush)!=EOF)
     {
     	printf("DAY %d ",day);
         printf("%6d \t%6d \t   %6d \t   %6d    %6d    %6d\n",add1.stock_dal,add1.stock_panner,add1.stock_mush,add1.wast_dal,add1.wast_panner,add1.wast_mush);
     	day++;
     	add1.total_dal += add1.stock_dal;
     	add1.total_panner += add1.stock_panner;
     	add1.total_mush += add1.stock_mush;
     	add1.twas_dal += add1.wast_dal;
     	add1.twas_panner += add1.wast_panner;
     	add1.twas_mush += add1.wast_mush;
	}
	printf("\n\nTOTAL STOCK DAL      = %d\t\tTOTAL WASTAGE DAL      = %d\n",add1.total_dal,add1.twas_dal);
	printf("TOTAL STOCK PANNER   = %d\t\tTOTAL WASTAGE PANNER   = %d\n",add1.total_panner,add1.twas_panner);
	printf("TOTAL STOCK MUSHROOM = %d\t\tTOTAL WASTAGE MUSHROOM = %d\n",add1.total_mush,add1.twas_mush);

	gotoxy(26,26);
	system("pause");
}
void show_data()
{
    clrscr();
    FILE *file;
file=fopen("add_data.dat","a+");
    clrscr();
    boundary();
    char chch;
    gotoxy(30,17);
    cout<<"1. PRESENT MONTH";
    gotoxy(30,19);
    cout<<"2. PREVOIUS MONTH";
    gotoxy(30,21);
    cout<<"3. ONE MONTH BEFORE PREVIOUS";
    gotoxy(30,28);
    cout<<"ENTER VALID OPTION (1/2/3/0) = ";
    cin>>chch;

    if(chch=='1')
    {
        show_show();
    }
    else if(chch=='2')
    {
        clrscr();
        boundary();
        gotoxy(26,15);
    cout<<"SRNO.    "<<"FOOD           "<<"STOCK      "<<"WASTAGE     \n";
    gotoxy(26,17);
    cout<<" 1.      "<<"DAL_MAKHNI     "<<" 50kg     "<<"    3kg    \n";
	gotoxy(26,19);
	cout<<" 1.      "<<"PANNER         "<<" 40kg     "<<"    2kg    \n";
	gotoxy(26,21);
	cout<<" 1.      "<<"CHOLE          "<<" 32kg     "<<"    1kg    \n";
    }
    else if(chch=='3')
    {
        clrscr();
        boundary();
        gotoxy(26,15);
    cout<<"SRNO.    "<<"FOOD           "<<"STOCK      "<<"WASTAGE     \n";
    gotoxy(26,17);
    cout<<" 1.      "<<"DAL_MAKHNI     "<<" 10kg     "<<"    3kg    \n";
	gotoxy(26,19);
	cout<<" 1.      "<<"PANNER         "<<" 20kg     "<<"    2kg    \n";
	gotoxy(26,21);
	cout<<" 1.      "<<"CHOLE          "<<" 62kg     "<<"    1kg    \n";
    }
    else if(chch=='0')
    {
        admintable();
    }
	gotoxy(26,26);
	system("pause");
}
void add_data(){
enter_data();
        char ch;
        cin>>ch;
        if(ch=='y' || ch=='Y')
        {
        	system("cls");
        	enter_data();
		}
		else
		{
			system("cls");
			show_show();
		}

}
void admintable()
{
    clrscr();
    boundary();
    int gggg;
    gotoxy(30,15);
    cout<<"CHOOSE VALID OPTION :- ";
    gotoxy(30,17);
    cout<<"1. ADD DATA";
    gotoxy(30,19);
    cout<<"2. SHOW DATA";
    gotoxy(30,28);
    cout<<"ENTER (1/2/0) = ";
    cin>>gggg;
    if(gggg==1)
    {
        enter_data();
    }
    else if(gggg==2)
    {
        show_data();
    }
    else if(gggg==0)
    {
        login();
    }

}
void hostandday()
{

    clrscr();
    boundary();
    gotoxy(31,15);
    cout<<"*** ENTER VALID OPTION ***";
    gotoxy(28,18);
    cout<<"\xDB\xDB\xDB 1. HOSTELER(H)";
    gotoxy(28,21);
    cout<<"\xDB\xDB\xDB 2. DAY_SCHOLAR(D)";
     PlaySound(TEXT("studentmode.wav"),NULL,SND_SYNC);
    gotoxy(32,24);
    cout<<"ENTER ( H / D) : ";
    cin>>valid;
    if(valid[0]=='h' || valid[0]=='H')
    {
      hostel();

    gotoxy(32,35);
    }
    else
    {
        choosemeal();
    }
}
char wantmore4()
{
    gotoxy(28,32);
    cout<<"\xDB\xDB\xDB ENTER ( R / S) : ";
    cin>>valid4;
    return valid4[0];
}
char wantmore3()
{
    gotoxy(28,32);
    cout<<"\xDB\xDB\xDB YOU WANT TO ADD MORE : ";
    cin>>valid4;
    return valid4[0];
}
void choosemeal()
{
    clrscr();
        boundary();
        gotoxy(31,15);
    cout<<"*** CHOOSE YOUR MEAL : ***";
    gotoxy(28,18);
    cout<<"\xDB\xDB\xDB 1. REGULAR_MEAL";
    gotoxy(28,21);
    cout<<"\xDB\xDB\xDB 2. SPECIAL_MEAL";
    gotoxy(28,24);
    cout<<"\xDB\xDB\xDB 0. PREVIOUS MENU";
    validchar=wantmore4();
    if(validchar=='0')
        hostandday();
    else if(validchar=='r' || validchar=='R')
        regular();
    else
        {special();}

}
void regular()
{
     clrscr();
        boundary();
            gotoxy(35,15);
    cout<<"YOUR TOTAL AMOUNT == 50";
    gotoxy(32,21);
    cout<<"PLEASE PAY 50 RS. ";
    Sleep(4000);
    clrscr();
    boundary();
    gotoxy(35,17);
    cout<<"50 RS. PAID SUCCESSFULLY :)";
    gotoxy(35,20);
    cout<<"THANK YOU :)";
    gotoxy(20,35);
}
void copydat(char arr[100])
{
    strcpy(finalarray[count],arr);
        narray[count]=n;
        sumarray[count]=sum1;

}
void special()
{
    clrscr();
       boundary();
       gotoxy(32,15);
    cout<<"****CHOOSE YOUR MEAL : ****";
    gotoxy(28,18);
    cout<<"\xDB\xDB\xDB 1. DAAL = 30 Press 1";
    gotoxy(28,20);
    cout<<"\xDB\xDB\xDB 2. SHAHI PANNER = 50 Press 2";
    gotoxy(28,22);
    cout<<"\xDB\xDB\xDB 3. MUSHROOM = 45 Press 3";
    gotoxy(28,24);
    cout<<"\xDB\xDB\xDB 4. NEXT MENU -> -> Press 4";
    gotoxy(28,26);
    cout<<"\xDB\xDB\xDB 0. PREVIOUS MENU <- <-  PRESS 0";
    gotoxy(28,28);
    cout<<"\xDB\xDB\xDB ENTER VALID OPTION (1/2/3/4/0) : ";
    cin>>valid3;
    if(valid3[0]=='0' || valid3[0]=='4')
    {}
    else{
    gotoxy(28,30);
    cout<<"\xDB\xDB\xDB ENTER QUANTITY : ";
    cin>>n;
    }
    if(valid3[0]=='1')
        {sum=sum+30*n;
        sum1=30*n;
        copydat(arr1[0]);
        //cout<<finalarray[count]<<narray[count]<<aaa<<sumarray[count]<<endl;
        }
    else if(valid3[0]=='2')
        {sum=sum+50*n;
        sum1=50*n;
        copydat(arr1[1]);}
    else if(valid3[0]=='3')
        {sum=sum+45*n;
        sum1=45*n;
        copydat(arr1[2]);}
    else if(valid3[0]=='4')
        special2();
    else if(valid3[0]=='0')
        choosemeal();
    else
        {valid_input();
            special();}
    count++;
    validchar=wantmore3();
    if(validchar=='y' || validchar=='Y')
        special2();
    else
        finalorder();
}
void special2()
{
    clrscr();
       boundary();
       gotoxy(32,15);
    cout<<"*** YUMMY YUMMY YUMMY YUMMY ***";
    gotoxy(28,18);
    cout<<"\xDB\xDB\xDB 1. PLAIN = 10 Press 1";
    gotoxy(28,20);
    cout<<"\xDB\xDB\xDB 2. BUTTER NAN = 15 Press 2";
    gotoxy(28,22);
    cout<<"\xDB\xDB\xDB 3. PARANTHA = 20 Press 3";
    gotoxy(28,24);
    cout<<"\xDB\xDB\xDB 4. ALOO PARANTHA = 30 Press 4";
    gotoxy(28,26);
    cout<<"\xDB\xDB\xDB 5. NEXT MENU -> -> Press 5";
    gotoxy(28,28);
    cout<<"\xDB\xDB\xDB 0. PREVIOUS MENU <- <-  PRESS 0";
    gotoxy(28,30);
    cout<<"\xDB\xDB\xDB ENTER VALID OPTION (1/2/3/4/5/0) : ";
    cin>>valid3;
    if(valid3[0]=='0' || valid3[0]=='5')
    {}
    else{
    gotoxy(28,31);
    cout<<"\xDB\xDB\xDB ENTER QUANTITY : ";
    cin>>n;
    }if(valid3[0]=='1')
        {sum=sum+10*n;
        sum1=10*n;
        copydat(arr2[0]);}
    else if(valid3[0]=='2')
        {sum=sum+15*n;
        sum1=15*n;
        copydat(arr2[1]);}
    else if(valid3[0]=='3')
        {sum=sum+20*n;
        sum1=20*n;
        copydat(arr2[2]);}
    else if(valid3[0]=='4')
        {sum=sum+30*n;
        sum1=30*n;
        copydat(arr2[3]);}
    else if(valid3[0]=='5')
        special3();
    else if(valid3[0]=='0')
        special();
    else
        {
            valid_input();
            special2();
        }
        count++;
        validchar=wantmore3();
    if(validchar=='y' || validchar=='Y')
        special3();
    else
        finalorder();
}
void special3()
{   clrscr();
       boundary();
       gotoxy(35,15);
    cout<<"ICE_CREAM  ICE_CREAM  ICE_CREAM  ICE_CREAM";
    gotoxy(28,18);
    cout<<"\xDB\xDB\xDB 1. VANILLA = 10 Press 1";
    gotoxy(28,20);
    cout<<"\xDB\xDB\xDB 2. BUTTER_SCOTH = 20 Press 2";
    gotoxy(28,22);
    cout<<"\xDB\xDB\xDB 3. CHOCOLATE = 30 Press 3";
    gotoxy(28,24);
    cout<<"\xDB\xDB\xDB 4. STRAWBERRY = 40 Press 4";
    gotoxy(28,26);
    cout<<"\xDB\xDB\xDB 0. PREVIOUS MENU <- <-  PRESS 0";
    gotoxy(28,28);
    cout<<"\xDB\xDB\xDB ENTER VALID OPTION (1/2/3/4/0) : ";
    cin>>valid3;
    if(valid3[0]=='0')
    {}
    else{
    gotoxy(28,30);
    cout<<"\xDB\xDB\xDB ENTER QUANTITY : ";
    cin>>n;
    }if(valid3[0]=='1')
        {sum=sum+10*n;
        sum1=10*n;
        copydat(arr3[0]);}
    else if(valid3[0]=='2')
        {sum=sum+20*n;
        sum1=20*n;
        copydat(arr3[1]);}
    else if(valid3[0]=='3')
        {sum=sum+30*n;
        sum1=30*n;
        copydat(arr3[2]);}
    else if(valid3[0]=='4')
        {sum=sum+40*n;
        sum1=40*n;
        copydat(arr3[3]);}
    else if(valid3[0]=='0')
        special2();
    else
        {
           valid_input();
            special3();
        }
        count++;
    validchar=wantmore3();
    if(validchar=='y' || validchar=='Y')
        {special();}
    else
        finalorder();
}
void finalorder()
{
    clrscr();
    boundary();
    ccc=0;
        for(i=0;i<count;i++)
        {
            gotoxy(32,15+ccc);
            cout<<finalarray[i]<<narray[i]<<aaa<<sumarray[i]<<endl;
            ccc += 2;}
    gotoxy(31,28);
    cout<<"\xDB\xDB\xDB YOUR TOTAL AMOUNT = "<<sum;
    gotoxy(35,30);
    cout<<"THANK YOU";
    gotoxy(30,32);
    cout<<"\xDB\xDB\xDB YOU WANT TO ADD MORE (Y/N) :- ";
    cin>>valid3;
    if(valid3[0]=='y' || valid3[0]=='Y')
        {clrscr();
        special();}
    else
        {clrscr();
        clrscr();
    boundary();
    ccc=0;
        for(i=0;i<count;i++)
        {
            gotoxy(32,15+ccc);
            cout<<finalarray[i]<<narray[i]<<aaa<<sumarray[i]<<endl;
            ccc += 2;}
    gotoxy(31,28);
    cout<<"\xDB\xDB\xDB YOUR TOTAL AMOUNT = "<<sum;
    gotoxy(35,30);
    cout<<"THANK YOU";
    while(c==0)
    {continue;}
        gotoxy(32,35);
        }

}
void hostel()
{

        clrscr();
        boundary();
           gotoxy(31,15);
    cout<<"*** CHOOSE TIME : ***";
    gotoxy(28,18);
    cout<<"\xDB\xDB\xDB 1. BREAKFAST Press 1";
    gotoxy(28,20);
    cout<<"\xDB\xDB\xDB 2. LUNCH Press 2";
    gotoxy(28,22);
    cout<<"\xDB\xDB\xDB 3. DINNER Press 3";
    gotoxy(28,24);
    cout<<"\xDB\xDB\xDB 4. PREVIOUS MENU Press 0";
    gotoxy(28,26);
    cout<<"\xDB\xDB\xDB ENTER :- ";
    cin>>valid4;
    if(valid4[0]=='1')
        wannaeat();
    else if(valid4[0]=='2')
        wannaeat();
    else if(valid4[0]=='3')
        wannaeat();
    else if(valid4[0]=='0')
        hostandday();
    else
        {valid_input();
         hostel();
        }
}
void valid_input()
{
    clrscr();
            boundary();
            gotoxy(32,20);
            cout<<"ENTER VALID INPUT PLZZ";
            Sleep(1200);
}
void wannaeat()
{
    clrscr();
    boundary();
    gotoxy(32,20);
    cout<<"YOU WANNA EAT FOOD (Y/N) :- ";
    cin>>eat;
    if(eat[0]=='y' || eat[0]=='Y')
    {
        clrscr();
        boundary();
        gotoxy(45,22);
        cout<<"THANK YOU ";
        gotoxy(42,23);
        cout<<"ENJOY YOUR MEAL";
    }
    else
    {
        clrscr();
        boundary();
        gotoxy(38,20);
        enter();

        /*
        cout<<" 50 RS. ADDED TO UR WALLET ";
        gotoxy(41,22);
        cout<<"ENJOY YOUR MEAL";
        FILE *refund;
        refund=fopen("refund_students.dat","a");
        fprintf(refund,"id :: ");
        fprintf(refund,id);
        fprintf(refund," = 50 \n");
        fclose(refund);
        */


        gotoxy(35,33);
    cout<<"FEEDBACK (Y/N)";
    cin>>FEED;
    if(FEED[0]=='Y' || FEED[0]=='y')
    {
       feedback();
    }
    else
    {
        clrscr();boundary();
        gotoxy(41,22);
        cout<<"ENJOY YOUR MEAL";
    }
    }
}
char wantmore()
{
    gotoxy(32,32);
    cout<<"DO YOU WANT TO ADD MORE FROM THIS MENU (Y/N) : ";
    cin>>valid4;
    return valid4[0];
}
void important()
{
    clrscr();
    boundary();
    gotoxy(35,33);
    cout<<"FEEDBACK (Y/N)";
    cin>>FEED;
    if(FEED[0]=='Y' || FEED[0]=='y')
    {
       feedback();
    }
    else
    {
        gotoxy(28,20);
    cout<<"\xDB\xDB\xDB  ENTER YOUR ID : ";
    cin>>id;
    int llll;
    llll=strlen(id);
    int iuy;
    try{
        for(iuy=0;iuy<llll;iuy++)
        {
        if(id[iuy]>='0' && id[iuy]<='9')
        {
        }
        else
        {
            throw(10);

        }
        }
    } catch(int x){
            gotoxy(28,30);
            cout<<"ENTER VALID INPUT PLZ  ";
            Sleep(2000);
            important();
    }

        hostandday();

    }
}



int main()
{
    system("color 0C");
    int j,k,l,ll=0;
    pannel();

}

void login()
{
    clrscr();
    boundary();
    gotoxy(28,32);
    cout<<"\xDB\xDB\xDB IF U WANNA GO BACK THE ENTER PASSWORD 'exitplz'";
    PlaySound(TEXT("adminmode.wav"),NULL,SND_SYNC);
    gotoxy(32,22);
    cout<<"USERNAME :- ";
    cin>>username;
    gotoxy(32,25);
    cout<<"PASSWORD :-";
    i=0;
    cin>>password;
    if(strcmp(password,password1)==0 && strcmp(username,username1)==0)
    {
        gotoxy(30,29);
        cout<<"\xDB\xDB\xDBPassword match";
        gotoxy(32,31);
        cout<<"Press any key to continue....";
        gotoxy(32,35);
        admintable();
    }
    else if(strcmp(password,password2)==0)
    {
        gotoxy(30,29);
        cout<<"\xDB\xDB\xDBPassword match";
        gotoxy(32,31);
        cout<<"Press any key to back....";
        clrscr();
        pannel();
        gotoxy(32,35);

    }
    else
    {
        gotoxy(30,29);
        cout<<"\xDB\xDB\xDBPassword not match";
        pass='0';
        Sleep(1000);
        login();
    }

}

void pannel()
{
    /*
    sleep_time(15,10,5);
    for(i=1;i<30;i++)
    {
        gotoxy(25+i,5);
        cout<<s[i];
        if(i>=14 &&i<=30)
        {
            gotoxy(18+i,6);
            cout<<s1[i-14];
        }
        Sleep(150);
    }
    sleep_time(15,53,5);
    PlaySound(TEXT("a.wav"),NULL,SND_SYNC);
    */

    boundary();
    gotoxy(32,18);
    cout<<"PLZZ CHOSSE YOUR PANNEL :--";
    gotoxy(28,20);
    cout<<"\xDB\xDB\xDB 1. ADMIN PANNEL 'PRESS 1'";
    gotoxy(28,22);
    cout<<"\xDB\xDB\xDB 2. STUDENT PANNEL 'PRESS 2'";
    gotoxy(28,24);
    cout<<"\xDB\xDB\xDB   PRESS NUMBER :- ";
    cin>>valid5;
    if(valid5[0]=='1')
    {
        login();
    }
    else if(valid5[0]=='2')
    {
        important();
    }
    else
    {
     valid_input();
     pannel();
    }
}

	

