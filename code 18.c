//1st SEMESTER PROJECT OF C PROGRAMMING.

#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<windows.h>
#include<time.h>
#define ENTER 13
#define SPACE 32
#define BKSP 8
#define ESC 27
#define TAB 9

struct C_players_detail
{
	int JN_T1,run,wicket,run_given;
	char P_name_T1[50],P_position_T1[50];
}P1[11],P2[11],P3[11],P4[11],P5[11],P6[11];

struct F_players_detail
{
	int JN_T1,shoot,goal;
	char P_name_T1[50],P_position_T1[50];
}Q1[11],Q2[11],Q3[11],Q4[11];

struct cricket
{
	char chk_filename[50],chk_filename2[50],chk_filename3[50],chk_filename4[50],chk_filename5[50],chk_filename6[50],chk_filename7[50],chk_filename8[50],chk_filename9[50],chk_filename10[50],chk_filename11[50];
	char file_name[50],file_name2[50],file_name3[50],file_name4[50],file_name5[50],file_name6[50],file_name7[50],file_name8[50],file_name9[50],file_name10[50],file_name11[50],league[50],venue[50],date[20],team_1name[50],team_2name[50];
	int no_of_overs,file_code,total_no_of_player_team1,total_no_of_player_team2;
}C1;

struct football
{
	char chk_filename[50],chk_filename2[50],chk_filename3[50],chk_filename4[50],chk_filename5[50];
	char file_name[50],file_name2[50],file_name3[50],file_name4[50],file_name5[50],league[50],time[10],venue[50],date[20],team_1name[50],team_2name[50],coach_name1[50],coach_name2[50];
	int file_code,total_no_of_player_team1,total_no_of_player_team2;
}F1;

char opening();     
void Home();
void create();
void browse();
void cricketscore();
void Edit_matchdetail_C();
void Edit_matchdetail_F();
void create_cricketsheet1();
void footballscore();
void create_footballsheet1();
void view_cricketscore();
void view_footballscore();
void browse_cricket();
void browse_football();
void search_cricket();
void search_football();
void Cricket();
void Football();
void C_Players_detail_team1();
void C_Players_detail_team2();
void F_Players_detail_team1();
void F_Players_detail_team2();
void Cricket_display();
void C_Player_det1();
void C_Player_det2();
void Football_display();
void F_Player_det1();
void F_Player_det2();
void C_scoresheet();
void V_C_scoresheet();
void C_team1();
void V_C_team1();
void C_team2();
void V_C_team2();
void Bat_inning1();
void Ball_inning1();
void First_inning_bat();
void First_inning_ball();
void inning_second_bat();
void inning_second_ball();
void Second_inning_bat();
void Second_inning_ball();
void V_Bat_inning1();
void V_Ball_inning1();
void V_First_inning_bat();
void V_First_inning_ball();
void V_inning_second_bat();
void V_inning_second_ball();
void V_Second_inning_bat();
void V_Second_inning_ball();
void Football_record1();
void Football_record2();
void V_Football_record1();
void V_Football_record2();


COORD c = {0, 0};                //for border
void gotoxy (int x, int y)              
{
 c.X = x; c.Y = y; // goto X and Y coordinates
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

void fordelay(int j)
{   int i,k;
    for(i=0;i<j;i++)
        k=i;
}

int main()                                                          //Opening page
{
	int i,j;
    gotoxy(5,0);
	
//Top border line
    gotoxy(10,4); 
    for(j=0; j<96; j++)   
    printf("%c", 254);
    
	printf("\n\n\n\n\n\n\n\n\t\t\t\t\t Sports Scoresheet Organizer\n\n\n\n");
	
//Bottom border line... 
   gotoxy(10,20); 
   for(j=0; j<=95; j++)   
   printf("%c", 254);
   
//Left and right border line
    for(j=0; j<15; j++)
{
	gotoxy(10,5+j);
	printf("%c",219);
	
	gotoxy(105,5+j);
	printf("%c",219);
 }
 	printf("\n\n\n");
 	printf("\t\t\t");
 	//getch();
 	system("pause");
 	system("cls");
 	opening();
 	return 0; 
}

char opening()                                              //Password section
{
	char password[25];
	int j;

//Top border line
    gotoxy(10,4); 
    for(j=0; j<96; j++)   
    printf("%c", 254);
    
	printf("\n\n\n\n\n\n\t\t\t\t\t\tEnter password: ");

//1st Bottom border line... 
     gotoxy(10,16); 
     for(j=0; j<=95; j++)   
     printf("%c",196);

//2nd Bottom border line... 
     gotoxy(10,25); 
     for(j=0; j<=95; j++)   
     printf("%c",254); 	

//left and right border line..
    for(j=0; j<20; j++)	
	{
	        gotoxy(10,5+j);
	        printf("%c",219);
	
	        gotoxy(105,5+j);
	        printf("%c",219);
	}  
	
	gotoxy(64,10);
	
	fflush(stdin);
	int i=0;
	char ch;
	while(1)
	{
		ch=getch();
		if(ch==ENTER)
		{
			password[i]='\0';
			break;
		}
		else if(ch==BKSP)
		{
			if(i>0)
			{
				i--;
				password[i]='\0';
				printf("\b \b");
			} 
		}
		else if(ch==SPACE||ch==ESC||ch==TAB)
		{
			continue;
		}
		else
		{
			password[i]=ch;
			i++;
			printf("*");
		} 
	}
	int num;
	fflush(stdin);
	num=strcmp(password,"Scoresheet");
	
	if(num==0)
	{
	printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tLogin Successful !!!");
	printf("\n\t\t\t\t\t\t");
	printf("Loading ");
	for(i=0;i<=12;i++)
        {
            fordelay(100000000);
            printf(".");
        }
	system("cls");
	Home();
	}
	else
	{
		printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\tIncorrect password!!! Please try again\n");
		printf("\t\t\t\t\t");
		system("pause");  //getch();
		system("cls");
		opening();
	}
	
}

void Home()                              //Home page
{
	system("cls");
	int i,j;
    gotoxy(5,0);
	
//Top border line..
    gotoxy(10,4); 
    for(j=0; j<96; j++)   
    printf("%c", 254);
    
	printf("\n\n\t\t1.Create a scoresheet");
	printf("\n\n\t\t2.Browse a scoresheet");
	printf("\n\n\t\t3.Exit");
	printf("\n\n\n\t\t\t\t\t\t\t\t\t\t1-Create Scorecard\n");
	printf("\n\t\t\t\t\t\t\t\t\t\t2-Browse Scorecard\n");
	
// 1st Bottom border line... 
     gotoxy(10,16); 
     for(j=0; j<=95; j++)   
     printf("%c",196);
   	 
	char num;
	printf("\n\n\t\t\tEnter your choice: ");
	
//2nd Bottom border line... 
     gotoxy(10,25); 
     for(j=0; j<=95; j++)   
     printf("%c",254); 	

//left and right boarder
      for(j=0; j<20; j++)
	{
	        gotoxy(10,5+j);
	        printf("%c",219);
	
	        gotoxy(105,5+j);
	        printf("%c",219);
    }   

    printf("\n");
    gotoxy(43,18);
	fflush(stdin);
	scanf("%c",&num);
	
	switch(num)
	{
		case '1':
			create();
			break;
		case '2':
		    browse();
			break;
	    case '3':
	    	system("cls");
	    	exit(0);
	    	break;
		default:
		    printf("\n\n\n\n\n\n\n\n\t\t\t\t\tInvalid choice!!! Please try again . . .\n");
			printf("\t\t\t\t\t");
			system("pause");
			system("cls");
			Home();
		    break;	
	}
}

void create()                                        //To create a scoresheet
{
	system("cls");
	int j;
//Top border line
    gotoxy(10,4); 
    for(j=0; j<96; j++)   
    printf("%c", 254);
 
	printf("\n\t\t\t\tTo create a scoresheet select a sport from the following:\n\n");
	printf("\n\n\t\t1.Cricket");
	printf("\n\n\t\t2.Football");
	printf("\n\n\t\t3.Back");
	char n;
// 1st Bottom border line... 
   gotoxy(10,15); 
   for(j=0; j<=95; j++)   
   printf("%c", 196);
   printf("\n\n\n\n\t\t\t\t\tEnter your choice: ");
	
// 2nd Bottom border line... 
   gotoxy(10,25); 
   for(j=0; j<=95; j++)   
   printf("%c", 254);

//right and left border line
    for(j=0; j<20; j++)
	{
	    gotoxy(10,5+j);
	    printf("%c",219);
	
	    gotoxy(105,5+j);
	    printf("%c",219);
	}
	
	gotoxy(59,19);
	fflush(stdin);
	scanf("%c",&n);
	
	switch(n)
	{
		case '1':
			cricketscore();
			break;
		case '2':
			footballscore();
			break;
		case '3':
			Home();
			break;
		default:
			printf("\n\n\n\n\n\n\n\t\t\t\t\tInvalid choice!!! Please try again . . .\n");
			printf("\t\t\t\t\t");
			system("pause");
			create();
			break;
	}
}

void cricketscore()
{
	system("cls");
	int j;
//Top border line
    gotoxy(10,4); 
    for(j=0; j<96; j++)   
    printf("%c", 254);
 
	printf("\n\n\t\t\t\t\t\tCricket Scoresheet\n\n\n");
	printf("\t\t\t\t\t\t\t\t\t\t1-continue\n\n");
	printf("\t\t\t\t\t\t\t\t\t\t2-go back");
	char num;
// 1st Bottom border line... 
   gotoxy(10,15); 
   for(j=0; j<=95; j++)   
   printf("%c", 196);
	
	printf("\n\t\t\t\tEnter your choice:");

// 2ndBottom border line... 
   gotoxy(10,25); 
   for(j=0; j<=95; j++)   
   printf("%c", 254);

//right and left border line
    for(j=0; j<20; j++)
	{
	    gotoxy(10,5+j);
	    printf("%c",219);
	
	    gotoxy(105,5+j);
	    printf("%c",219);
	}

	gotoxy(51,16);
	fflush(stdin);
	scanf("%c",&num);
	
	switch(num)
	{
		case '1':
		    create_cricketsheet1();
		    break;
		case '2':
			create();
		    break;
		default:
			printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\tInvalid choice!!! Please try again . . .\n");
			printf("\t\t\t\t\t");
			system("pause");
			cricketscore();
		    break;	
	}
}	

void create_cricketsheet1()
{
	system("cls");
	int j;
	getsfilename:
// 1st Bottom border line... 
    gotoxy(10,8); 
    for(j=0; j<=95; j++)   
    printf("%c",196);
    
    fflush(stdin);
	printf("\n\n\n\t\t\t\tEnter the file name to begin with the game details: ");
//  Bottom border line... 
    gotoxy(10,14); 
    for(j=0; j<=95; j++)   
    printf("%c",196);
    gotoxy(84,11);
    gets(C1.file_name);
	
	FILE *fptr;
    fptr = fopen(C1.file_name,"wb");
    if (fptr == NULL)
    {
    	fflush(stdin);
        printf("\n\n\n\n\n\n\t\t\t\tFile does not exist. Please try again . . .\n");
        printf("\t\t\t\t");
		system("pause");
		system("cls");
		goto getsfilename;
    }
    printf("\n\n\n\n\n\t\t\t\tFile created successfully.");
    printf("\n\t\t\t\t");
	system("pause");
	system("cls");
	char cur_time[128];
    time_t t;
    struct tm* ptm;
    t=time(NULL);
    ptm=localtime(&t);
    strftime(cur_time,128,"\n\t\t\t\t\t\t\t\t\t\t\t\t%d-%b-%Y",ptm);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\tCurrent Date: %s\n",cur_time);
	int i;
    gotoxy(5,0);
	
//Top border line
    gotoxy(10,4); 
    for(j=0; j<96; j++)   
    printf("%c", 254);
	printf("\n\n\t\t\t\t\t\tCricket Scoresheet\n\n");
	
// 1st Bottom border line... 
    gotoxy(10,8); 
    for(j=0; j<=95; j++)   
    printf("%c",196);
     
	printf("\n\n\t\tFile name: ");
	printf("\t\t\t\t\tFile code: ");
	printf("\n\n\t\tNo of overs: ");
	printf("\t\t\t\t\tLeague: ");
	printf("\n\n\t\tVenue: ");
	printf("\t\t\t\t\t\tDate: ");  
	printf("\n\n\t\tTeam_1 Name: ");
	printf("\t\t\t\t\tTeam_2 Name: ");
	printf("\n\n\t\tTeam_1 Total Players: ");
	printf("\t\t\t\tTeam_2 Total Players: "); 	 
	
//2nd Bottom border line... 
     gotoxy(10,25); 
     for(j=0; j<=95; j++)   
     printf("%c",254); 	

//left and right boarder
    for(j=0; j<20; j++)
	{
	        gotoxy(10,5+j);
	        printf("%c",219);
	
	        gotoxy(105,5+j);
	        printf("%c",219);
    }   
 //middle up down boarder   
    for(j=0;j<16;j++)
    {
  			gotoxy(55,9+j);
	        printf("%c",179);
	}
    printf("\n");
    fflush(stdin);
    gotoxy(27,10);
	puts(C1.file_name);
    gotoxy(75,10);
    scanf("%d",&C1.file_code);
    fflush(stdin);
    gotoxy(29,12);
    scanf("%d",&C1.no_of_overs);
    fflush(stdin);
    gotoxy(72,12);
    gets(C1.league);
    fflush(stdin);
    gotoxy(23,14);
    gets(C1.venue);
    fflush(stdin);
    gotoxy(70,14);
    gets(C1.date);
    fflush(stdin);
    gotoxy(29,16);
    gets(C1.team_1name);
    gotoxy(77,16);
    gets(C1.team_2name);
    gotoxy(38,18);
    scanf("%d",&C1.total_no_of_player_team1);
    fflush(stdin);
    gotoxy(86,18);
    scanf("%d",&C1.total_no_of_player_team2);
    fflush(stdin);
    printf("\n\n\n\n\n\n\n\t\t");
    fwrite(&C1,sizeof(C1),1,fptr);
    fclose(fptr);
    char ch;
    opt:
    gotoxy(20,28);
    printf("\n\t\tWhat you want to do:\n");
    printf("\n\t\t1.Edit");
    printf("\n\t\t2.Continue");
    printf("\n\t\t3.Back");
    printf("\n\n\t\tEnter your choice: ");
	ch=getch();
	
	switch(ch)
	{
	case '1':
	Edit_matchdetail_C();
    break;
    
    case '2':
    system("cls");
    C_Players_detail_team1();
 	break;
 	
	case '3':
    	create();
    	break;
    	
    default:
    	printf("\n\n\t\tInvalid Choice!!! Please try again . . .");
    	getch();
    	goto opt;
    	break;
	}
	printf("\n\t\t");
    system("pause");
}

void Edit_matchdetail_C()
{
	FILE *fptr;
	fptr=fopen(C1.file_name,"wb");
    gotoxy(75,10);
    scanf("%d",&C1.file_code);
    fflush(stdin);
    gotoxy(29,12);
    scanf("%d",&C1.no_of_overs);
    fflush(stdin);
    gotoxy(72,12);
    gets(C1.league);
    fflush(stdin);
    gotoxy(23,14);
    gets(C1.venue);
    fflush(stdin);
    gotoxy(70,14);
    gets(C1.date);
    fflush(stdin);
    gotoxy(29,16);
    gets(C1.team_1name);
    gotoxy(77,16);
    gets(C1.team_2name);
    gotoxy(38,18);
    scanf("%d",&C1.total_no_of_player_team1);
    fflush(stdin);
    gotoxy(86,18);
    scanf("%d",&C1.total_no_of_player_team2);
    fflush(stdin);
    fwrite(&C1,sizeof(C1),1,fptr);
	fclose(fptr);
	char ch;
    opt:
	gotoxy(20,28);
    printf("\n\t\tWhat you want to do:\n");
    printf("\n\t\t1.Edit");
    printf("\n\t\t2.Continue");
    printf("\n\t\t3.Back");
    printf("\n\n\t\tEnter your choice: ");
	ch=getch();
	switch(ch)
	{
	case '1':
		Edit_matchdetail_C();
    	break;
    
    case '2':
    	system("cls");
    	C_Players_detail_team1();
 		break;
 	
	case '3':
    	create();
    	break;
    	
    default:
    	printf("\n\n\t\tInvalid Choice!!! Please try again . . .");
    	getch();
    	goto opt;
    	break;
	}
	printf("\n\t\t");
    system("pause");
}
void C_Players_detail_team1()
{
	system("cls");
	int j;
	getsfilename2:
// 1st Bottom border line... 
    gotoxy(10,8); 
    for(j=0; j<=95; j++)   
    printf("%c",196);
    
    fflush(stdin);
	printf("\n\n\n\t\t\t\tEnter the new file name to continue with Player details (team 1):");
//  Bottom border line... 
    gotoxy(10,14); 
    for(j=0; j<=95; j++)   
    printf("%c",196);
    gotoxy(98,11);
    gets(C1.file_name2);
	
	FILE *fptr;
    fptr = fopen(C1.file_name2,"wb");
    if (fptr == NULL)
    {
    	fflush(stdin);
        printf("\n\n\n\n\n\n\t\t\t\tFile does not exist. Please try again . . .\n");
        printf("\t\t\t\t");
		system("pause");
		system("cls");
		goto getsfilename2;
    }
    printf("\n\n\n\n\n\t\t\t\tFile created successfully.");
    printf("\n\t\t\t\t");
	system("pause");
	P:
	system("cls");
    gotoxy(10,2);
	printf("\t\t\t\t\tCricket Scoresheet\n\n");
//Top border line
    gotoxy(5,4); 
    for(j=0; j<101; j++)   
    printf("%c", 254);
    printf("\n\n\t\t\t\t\t    Players Detail (Team %s)",C1.team_1name);
    
// 1st Bottom border line... 
    gotoxy(5,8); 
    for(j=0; j<=100; j++)   
    printf("%c",196);
    printf("\n\n         SN");
    printf("\tPlayers J.N ");
    printf("\t\t     Players Name ");
    printf("\t\t\tPlayers Position");
    //for Serial NO.
    int m,n,c;
    m=9,n=14;
	for(c=1;c<=11;c++)
    {
	 gotoxy(m,n);
	 fflush(stdin);
     printf("%d.",c);
     n=n+2;
 	}
    
//2nd Bottom border line...	
	gotoxy(5,12);
	for(j=0;j<100;j++)
	printf("%c",196);
	
//3nd Bottom border line... 
     gotoxy(5,37); 
     for(j=0; j<=100; j++)   
     printf("%c",254); 
     

//left and right boarder
    for(j=0; j<32; j++)
	{
			gotoxy(5,5+j);
			printf("%c",219);
	
	        gotoxy(105,5+j);
	        printf("%c",219);
    }   
//middle up down boarder   
    for(j=0;j<28;j++)
    {
    		gotoxy(13,9+j);
	        printf("%c",179);
    	
  			gotoxy(30,9+j);
	        printf("%c",179);
	        
	        gotoxy(70,9+j);
	        printf("%c",179);
	}
	int i,k,l;
	k=16,l=14;
	
	for(i=0;i<11;i++)
    {
	 gotoxy(k,l);
	 fflush(stdin);
     scanf("%d",&P1[i].JN_T1);
     gotoxy(k+25,l);
     fflush(stdin);
     gets(P1[i].P_name_T1);
     gotoxy(k+60,l);
     fflush(stdin);
     gets(P1[i].P_position_T1);
     l=l+2;
 	}
 	fwrite(&P1,sizeof(P1),11,fptr);
 	option:
    gotoxy(20,40);
    printf("\n\t\tWhat you want to do:\n");
    printf("\n\t\t1.Edit");
    printf("\n\t\t2.Continue");
    printf("\n\t\t3.Back");
    printf("\n\n\t\tEnter your choice: ");
    char ch;
	ch=getch();
	
	switch(ch)
	{
		case '1':
			fptr = fopen(C1.file_name2,"wb");
			goto P;
			break;
			
		case '2':
			system("cls");
			C_Players_detail_team2();
			break;
		case '3':
			system("cls");
			create();
			break;
		default:
			printf("\n\n\t\tInvalid Choice!!! Please try again . . .");
    		getch();
    		goto option;
    		break;
	}
 	fclose(fptr);
}

void C_Players_detail_team2()
{
	system("cls");
	int j;
	getsfilename3:
// 1st Bottom border line... 
    gotoxy(10,8); 
    for(j=0; j<=95; j++)   
    printf("%c",196);
    
    fflush(stdin);
	printf("\n\n\n\t\t\t\tEnter the new file name to continue with players detail (team 2): ");
//  Bottom border line... 
    gotoxy(10,14); 
    for(j=0; j<=95; j++)   
    printf("%c",196);
    gotoxy(98,11);
    gets(C1.file_name3);
	
	FILE *fptr;
    fptr = fopen(C1.file_name3,"wb");
    if (fptr == NULL)
    {
    	fflush(stdin);
        printf("\n\n\n\n\n\n\t\t\t\tFile does not exist. Please try again . . .\n");
        printf("\t\t\t\t");
		system("pause");
		system("cls");
		goto getsfilename3;
    }
    printf("\n\n\n\n\n\t\t\t\tFile created successfully.");
    printf("\n\t\t\t\t");
	system("pause");
	PP:
	system("cls");
    gotoxy(10,2);
	printf("\t\t\t\t\tCricket Scoresheet\n\n");
//Top border line
    gotoxy(5,4); 
    for(j=0; j<101; j++)   
    printf("%c", 254);
    printf("\n\n\t\t\t\t\t    Players Detail (Team %s)",C1.team_2name);
    
// 1st Bottom border line... 
    gotoxy(5,8); 
    for(j=0; j<=100; j++)   
    printf("%c",196);
    printf("\n\n         SN");
    printf("\tPlayers J.N ");
    printf("\t\t     Players Name ");
    printf("\t\t\tPlayers Position");
    
    //for Serial NO.
    int m,n,c;
    m=9,n=14;
	for(c=1;c<=11;c++)
    {
	 gotoxy(m,n);
	 fflush(stdin);
     printf("%d.",c);
     n=n+2;
 	}
    
//2nd Bottom border line...	
	gotoxy(5,12);
	for(j=0;j<100;j++)
	printf("%c",196);
	
//3nd Bottom border line... 
     gotoxy(5,37); 
     for(j=0; j<=100; j++)   
     printf("%c",254); 
     

//left and right boarder
    for(j=0; j<32; j++)
	{
			gotoxy(5,5+j);
			printf("%c",219);
	
	        gotoxy(105,5+j);
	        printf("%c",219);
    }   
//middle up down boarder   
    for(j=0;j<28;j++)
    {
    		gotoxy(13,9+j);
	        printf("%c",179);
    	
  			gotoxy(30,9+j);
	        printf("%c",179);
	        
	        gotoxy(70,9+j);
	        printf("%c",179);
	}
	int i,k,l;
	k=16,l=14;
	
	for(i=0;i<11;i++)
    {
	 gotoxy(k,l);
	 fflush(stdin);
     scanf("%d",&P2[i].JN_T1);
     gotoxy(k+25,l);
     fflush(stdin);
     gets(P2[i].P_name_T1);
     gotoxy(k+60,l);
     fflush(stdin);
     gets(P2[i].P_position_T1);
     l=l+2;
 	}
 	fwrite(&P2,sizeof(P2),11,fptr);
 	opps:
    gotoxy(20,40);
    printf("\n\t\tWhat you want to do:\n");
    printf("\n\t\t1.Edit");
    printf("\n\t\t2.Continue");
    printf("\n\t\t3.Back");
    printf("\n\n\t\tEnter your choice: ");
    char ch;
	ch=getch();
	
	switch(ch)
	{
		case '1':
			fptr = fopen(C1.file_name3,"wb");
			goto PP;
			break;
			
		case '2':
			C_scoresheet();
			break;
		case '3':
			system("cls");
			create();
			break;
		default:
			printf("\n\n\t\tInvalid Choice!!! Please try again . . .");
    		getch();
    		goto opps;
    		break;
	}
 	fclose(fptr);
}

void C_scoresheet()
{
	labelc:
	system("cls");
	int j;
// 1st Bottom border line... 
    gotoxy(10,8); 
    for(j=0; j<=95; j++)   
    printf("%c",196);
    
    fflush(stdin);
    char cc;
	printf("\n\n\t\t\t\tWhich team has won the toss ?");
	printf("\n\t\t\t\t1. %s",C1.team_1name);
	printf("\n\t\t\t\t2. %s",C1.team_2name);
	printf("\n\n\t\t\t\tEnter your choice: ");
	scanf("%c",&cc);
	switch(cc)
	{
		case '1':
			C_team1();
			break;
		case '2':
			C_team2();
			break;
		default:
			fflush(stdin);
			printf("\n\n\t\t\t\tInvalid Choice!!! Please try again . . . ");
    		getch();
    		goto labelc;
    		break;
	}
}

void C_team1()
{
	int j;
	ld:
//  Bottom border line... 
    gotoxy(10,16); 
    for(j=0; j<=95; j++)   
    printf("%c",196);
    char bb;
    fflush(stdin);
	printf("\n\n\t\t\t\tWhat did team %s choose to do ?",C1.team_1name);
	printf("\n\t\t\t\t1. Bat");
	printf("\n\t\t\t\t2. Ball");
	printf("\n\n\t\t\t\tEnter your choice: ");
	scanf("%c",&bb);
	switch(bb)
	{
		case '1':
			//  Bottom border line... 
    		gotoxy(10,24); 
    		for(j=0; j<=95; j++)   
    		printf("%c",196);
    		printf("\n\n\n\t\t\t\tPress any key to begin the match . . . ");
    		getch();
			Bat_inning1();
			break;
		case '2':
			//  Bottom border line... 
    		gotoxy(10,24); 
    		for(j=0; j<=95; j++)   
    		printf("%c",196);
    		printf("\n\n\n\t\t\t\tPress any key to begin the match . . . ");
    		getch();
			First_inning_bat();
			break;
		default:
			fflush(stdin);
			printf("\n\n\t\t\t\tInvalid Choice!!! Please try again . . . ");
    		getch();
    		goto ld;
    		break;
	}
}

void C_team2()
{
	int j;
	ld:
//  Bottom border line... 
    gotoxy(10,16); 
    for(j=0; j<=95; j++)   
    printf("%c",196);
    char bb;
    fflush(stdin);
	printf("\n\n\t\t\t\tWhat did team %s choose to do ?",C1.team_2name);
	printf("\n\t\t\t\t1. Bat");
	printf("\n\t\t\t\t2. Ball");
	printf("\n\n\t\t\t\tEnter your choice: ");
	scanf("%c",&bb);
	switch(bb)
	{
		case '1':
			//  Bottom border line... 
    		gotoxy(10,24); 
    		for(j=0; j<=95; j++)   
    		printf("%c",196);
    		printf("\n\n\n\t\t\t\tPress any key to begin the match . . . ");
    		getch();
			First_inning_bat();
			break;
		case '2':
			//  Bottom border line... 
    		gotoxy(10,24); 
    		for(j=0; j<=95; j++)   
    		printf("%c",196);
    		printf("\n\n\n\t\t\t\tPress any key to begin the match . . . ");
    		getch();
			Bat_inning1();
			break;
		default:
			fflush(stdin);
			printf("\n\n\t\t\t\tInvalid Choice!!! Please try again . . . ");
    		getch();
    		goto ld;
    		break;
	}
}

void Bat_inning1()
{
	system("cls");
	int j;
	getsfilename4:
// 1st Bottom border line... 
    gotoxy(10,8); 
    for(j=0; j<=95; j++)   
    printf("%c",196);
    
    fflush(stdin);
	printf("\n\n\n\t\t\t\tEnter the new file name to continue with 1st inning batting: ");
//  Bottom border line... 
    gotoxy(10,14); 
    for(j=0; j<=95; j++)   
    printf("%c",196);
    gotoxy(93,11);
    gets(C1.file_name4);

	FILE *fpttr;
    fpttr = fopen(C1.file_name4,"wb");
    if (fpttr == NULL)
    {
    	fflush(stdin);
        printf("\n\n\n\n\n\n\t\t\t\tFile does not exist. Please try again . . .\n");
        printf("\t\t\t\t");
		system("pause");
		system("cls");
		goto getsfilename4;
    }
    printf("\n\n\n\n\n\t\t\t\tFile created successfully.");
    printf("\n\t\t\t\t");
	system("pause");
	
	system("cls");
    gotoxy(10,2);
	printf("\t\t\t\tCricket Scoresheet First Inning \n\n");
//Top border line
    gotoxy(5,4); 
    for(j=0; j<101; j++)   
    printf("%c", 254);
    printf("\n\n\t\t\t\t\t    Players Record (Team %s)",C1.team_1name);
    
// 1st Bottom border line... 
    gotoxy(5,8); 
    for(j=0; j<=100; j++)   
    printf("%c",196);
    printf("\n\n         SN");
    printf("\tPlayers J.N ");
    printf("\t\t     Players Name ");
    printf("\t\t\tTotal Run Scored");
    //for Serial NO.
    int m,n,c;
    m=9,n=14;
	for(c=1;c<=11;c++)
    {
	 gotoxy(m,n);
	 fflush(stdin);
     printf("%d.",c);
     n=n+2;
 	}
    
//2nd Bottom border line...	
	gotoxy(5,12);
	for(j=0;j<100;j++)
	printf("%c",196);
	
//3nd Bottom border line... 
     gotoxy(5,37); 
     for(j=0; j<=100; j++)   
     printf("%c",254); 
     

//left and right boarder
    for(j=0; j<32; j++)
	{
			gotoxy(5,5+j);
			printf("%c",219);
	
	        gotoxy(105,5+j);
	        printf("%c",219);
    }   
//middle up down boarder   
    for(j=0;j<28;j++)
    {
    		gotoxy(13,9+j);
	        printf("%c",179);
    	
  			gotoxy(30,9+j);
	        printf("%c",179);
	        
	        gotoxy(70,9+j);
	        printf("%c",179);
	}
	
	int i,k,l;
	k=16,l=14;
	int T_Run=0;
	FILE *fptr;
    fptr=fopen(C1.file_name2,"rb");
    while(fread(&P1,sizeof(P1),11,fptr)!=NULL)
{
	for(i=0;i<11;i++)
    {
	 gotoxy(k,l);
	 fflush(stdin);
     printf("%d",P1[i].JN_T1);
     gotoxy(k+25,l);
     fflush(stdin);
     puts(P1[i].P_name_T1);
     gotoxy(k+60,l);
     fflush(stdin);
     scanf("%d",&P3[i].run);
     T_Run+=P3[i].run;
     l=l+2;
 	}
}
	fflush(stdin);
	fclose(fptr);
	
	fwrite(&P3,sizeof(P3),11,fpttr);
	fclose(fpttr);
	
	FILE *fp;
	fp=fopen("run.txt","w");
	fflush(stdin);
	gotoxy(20,40);
    printf("Total Runs scored: %d",T_Run);
    putw(T_Run,fp);
	fclose(fp);
    gotoxy(20,42);
    printf("Press any key to continue . . . ");
	getch();
	Ball_inning1();
}



void Ball_inning1()
{
	system("cls");
	int j;
	getsfilename5:
// 1st Bottom border line... 
    gotoxy(10,8); 
    for(j=0; j<=95; j++)   
    printf("%c",196);
    
    fflush(stdin);
	printf("\n\n\n\t\t\t\tEnter the new file name to continue with 1st inning balling: ");
//  Bottom border line... 
    gotoxy(10,14); 
    for(j=0; j<=95; j++)   
    printf("%c",196);
    gotoxy(93,11);
    gets(C1.file_name5);

	FILE *fpttr;
    fpttr = fopen(C1.file_name5,"wb");
    if (fpttr == NULL)
    {
    	fflush(stdin);
        printf("\n\n\n\n\n\n\t\t\t\tFile does not exist. Please try again . . .\n");
        printf("\t\t\t\t");
		system("pause");
		system("cls");
		goto getsfilename5;
    }
    printf("\n\n\n\n\n\t\t\t\tFile created successfully.");
    printf("\n\t\t\t\t");
	system("pause");
	
	system("cls");
    gotoxy(10,2);
	printf("\t\t\t\tCricket Scoresheet First Inning \n\n");
//Top border line
    gotoxy(5,4); 
    for(j=0; j<106; j++)   
    printf("%c", 254);
    printf("\n\n\t\t\t\t\t    Players Record (Team %s)",C1.team_2name);
    
// 1st Bottom border line... 
    gotoxy(5,8); 
    for(j=0; j<=105; j++)   
    printf("%c",196);
    printf("\n\n         SN");
    printf("\tPlayers J.N ");
    printf("\t        Players Name ");
    printf("\t\tTotal Wicket Taken");
    printf("\t Total Runs Given");
    //for Serial NO.
    int m,n,c;
    m=9,n=14;
	for(c=1;c<=11;c++)
    {
	 gotoxy(m,n);
	 fflush(stdin);
     printf("%d.",c);
     n=n+2;
 	}
    
//2nd Bottom border line...	
	gotoxy(5,12);
	for(j=0;j<105;j++)
	printf("%c",196);
	
//3nd Bottom border line... 
     gotoxy(5,37); 
     for(j=0; j<=105; j++)   
     printf("%c",254); 
     

//left and right boarder
    for(j=0; j<32; j++)
	{
			gotoxy(5,5+j);
			printf("%c",219);
	
	        gotoxy(110,5+j);
	        printf("%c",219);
    }   
//middle up down boarder   
    for(j=0;j<28;j++)
    {
    		gotoxy(13,9+j);
	        printf("%c",179);
    	
  			gotoxy(30,9+j);
	        printf("%c",179);
	        
	        gotoxy(60,9+j);
	        printf("%c",179);
	        
	        gotoxy(85,9+j);
	        printf("%c",179);
	}
	
	FILE *fptr;
    fptr=fopen(C1.file_name3,"rb");
	int i,k,l;
	k=16,l=14;
	int Total_wicket=0;
	int Total_run_given=0;
	int Extras;
	int Total_Runs,Target;
    while(fread(&P2,sizeof(P2),11,fptr)!=NULL)
{
	for(i=0;i<11;i++)
    {
	 gotoxy(k,l);
	 fflush(stdin);
     printf("%d",P2[i].JN_T1);
     gotoxy(k+20,l);
     fflush(stdin);
     puts(P2[i].P_name_T1);
     gotoxy(k+50,l);
     fflush(stdin);
     scanf("%d",&P4[i].wicket);
     gotoxy(k+75,l);
     scanf("%d",&P4[i].run_given);
     Total_wicket+=P4[i].wicket;
     Total_run_given+=P4[i].run_given;
     l=l+2;
 	}
}
	fflush(stdin);
	fclose(fptr);
	
	fwrite(&P4,sizeof(P4),11,fpttr);
	fclose(fpttr);
	
	FILE *fpp;
	fpp=fopen("finalrun.txt","w");
	fflush(stdin);
	gotoxy(20,40);
    printf("Total wicket taken: %d",Total_wicket);
    gotoxy(20,42);
    printf("Total Runs given: %d",Total_run_given);
    gotoxy(20,44);
    printf("Enter Total Extra Run: ");
    scanf("%d",&Extras);
    Total_Runs=Total_run_given+Extras;
    gotoxy(20,46);
    printf("Final scored in the First Inning: %d - %d",Total_Runs,Total_wicket);
    /*
    putw(Total_wicket,fpp);
    putw(Total_run_given,fpp);
    putw(Total_Runs,fpp);
    */
    Target=Total_Runs+1;
    gotoxy(20,48);
    printf("Target on the Board: %d",Target);
    fprintf(fpp,"%d\t%d\t%d\t%d\t%d\t",Total_wicket,Total_run_given,Extras,Total_Runs,Target);
    fclose(fpp);
    
    gotoxy(20,50);
    printf("Press any key to continue . . . ");
	getch();
	inning_second_bat();
}

void inning_second_bat()
{
	
	system("cls");
	int j;
	getsfilename8:
// 1st Bottom border line... 
    gotoxy(10,8); 
    for(j=0; j<=95; j++)   
    printf("%c",196);
    
    fflush(stdin);
	printf("\n\n\n\t\t\t\tEnter the new file name to continue with 2nd inning batting: ");
//  Bottom border line... 
    gotoxy(10,14); 
    for(j=0; j<=95; j++)   
    printf("%c",196);
    gotoxy(93,11);
    gets(C1.file_name8);

	FILE *fpttr;
    fpttr = fopen(C1.file_name8,"wb");
    if (fpttr == NULL)
    {
    	fflush(stdin);
        printf("\n\n\n\n\n\n\t\t\t\tFile does not exist. Please try again . . .\n");
        printf("\t\t\t\t");
		system("pause");
		system("cls");
		goto getsfilename8;
    }
    printf("\n\n\n\n\n\t\t\t\tFile created successfully.");
    printf("\n\t\t\t\t");
	system("pause");
	
	system("cls");
    gotoxy(10,2);
	printf("\t\t\t\tCricket Scoresheet Second Inning \n\n");
//Top border line
    gotoxy(5,4); 
    for(j=0; j<101; j++)   
    printf("%c", 254);
    printf("\n\n\t\t\t\t\t    Players Record (Team %s)",C1.team_2name);
    
// 1st Bottom border line... 
    gotoxy(5,8); 
    for(j=0; j<=100; j++)   
    printf("%c",196);
    printf("\n\n         SN");
    printf("\tPlayers J.N ");
    printf("\t\t     Players Name ");
    printf("\t\t\tTotal Run Scored");
    //for Serial NO.
    int m,n,c;
    m=9,n=14;
	for(c=1;c<=11;c++)
    {
	 gotoxy(m,n);
	 fflush(stdin);
     printf("%d.",c);
     n=n+2;
 	}
    
//2nd Bottom border line...	
	gotoxy(5,12);
	for(j=0;j<100;j++)
	printf("%c",196);
	
//3nd Bottom border line... 
     gotoxy(5,37); 
     for(j=0; j<=100; j++)   
     printf("%c",254); 
     

//left and right boarder
    for(j=0; j<32; j++)
	{
			gotoxy(5,5+j);
			printf("%c",219);
	
	        gotoxy(105,5+j);
	        printf("%c",219);
    }   
//middle up down boarder   
    for(j=0;j<28;j++)
    {
    		gotoxy(13,9+j);
	        printf("%c",179);
    	
  			gotoxy(30,9+j);
	        printf("%c",179);
	        
	        gotoxy(70,9+j);
	        printf("%c",179);
	}
	
	FILE *fptr;
    fptr=fopen(C1.file_name3,"rb");
	int i,k,l;
	k=16,l=14;
	int T_Run=0;
    while(fread(&P2,sizeof(P2),11,fptr)!=NULL)
{
	for(i=0;i<11;i++)
    {
	 gotoxy(k,l);
	 fflush(stdin);
     printf("%d",P2[i].JN_T1);
     gotoxy(k+25,l);
     fflush(stdin);
     puts(P2[i].P_name_T1);
     gotoxy(k+60,l);
     fflush(stdin);
     scanf("%d",&P5[i].run);
     T_Run+=P5[i].run;
     l=l+2;
 	}
}
	fflush(stdin);
	fclose(fptr);
	
	fwrite(&P5,sizeof(P5),11,fpttr);
	fclose(fpttr);
	
	FILE *fp;
	fp=fopen("runsecond.txt","w");
	fflush(stdin);
	gotoxy(20,40);
    printf("Total Runs scored: %d",T_Run);
    putw(T_Run,fp);
	fclose(fp);
    gotoxy(20,42);
    printf("Press any key to continue . . . ");
	getch();
	inning_second_ball();
}

void inning_second_ball()
{
	system("cls");
	int j;
	getsfilename9:
// 1st Bottom border line... 
    gotoxy(10,8); 
    for(j=0; j<=95; j++)   
    printf("%c",196);
    
    fflush(stdin);
	printf("\n\n\n\t\t\t\tEnter the new file name to continue with 2nd inning balling: ");
//  Bottom border line... 
    gotoxy(10,14); 
    for(j=0; j<=95; j++)   
    printf("%c",196);
    gotoxy(93,11);
    gets(C1.file_name9);

	FILE *fpttr;
    fpttr = fopen(C1.file_name9,"wb");
    if (fpttr == NULL)
    {
    	fflush(stdin);
        printf("\n\n\n\n\n\n\t\t\t\tFile does not exist. Please try again . . .\n");
        printf("\t\t\t\t");
		system("pause");
		system("cls");
		goto getsfilename9;
    }
    printf("\n\n\n\n\n\t\t\t\tFile created successfully.");
    printf("\n\t\t\t\t");
	system("pause");
	
	system("cls");
    gotoxy(10,2);
	printf("\t\t\t\tCricket Scoresheet Second Inning \n\n");
//Top border line
    gotoxy(5,4); 
    for(j=0; j<106; j++)   
    printf("%c", 254);
    printf("\n\n\t\t\t\t\t    Players Record (Team %s)",C1.team_1name);
    
// 1st Bottom border line... 
    gotoxy(5,8); 
    for(j=0; j<=105; j++)   
    printf("%c",196);
    printf("\n\n         SN");
    printf("\tPlayers J.N ");
    printf("\t        Players Name ");
    printf("\t\tTotal Wicket Taken");
    printf("\t Total Runs Given");
    //for Serial NO.
    int m,n,c;
    m=9,n=14;
	for(c=1;c<=11;c++)
    {
	 gotoxy(m,n);
	 fflush(stdin);
     printf("%d.",c);
     n=n+2;
 	}
    
//2nd Bottom border line...	
	gotoxy(5,12);
	for(j=0;j<105;j++)
	printf("%c",196);
	
//3nd Bottom border line... 
     gotoxy(5,37); 
     for(j=0; j<=105; j++)   
     printf("%c",254); 
     

//left and right boarder
    for(j=0; j<32; j++)
	{
			gotoxy(5,5+j);
			printf("%c",219);
	
	        gotoxy(110,5+j);
	        printf("%c",219);
    }   
//middle up down boarder   
    for(j=0;j<28;j++)
    {
    		gotoxy(13,9+j);
	        printf("%c",179);
    	
  			gotoxy(30,9+j);
	        printf("%c",179);
	        
	        gotoxy(60,9+j);
	        printf("%c",179);
	        
	        gotoxy(85,9+j);
	        printf("%c",179);
	}
	
	FILE *fptr;
    fptr=fopen(C1.file_name2,"rb");
	int i,k,l;
	k=16,l=14;
	int Total_wicket=0;
	int Total_run_given=0;
	int Extras;
	int Total_Runs2;
	int Total_Runs;
    while(fread(&P1,sizeof(P1),11,fptr)!=NULL)
{
	for(i=0;i<11;i++)
    {
	 gotoxy(k,l);
	 fflush(stdin);
     printf("%d",P1[i].JN_T1);
     gotoxy(k+20,l);
     fflush(stdin);
     puts(P1[i].P_name_T1);
     gotoxy(k+50,l);
     fflush(stdin);
     scanf("%d",&P6[i].wicket);
     gotoxy(k+75,l);
     scanf("%d",&P6[i].run_given);
     Total_wicket+=P6[i].wicket;
     Total_run_given+=P6[i].run_given;
     l=l+2;
 	}
}
	fflush(stdin);
	fclose(fptr);
	
	fwrite(&P6,sizeof(P6),11,fpttr);
	fclose(fpttr);
	
	FILE *fpp;
	fpp=fopen("finalrunsecond.txt","w");
	fflush(stdin);
	gotoxy(20,40);
    printf("Total wicket taken: %d",Total_wicket);
    gotoxy(20,42);
    printf("Total Runs given: %d",Total_run_given);
    gotoxy(20,44);
    printf("Enter Total Extra Run: ");
    scanf("%d",&Extras);
    Total_Runs2=Total_run_given+Extras;
    gotoxy(20,46);
    printf("Final scored in the Second Inning: %d - %d",Total_Runs2,Total_wicket);

    fprintf(fpp,"%d\t%d\t%d\t%d\t",Total_wicket,Total_run_given,Extras,Total_Runs2);
    fclose(fpp);
    
    int result,Target;
    gotoxy(20,48);
    printf("Press any key to continue . . . ");
	getch();
	system("cls");
	FILE *ffp;
	ffp=fopen("finalrun.txt","r");
	while((fscanf(ffp,"%d\t%d\t%d\t%d\t%d\t",&Total_wicket,&Total_run_given,&Extras,&Total_Runs,&Target))!=EOF)
	{
		if(Total_Runs>Total_Runs2)
		{
			printf("\n\n\n\n\n\n\t\t\t\t\t  Congratulation Team %s !!!",C1.team_1name);
			result=(Total_Runs-Total_Runs2);
			fflush(stdin);
			printf("\n\t\t\t\t\t\tYou won by %d run",result);
		}
		else if(Total_Runs2>Total_Runs)
		{
			printf("\n\n\n\n\n\n\t\t\t\t\t  Congratulation Team %s !!!",C1.team_2name);
			result=(Total_Runs2-Total_Runs);
			fflush(stdin);
			printf("\n\t\t\t\t\t\tYou won by %d run ",result);
		}
		else
		{
			printf("\n\n\n\n\n\n\t\t\t\tMatch Tied !!!");
		}
	}
	fclose(ffp);
	printf("\n\n\n\n\n\t\t\t\t\t\tMatch Summary: ");
// Top Border line... 
    gotoxy(10,13); 
    for(j=0; j<=90; j++)   
    printf("%c",254);
// Second Border line... 
    gotoxy(10,17); 
    for(j=0; j<=90; j++)   
    printf("%c",254);
// Second Border line... 
    gotoxy(10,22); 
    for(j=0; j<=90; j++)   
    printf("%c",196);
// Second Border line... 
    gotoxy(10,26); 
    for(j=0; j<=90; j++)   
    printf("%c",196);
// last Border line... 
    gotoxy(10,31); 
    for(j=0; j<=90; j++)   
    printf("%c",254);
// left and right boarder
    for(j=0; j<17; j++)
	{
			gotoxy(10,14+j);
			printf("%c",219);
	
	        gotoxy(55,14+j);
	        printf("%c",219);
	
	        gotoxy(100,14+j);
	        printf("%c",219);
    }   
// left and right boarder
	for(j=0; j<13; j++)
	{
		gotoxy(33,18+j);
		printf("%c",179);
		
		gotoxy(78,18+j);
		printf("%c",179);
	}
	FILE *fff;
	fff=fopen("finalrun.txt","r");
	while((fscanf(fff,"%d\t%d\t%d\t%d\t%d\t",&Total_wicket,&Total_run_given,&Extras,&Total_Runs,&Target))!=EOF)
	{
		gotoxy(30,15);
		printf("Team %s",C1.team_1name);
		gotoxy(15,20);
		printf("Total Runs: \t\t%d",Total_Runs);
		gotoxy(15,24);
		printf("Total Wicket: \t\t%d",Total_wicket);
		gotoxy(15,28);
		printf("Total Extras: \t\t%d",Extras);	
	}
	fclose(fff);
	FILE *ff;
	ff=fopen("finalrunsecond.txt","r");
	while((fscanf(ff,"%d\t%d\t%d\t%d\t",&Total_wicket,&Total_run_given,&Extras,&Total_Runs2))!=EOF)
	{
		gotoxy(73,15);
		printf("Team %s",C1.team_2name);
		gotoxy(60,20);
		printf("Total Runs: \t\t%d",Total_Runs2);
		gotoxy(60,24);
		printf("Total Wicket: \t\t%d",Total_wicket);
		gotoxy(60,28);
		printf("Total Extras: \t\t%d",Extras);
	}
	fclose(ff);
	gotoxy(15,34);
	printf("Press any key to continue . . . ");
	getch();
	Home();
}

void First_inning_bat()
{
	system("cls");
	int j;
	getsfilename6:
// 1st Bottom border line... 
    gotoxy(10,8); 
    for(j=0; j<=95; j++)   
    printf("%c",196);
    
    fflush(stdin);
	printf("\n\n\n\t\t\t\tEnter the new file name to continue with 1st inning batting: ");
//  Bottom border line... 
    gotoxy(10,14); 
    for(j=0; j<=95; j++)   
    printf("%c",196);
    gotoxy(93,11);
    gets(C1.file_name6);

	FILE *fpttr;
    fpttr = fopen(C1.file_name6,"wb");
    if (fpttr == NULL)
    {
    	fflush(stdin);
        printf("\n\n\n\n\n\n\t\t\t\tFile does not exist. Please try again . . .\n");
        printf("\t\t\t\t");
		system("pause");
		system("cls");
		goto getsfilename6;
    }
    printf("\n\n\n\n\n\t\t\t\tFile created successfully.");
    printf("\n\t\t\t\t");
	system("pause");
	
	system("cls");
    gotoxy(10,2);
	printf("\t\t\t\tCricket Scoresheet First Inning \n\n");
//Top border line
    gotoxy(5,4); 
    for(j=0; j<101; j++)   
    printf("%c", 254);
    printf("\n\n\t\t\t\t\t    Players Record (Team %s)",C1.team_2name);
    
// 1st Bottom border line... 
    gotoxy(5,8); 
    for(j=0; j<=100; j++)   
    printf("%c",196);
    printf("\n\n         SN");
    printf("\tPlayers J.N ");
    printf("\t\t     Players Name ");
    printf("\t\t\tTotal Run Scored");
    //for Serial NO.
    int m,n,c;
    m=9,n=14;
	for(c=1;c<=11;c++)
    {
	 gotoxy(m,n);
	 fflush(stdin);
     printf("%d.",c);
     n=n+2;
 	}
    
//2nd Bottom border line...	
	gotoxy(5,12);
	for(j=0;j<100;j++)
	printf("%c",196);
	
//3nd Bottom border line... 
     gotoxy(5,37); 
     for(j=0; j<=100; j++)   
     printf("%c",254); 
     

//left and right boarder
    for(j=0; j<32; j++)
	{
			gotoxy(5,5+j);
			printf("%c",219);
	
	        gotoxy(105,5+j);
	        printf("%c",219);
    }   
//middle up down boarder   
    for(j=0;j<28;j++)
    {
    		gotoxy(13,9+j);
	        printf("%c",179);
    	
  			gotoxy(30,9+j);
	        printf("%c",179);
	        
	        gotoxy(70,9+j);
	        printf("%c",179);
	}
	
	FILE *fptr;
    fptr=fopen(C1.file_name3,"rb");
	int i,k,l;
	k=16,l=14;
	int T_Run=0;
    while(fread(&P2,sizeof(P2),11,fptr)!=NULL)
{
	for(i=0;i<11;i++)
    {
	 gotoxy(k,l);
	 fflush(stdin);
     printf("%d",P2[i].JN_T1);
     gotoxy(k+25,l);
     fflush(stdin);
     puts(P2[i].P_name_T1);
     gotoxy(k+60,l);
     fflush(stdin);
     scanf("%d",&P3[i].run);
     T_Run+=P3[i].run;
     l=l+2;
 	}
}
	fflush(stdin);
	fclose(fptr);
	
	fwrite(&P3,sizeof(P3),11,fpttr);
	fclose(fpttr);
	
	FILE *fp;
	fp=fopen("secondrun.txt","w");
	fflush(stdin);
	gotoxy(20,40);
    printf("Total Runs scored: %d",T_Run);
    putw(T_Run,fp);
	fclose(fp);
    gotoxy(20,42);
    printf("Press any key to continue . . . ");
	getch();
	First_inning_ball();
}


void First_inning_ball()
{
	system("cls");
	int j;
	getsfilename7:
// 1st Bottom border line... 
    gotoxy(10,8); 
    for(j=0; j<=95; j++)   
    printf("%c",196);
    
    fflush(stdin);
	printf("\n\n\n\t\t\t\tEnter the new file name to continue with 1st inning balling: ");
//  Bottom border line... 
    gotoxy(10,14); 
    for(j=0; j<=95; j++)   
    printf("%c",196);
    gotoxy(93,11);
    gets(C1.file_name7);

	FILE *fpttr;
    fpttr = fopen(C1.file_name7,"wb");
    if (fpttr == NULL)
    {
    	fflush(stdin);
        printf("\n\n\n\n\n\n\t\t\t\tFile does not exist. Please try again . . .\n");
        printf("\t\t\t\t");
		system("pause");
		system("cls");
		goto getsfilename7;
    }
    printf("\n\n\n\n\n\t\t\t\tFile created successfully.");
    printf("\n\t\t\t\t");
	system("pause");
	
	system("cls");
    gotoxy(10,2);
	printf("\t\t\t\tCricket Scoresheet First Inning \n\n");
//Top border line
    gotoxy(5,4); 
    for(j=0; j<106; j++)   
    printf("%c", 254);
    printf("\n\n\t\t\t\t\t    Players Record (Team %s)",C1.team_1name);
    
// 1st Bottom border line... 
    gotoxy(5,8); 
    for(j=0; j<=105; j++)   
    printf("%c",196);
    printf("\n\n         SN");
    printf("\tPlayers J.N ");
    printf("\t        Players Name ");
    printf("\t\tTotal Wicket Taken");
    printf("\t Total Runs Given");
    //for Serial NO.
    int m,n,c;
    m=9,n=14;
	for(c=1;c<=11;c++)
    {
	 gotoxy(m,n);
	 fflush(stdin);
     printf("%d.",c);
     n=n+2;
 	}
    
//2nd Bottom border line...	
	gotoxy(5,12);
	for(j=0;j<105;j++)
	printf("%c",196);
	
//3nd Bottom border line... 
     gotoxy(5,37); 
     for(j=0; j<=105; j++)   
     printf("%c",254); 
     

//left and right boarder
    for(j=0; j<32; j++)
	{
			gotoxy(5,5+j);
			printf("%c",219);
	
	        gotoxy(110,5+j);
	        printf("%c",219);
    }   
//middle up down boarder   
    for(j=0;j<28;j++)
    {
    		gotoxy(13,9+j);
	        printf("%c",179);
    	
  			gotoxy(30,9+j);
	        printf("%c",179);
	        
	        gotoxy(60,9+j);
	        printf("%c",179);
	        
	        gotoxy(85,9+j);
	        printf("%c",179);
	}
	
	FILE *fptr;
    fptr=fopen(C1.file_name2,"rb");
	int i,k,l;
	k=16,l=14;
	int Total_wicket=0;
	int Total_run_given=0;
	int Extras;
	int Total_Runs,Target;
    while(fread(&P1,sizeof(P1),11,fptr)!=NULL)
{
	for(i=0;i<11;i++)
    {
	 gotoxy(k,l);
	 fflush(stdin);
     printf("%d",P1[i].JN_T1);
     gotoxy(k+20,l);
     fflush(stdin);
     puts(P1[i].P_name_T1);
     gotoxy(k+50,l);
     fflush(stdin);
     scanf("%d",&P4[i].wicket);
     gotoxy(k+75,l);
     scanf("%d",&P4[i].run_given);
     Total_wicket+=P4[i].wicket;
     Total_run_given+=P4[i].run_given;
     l=l+2;
 	}
}
	fflush(stdin);
	fclose(fptr);
	
	fwrite(&P4,sizeof(P4),11,fpttr);
	fclose(fpttr);
	
	FILE *fpp;
	fpp=fopen("finalsecondrun.txt","w");
	fflush(stdin);
	gotoxy(20,40);
    printf("Total wicket taken: %d",Total_wicket);
    gotoxy(20,42);
    printf("Total Runs given: %d",Total_run_given);
    gotoxy(20,44);
    printf("Enter Total Extra Run: ");
    scanf("%d",&Extras);
    Total_Runs=Total_run_given+Extras;
    gotoxy(20,46);
    printf("Final scored in the First Inning: %d - %d",Total_Runs,Total_wicket);
    Target=Total_Runs+1;
    gotoxy(20,48);
    printf("Target on the Board: %d",Target);

    fprintf(fpp,"%d\t%d\t%d\t%d\t%d",Total_wicket,Total_run_given,Extras,Total_Runs,Target);
    fclose(fpp);
    
    gotoxy(20,50);
    printf("Press any key to continue . . . ");
	getch();
	Second_inning_bat();
}

void Second_inning_bat()
{
	system("cls");
	int j;
	getsfilename10:
// 1st Bottom border line... 
    gotoxy(10,8); 
    for(j=0; j<=95; j++)   
    printf("%c",196);
    
    fflush(stdin);
	printf("\n\n\n\t\t\t\tEnter the new file name to continue with 2nd inning batting: ");
//  Bottom border line... 
    gotoxy(10,14); 
    for(j=0; j<=95; j++)   
    printf("%c",196);
    gotoxy(93,11);
    gets(C1.file_name10);

	FILE *fpttr;
    fpttr = fopen(C1.file_name10,"wb");
    if (fpttr == NULL)
    {
    	fflush(stdin);
        printf("\n\n\n\n\n\n\t\t\t\tFile does not exist. Please try again . . .\n");
        printf("\t\t\t\t");
		system("pause");
		system("cls");
		goto getsfilename10;
    }
    printf("\n\n\n\n\n\t\t\t\tFile created successfully.");
    printf("\n\t\t\t\t");
	system("pause");
	
	system("cls");
    gotoxy(10,2);
	printf("\t\t\t\tCricket Scoresheet Second Inning \n\n");
//Top border line
    gotoxy(5,4); 
    for(j=0; j<101; j++)   
    printf("%c", 254);
    printf("\n\n\t\t\t\t\t    Players Record (Team %s)",C1.team_1name);
    
// 1st Bottom border line... 
    gotoxy(5,8); 
    for(j=0; j<=100; j++)   
    printf("%c",196);
    printf("\n\n         SN");
    printf("\tPlayers J.N ");
    printf("\t\t     Players Name ");
    printf("\t\t\tTotal Run Scored");
    //for Serial NO.
    int m,n,c;
    m=9,n=14;
	for(c=1;c<=11;c++)
    {
	 gotoxy(m,n);
	 fflush(stdin);
     printf("%d.",c);
     n=n+2;
 	}
    
//2nd Bottom border line...	
	gotoxy(5,12);
	for(j=0;j<100;j++)
	printf("%c",196);
	
//3nd Bottom border line... 
     gotoxy(5,37); 
     for(j=0; j<=100; j++)   
     printf("%c",254); 
     

//left and right boarder
    for(j=0; j<32; j++)
	{
			gotoxy(5,5+j);
			printf("%c",219);
	
	        gotoxy(105,5+j);
	        printf("%c",219);
    }   
//middle up down boarder   
    for(j=0;j<28;j++)
    {
    		gotoxy(13,9+j);
	        printf("%c",179);
    	
  			gotoxy(30,9+j);
	        printf("%c",179);
	        
	        gotoxy(70,9+j);
	        printf("%c",179);
	}
	
	FILE *fptr;
    fptr=fopen(C1.file_name2,"rb");
	int i,k,l;
	k=16,l=14;
	int T_Run=0;
    while(fread(&P1,sizeof(P1),11,fptr)!=NULL)
{
	for(i=0;i<11;i++)
    {
	 gotoxy(k,l);
	 fflush(stdin);
     printf("%d",P1[i].JN_T1);
     gotoxy(k+25,l);
     fflush(stdin);
     puts(P1[i].P_name_T1);
     gotoxy(k+60,l);
     fflush(stdin);
     scanf("%d",&P5[i].run);
     T_Run+=P5[i].run;
     l=l+2;
 	}
}
	fflush(stdin);
	fclose(fptr);
	
	fwrite(&P5,sizeof(P5),11,fpttr);
	fclose(fpttr);
	
	FILE *fp;
	fp=fopen("second_secondrun.txt","w");
	fflush(stdin);
	gotoxy(20,40);
    printf("Total Runs scored: %d",T_Run);
    putw(T_Run,fp);
	fclose(fp);
    gotoxy(20,42);
    printf("Press any key to continue . . . ");
	getch();
	Second_inning_ball();
}

void Second_inning_ball()
{
	system("cls");
	int j;
	getsfilename11:
// 1st Bottom border line... 
    gotoxy(10,8); 
    for(j=0; j<=95; j++)   
    printf("%c",196);
    
    fflush(stdin);
	printf("\n\n\n\t\t\t\tEnter the new file name to continue with 2nd inning balling: ");
//  Bottom border line... 
    gotoxy(10,14); 
    for(j=0; j<=95; j++)   
    printf("%c",196);
    gotoxy(93,11);
    gets(C1.file_name11);

	FILE *fpttr;
    fpttr = fopen(C1.file_name11,"wb");
    if (fpttr == NULL)
    {
    	fflush(stdin);
        printf("\n\n\n\n\n\n\t\t\t\tFile does not exist. Please try again . . .\n");
        printf("\t\t\t\t");
		system("pause");
		system("cls");
		goto getsfilename11;
    }
    printf("\n\n\n\n\n\t\t\t\tFile created successfully.");
    printf("\n\t\t\t\t");
	system("pause");
	
	system("cls");
    gotoxy(10,2);
	printf("\t\t\t\tCricket Scoresheet Second Inning \n\n");
//Top border line
    gotoxy(5,4); 
    for(j=0; j<106; j++)   
    printf("%c", 254);
    printf("\n\n\t\t\t\t\t    Players Record (Team %s)",C1.team_2name);
    
// 1st Bottom border line... 
    gotoxy(5,8); 
    for(j=0; j<=105; j++)   
    printf("%c",196);
    printf("\n\n         SN");
    printf("\tPlayers J.N ");
    printf("\t        Players Name ");
    printf("\t\tTotal Wicket Taken");
    printf("\t Total Runs Given");
    //for Serial NO.
    int m,n,c;
    m=9,n=14;
	for(c=1;c<=11;c++)
    {
	 gotoxy(m,n);
	 fflush(stdin);
     printf("%d.",c);
     n=n+2;
 	}
    
//2nd Bottom border line...	
	gotoxy(5,12);
	for(j=0;j<105;j++)
	printf("%c",196);
	
//3nd Bottom border line... 
     gotoxy(5,37); 
     for(j=0; j<=105; j++)   
     printf("%c",254); 
     

//left and right boarder
    for(j=0; j<32; j++)
	{
			gotoxy(5,5+j);
			printf("%c",219);
	
	        gotoxy(110,5+j);
	        printf("%c",219);
    }   
//middle up down boarder   
    for(j=0;j<28;j++)
    {
    		gotoxy(13,9+j);
	        printf("%c",179);
    	
  			gotoxy(30,9+j);
	        printf("%c",179);
	        
	        gotoxy(60,9+j);
	        printf("%c",179);
	        
	        gotoxy(85,9+j);
	        printf("%c",179);
	}
	
	FILE *fptr;
    fptr=fopen(C1.file_name3,"rb");
	int i,k,l;
	k=16,l=14;
	int Total_wicket=0;
	int Total_run_given=0;
	int Extras;
	int Total_Runs2;
    while(fread(&P2,sizeof(P2),11,fptr)!=NULL)
{
	for(i=0;i<11;i++)
    {
	 gotoxy(k,l);
	 fflush(stdin);
     printf("%d",P2[i].JN_T1);
     gotoxy(k+20,l);
     fflush(stdin);
     puts(P2[i].P_name_T1);
     gotoxy(k+50,l);
     fflush(stdin);
     scanf("%d",&P6[i].wicket);
     gotoxy(k+75,l);
     scanf("%d",&P6[i].run_given);
     Total_wicket+=P6[i].wicket;
     Total_run_given+=P6[i].run_given;
     l=l+2;
 	}
}
	fflush(stdin);
	fclose(fptr);
	
	fwrite(&P6,sizeof(P6),11,fpttr);
	fclose(fpttr);
	
	FILE *fpp;
	fpp=fopen("runsecond_second.txt","w");
	fflush(stdin);
	gotoxy(20,40);
    printf("Total wicket taken: %d",Total_wicket);
    gotoxy(20,42);
    printf("Total Runs given: %d",Total_run_given);
    gotoxy(20,44);
    printf("Enter Total Extra Run: ");
    scanf("%d",&Extras);
    Total_Runs2=Total_run_given+Extras;
    gotoxy(20,46);
    printf("Final scored in the Second Inning: %d - %d",Total_Runs2,Total_wicket);

    fprintf(fpp,"%d\t%d\t%d\t%d\t",Total_wicket,Total_run_given,Extras,Total_Runs2);
    fclose(fpp);
    
    int Total_Runs,result,Target;
    gotoxy(20,48);
    printf("Press any key to continue . . . ");
	getch();
	system("cls");
	FILE *ffp;
	ffp=fopen("finalsecondrun.txt","r");
	while((fscanf(fpp,"%d\t%d\t%d\t%d\t%d\t",&Total_wicket,&Total_run_given,&Extras,&Total_Runs,&Target))!=EOF)
	{
		if(Total_Runs>Total_Runs2)
		{
			printf("\n\n\n\n\n\n\t\t\t\t\t  Congratulation Team %s !!!",C1.team_2name);
			result=(Total_Runs-Total_Runs2);
			fflush(stdin);
			printf("\n\t\t\t\t\t\tYou won by %d run",result);
		}
		else if(Total_Runs2>Total_Runs)
		{
			printf("\n\n\n\n\n\n\t\t\t\t\t  Congratulation Team %s !!!",C1.team_1name);
			result=(Total_Runs2-Total_Runs);
			fflush(stdin);
			printf("\n\t\t\t\t\t\tYou won by %d run ",result);
		}
		
		else
		{
			printf("\n\n\n\n\n\n\t\t\t\tMatch Tied !!!");
		}
	}
	fclose(ffp);
	printf("\n\n\n\n\n\t\t\t\t\t\tMatch Summary: ");
// Top Border line... 
    gotoxy(10,13); 
    for(j=0; j<=90; j++)   
    printf("%c",254);
// Second Border line... 
    gotoxy(10,17); 
    for(j=0; j<=90; j++)   
    printf("%c",254);
// Second Border line... 
    gotoxy(10,22); 
    for(j=0; j<=90; j++)   
    printf("%c",196);
// Second Border line... 
    gotoxy(10,26); 
    for(j=0; j<=90; j++)   
    printf("%c",196);
// last Border line... 
    gotoxy(10,31); 
    for(j=0; j<=90; j++)   
    printf("%c",254);
// left and right boarder
    for(j=0; j<17; j++)
	{
			gotoxy(10,14+j);
			printf("%c",219);
	
	        gotoxy(55,14+j);
	        printf("%c",219);
	
	        gotoxy(100,14+j);
	        printf("%c",219);
    }   
// left and right boarder
	for(j=0; j<13; j++)
	{
		gotoxy(33,18+j);
		printf("%c",179);
		
		gotoxy(78,18+j);
		printf("%c",179);
	}
	FILE *fff;
	fff=fopen("finalsecondrun.txt","r");
	while((fscanf(fff,"%d\t%d\t%d\t%d\t%d\t",&Total_wicket,&Total_run_given,&Extras,&Total_Runs,&Target))!=EOF)
	{
		gotoxy(30,15);
		printf("Team %s",C1.team_2name);
		gotoxy(15,20);
		printf("Total Runs: \t\t%d",Total_Runs);
		gotoxy(15,24);
		printf("Total Wicket: \t\t%d",Total_wicket);
		gotoxy(15,28);
		printf("Total Extras: \t\t%d",Extras);	
	}
	fclose(fff);
	FILE *ff;
	ff=fopen("runsecond_second.txt","r");
	while((fscanf(ff,"%d\t%d\t%d\t%d\t",&Total_wicket,&Total_run_given,&Extras,&Total_Runs2))!=EOF)
	{
		gotoxy(73,15);
		printf("Team %s",C1.team_1name);
		gotoxy(60,20);
		printf("Total Runs: \t\t%d",Total_Runs2);
		gotoxy(60,24);
		printf("Total Wicket: \t\t%d",Total_wicket);
		gotoxy(60,28);
		printf("Total Extras: \t\t%d",Extras);
	}
	fclose(ff);
	gotoxy(15,34);
	printf("Press any key to continue . . . ");
	getch();
	Home();
}

void footballscore()
{
	system("cls");
	int j;
//Top border line
    gotoxy(10,4); 
    for(j=0; j<96; j++)   
    printf("%c", 254);
    
	printf("\n\n\t\t\t\t\t\tFootball Scoresheet\n\n");
	printf("\t\t\t\t\t\t\t\t\t\t1-continue\n\n");
	printf("\t\t\t\t\t\t\t\t\t\t2-go back");

// 1st Bottom border line... 
   gotoxy(10,15); 
   for(j=0; j<=95; j++)   
   printf("%c", 196);
	
	char num;
	printf("\n\n\n\t\t\t\tEnter your choice:");
	
// 2nd Bottom border line... 
   gotoxy(10,25); 
   for(j=0; j<=95; j++)   
   printf("%c", 254);

//right and left border line
    for(j=0; j<20; j++)
	{
	    gotoxy(10,5+j);
	    printf("%c",219);
	
	    gotoxy(105,5+j);
	    printf("%c",219);
	}

	gotoxy(51,18);
	fflush(stdin);
	scanf("%c",&num);

	switch(num)
	{
		case '1':
		    create_footballsheet1();
		    break;
		case '2':
			create();
		    break;
		default:
			printf("\n\n\n\n\n\n\n\n\t\t\t\t\tInvalid choice!!! Please try again . . .\n");
			printf("\t\t\t\t\t");
			system("pause");
			footballscore();
		    break;	
	}
}

void create_footballsheet1()
{
	system("cls");
	int j;
	getsfilename:
	// 1st Bottom border line... 
    gotoxy(10,8); 
    for(j=0; j<=95; j++)   
    printf("%c",196);
    
    fflush(stdin);
	printf("\n\n\n\t\t\t\tEnter the file name to begin with the game details: ");
//  Bottom border line... 
    gotoxy(10,14); 
    for(j=0; j<=95; j++)   
    printf("%c",196);
    gotoxy(84,11);
    gets(F1.file_name);
    
	FILE *fpf;
    fpf = fopen(F1.file_name,"wb");
    if (fpf == NULL)
    {
    	fflush(stdin);
        printf("\n\n\n\n\n\n\t\t\t\tFile does not exist. Please try again . . .\n");
        printf("\t\t\t\t");
		system("pause");
		system("cls");
		goto getsfilename;
    }
    printf("\n\n\n\n\n\t\t\t\tFile created successfully.");
    printf("\n\t\t\t\t");
	system("pause");
	system("cls");
	char cur_time[128];
    time_t t;
    struct tm* ptm;
    t=time(NULL);
    ptm=localtime(&t);
    strftime(cur_time,128,"\n\t\t\t\t\t\t\t\t\t\t\t\t%d-%b-%Y",ptm);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\tCurrent Date: %s\n",cur_time);
	int i;
    gotoxy(5,0);
	
//Top border line
    gotoxy(10,4); 
    for(j=0; j<96; j++)   
    printf("%c", 254);
	printf("\n\n\t\t\t\t\t\tFootball Scoresheet\n\n");
	
// 1st Bottom border line... 
    gotoxy(10,8); 
    for(j=0; j<=95; j++)   
    printf("%c",196);
     
	printf("\n\n\t\tFile name: ");
	printf("\t\t\t\t\tFile code: ");
	printf("\n\n\t\tTime: ");
	printf("\t\t\t\t\t\tLeague: ");
	printf("\n\n\t\tVenue: ");
	printf("\t\t\t\t\t\tDate: ");  
	printf("\n\n\t\tTeam_1 Name: ");
	printf("\t\t\t\t\tTeam_2 Name: ");
	printf("\n\n\t\tTeam_1 Total Players: ");
	printf("\t\t\t\tTeam_2 Total Players: "); 	 
	printf("\n\n\t\tTeam_1 Coach Name: ");
	printf("\t\t\t\tTeam_2 Coach Name: ");
	
//2nd Bottom border line... 
     gotoxy(10,25); 
     for(j=0; j<=95; j++)   
     printf("%c",254); 	

//left and right boarder
    for(j=0; j<20; j++)
	{
	        gotoxy(10,5+j);
	        printf("%c",219);
	
	        gotoxy(105,5+j);
	        printf("%c",219);
    }   
 //middle up down boarder   
    for(j=0;j<16;j++)
    {
  			gotoxy(55,9+j);
	        printf("%c",179);
	}
    printf("\n");
    fflush(stdin);
    gotoxy(27,10);
	puts(F1.file_name);
    gotoxy(75,10);
    scanf("%d",&F1.file_code);
    fflush(stdin);
    gotoxy(22,12);
    gets(F1.time);
    fflush(stdin);
    gotoxy(72,12);
    gets(F1.league);
    fflush(stdin);
    gotoxy(23,14);
    gets(F1.venue);
    fflush(stdin);
    gotoxy(70,14);
    gets(F1.date);
    fflush(stdin);
    gotoxy(29,16);
    gets(F1.team_1name);
    gotoxy(77,16);
    gets(F1.team_2name);
    gotoxy(38,18);
    scanf("%d",&F1.total_no_of_player_team1);
    fflush(stdin);
    gotoxy(86,18);
    scanf("%d",&F1.total_no_of_player_team2);
    fflush(stdin);
    gotoxy(35,20);
    gets(F1.coach_name1);
    fflush(stdin);
    gotoxy(83,20);
    gets(F1.coach_name2);
    fflush(stdin);
    fwrite(&F1,sizeof(F1),1,fpf);
    fclose(fpf);
    char ch;
    opt:
    options:
    gotoxy(20,28);
    printf("\n\t\tWhat you want to do:\n");
    printf("\n\t\t1.Edit");
    printf("\n\t\t2.Continue");
    printf("\n\t\t3.Back");
    printf("\n\n\t\tEnter your choice: ");
	ch=getch();
	switch(ch)
	{
	case '1':	
		Edit_matchdetail_F();
		break;
    case '2':
       	system("cls");
       	F_Players_detail_team1();
    	break;
    case '3':
    	system("cls");
    	create();
    	break;
    default:
    	printf("\n\n\t\tInvalid Choice!!! Please try again . . .");
    	getch();
    	goto opt;
    	break;
	}
	printf("\n\t\t");
    system("pause");
    fwrite(&F1,sizeof(F1),1,fpf);
	fclose(fpf);
}

void Edit_matchdetail_F()
{
	FILE *fpf;
	fpf=fopen(F1.file_name,"wb");
    gotoxy(75,10);
    scanf("%d",&F1.file_code);
    fflush(stdin);
    gotoxy(22,12);
    gets(F1.time);
    fflush(stdin);
    gotoxy(72,12);
    gets(F1.league);
    fflush(stdin);
    gotoxy(23,14);
    gets(F1.venue);
    fflush(stdin);
    gotoxy(70,14);
    gets(F1.date);
    fflush(stdin);
    gotoxy(29,16);
    gets(F1.team_1name);
    gotoxy(77,16);
    gets(F1.team_2name);
    gotoxy(38,18);
    scanf("%d",&F1.total_no_of_player_team1);
    fflush(stdin);
    gotoxy(86,18);
    scanf("%d",&F1.total_no_of_player_team2);
    fflush(stdin);
    gotoxy(35,20);
    gets(F1.coach_name1);
    fflush(stdin);
    gotoxy(83,20);
    gets(F1.coach_name2);
    fflush(stdin);
    fwrite(&F1,sizeof(F1),1,fpf);
	fclose(fpf);
	char ch;
    opt:
	gotoxy(20,28);
    printf("\n\t\tWhat you want to do:\n");
    printf("\n\t\t1.Edit");
    printf("\n\t\t2.Continue");
    printf("\n\t\t3.Back");
    printf("\n\n\t\tEnter your choice: ");
	ch=getch();
	switch(ch)
	{
	case '1':
		Edit_matchdetail_F();
   		break;
    
    case '2':
    	system("cls");
    	F_Players_detail_team1();
 		break;
 	
	case '3':
    	create();
    	break;
    	
    default:
    	printf("\n\n\t\tInvalid Choice!!! Please try again . . .");
    	getch();
    	goto opt;
    	break;
	}
	printf("\n\t\t");
    system("pause");
}

void F_Players_detail_team1()
{
	system("cls");
	int j;
	getsfilename2:
// 1st Bottom border line... 
    gotoxy(10,8); 
    for(j=0; j<=95; j++)   
    printf("%c",196);
    
    fflush(stdin);
	printf("\n\n\n\t\t\t\tEnter the new file name to continue with Player details (team 1):");
//  Bottom border line... 
    gotoxy(10,14); 
    for(j=0; j<=95; j++)   
    printf("%c",196);
    gotoxy(98,11);
    gets(F1.file_name2);
	
	FILE *fpf;
    fpf = fopen(F1.file_name2,"wb");
    if (fpf == NULL)
    {
    	fflush(stdin);
        printf("\n\n\n\n\n\n\t\t\t\tFile does not exist. Please try again . . .\n");
        printf("\t\t\t\t");
		system("pause");
		system("cls");
		goto getsfilename2;
    }
    printf("\n\n\n\n\n\t\t\t\tFile created successfully.");
    printf("\n\t\t\t\t");
	system("pause");
	P:
	system("cls");
    gotoxy(10,2);
	printf("\t\t\t\t\tFootball Scoresheet\n\n");
//Top border line
    gotoxy(5,4); 
    for(j=0; j<101; j++)   
    printf("%c", 254);
    printf("\n\n\t\t\t\t\t    Players Detail (Team %s)",F1.team_1name);
    
// 1st Bottom border line... 
    gotoxy(5,8); 
    for(j=0; j<=100; j++)   
    printf("%c",196);
    printf("\n\n         SN");
    printf("\tPlayers J.N ");
    printf("\t\t     Players Name ");
    printf("\t\t\tPlayers Position");
    //for Serial NO.
    int m,n,c;
    m=9,n=14;
	for(c=1;c<=11;c++)
    {
	 gotoxy(m,n);
	 fflush(stdin);
     printf("%d.",c);
     n=n+2;
 	}
    
//2nd Bottom border line...	
	gotoxy(5,12);
	for(j=0;j<100;j++)
	printf("%c",196);
	
//3nd Bottom border line... 
     gotoxy(5,37); 
     for(j=0; j<=100; j++)   
     printf("%c",254); 
     

//left and right boarder
    for(j=0; j<32; j++)
	{
			gotoxy(5,5+j);
			printf("%c",219);
	
	        gotoxy(105,5+j);
	        printf("%c",219);
    }   
//middle up down boarder   
    for(j=0;j<28;j++)
    {
    		gotoxy(13,9+j);
	        printf("%c",179);
    	
  			gotoxy(30,9+j);
	        printf("%c",179);
	        
	        gotoxy(70,9+j);
	        printf("%c",179);
	}
	int i,k,l;
	k=16,l=14;
	
	for(i=0;i<11;i++)
    {
	 gotoxy(k,l);
	 fflush(stdin);
     scanf("%d",&Q1[i].JN_T1);
     gotoxy(k+25,l);
     fflush(stdin);
     gets(Q1[i].P_name_T1);
     gotoxy(k+60,l);
     fflush(stdin);
     gets(Q1[i].P_position_T1);
     l=l+2;
 	}
 	fwrite(&Q1,sizeof(Q1),11,fpf);
 	option:
    gotoxy(20,40);
    printf("\n\t\tWhat you want to do:\n");
    printf("\n\t\t1.Edit");
    printf("\n\t\t2.Continue");
    printf("\n\t\t3.Back");
    printf("\n\n\t\tEnter your choice: ");
    char ch;
	ch=getch();
	
	switch(ch)
	{
		case '1':
			fpf = fopen(F1.file_name2,"wb");
			goto P;
			break;
			
		case '2':
			system("cls");
			F_Players_detail_team2();
			break;
		case '3':
			system("cls");
			create();
			break;
		default:
			printf("\n\n\t\tInvalid Choice!!! Please try again . . .");
    		getch();
    		goto option;
    		break;
	}
 	fclose(fpf);
}

void F_Players_detail_team2()
{
	system("cls");
	int j;
	getsfilename3:
// 1st Bottom border line... 
    gotoxy(10,8); 
    for(j=0; j<=95; j++)   
    printf("%c",196);
    
    fflush(stdin);
	printf("\n\n\n\t\t\t\tEnter the new file name to continue with Player details (team 2):");
//  Bottom border line... 
    gotoxy(10,14); 
    for(j=0; j<=95; j++)   
    printf("%c",196);
    gotoxy(98,11);
    gets(F1.file_name3);
	
	FILE *fpf;
    fpf = fopen(F1.file_name3,"wb");
    if (fpf == NULL)
    {
    	fflush(stdin);
        printf("\n\n\n\n\n\n\t\t\t\tFile does not exist. Please try again . . .\n");
        printf("\t\t\t\t");
		system("pause");
		system("cls");
		goto getsfilename3;
    }
    printf("\n\n\n\n\n\t\t\t\tFile created successfully.");
    printf("\n\t\t\t\t");
	system("pause");
	pp:
	system("cls");
    gotoxy(10,2);
	printf("\t\t\t\t\tFootball Scoresheet\n\n");
//Top border line
    gotoxy(5,4); 
    for(j=0; j<101; j++)   
    printf("%c", 254);
    printf("\n\n\t\t\t\t\t    Players Detail (Team %s)",F1.team_2name);
    
// 1st Bottom border line... 
    gotoxy(5,8); 
    for(j=0; j<=100; j++)   
    printf("%c",196);
    printf("\n\n         SN");
    printf("\tPlayers J.N ");
    printf("\t\t     Players Name ");
    printf("\t\t\tPlayers Position");
    
    //for Serial NO.
    int m,n,c;
    m=9,n=14;
	for(c=1;c<=11;c++)
    {
	 gotoxy(m,n);
	 fflush(stdin);
     printf("%d.",c);
     n=n+2;
 	}
    
//2nd Bottom border line...	
	gotoxy(5,12);
	for(j=0;j<100;j++)
	printf("%c",196);
	
//3nd Bottom border line... 
     gotoxy(5,37); 
     for(j=0; j<=100; j++)   
     printf("%c",254); 
     

//left and right boarder
    for(j=0; j<32; j++)
	{
			gotoxy(5,5+j);
			printf("%c",219);
	
	        gotoxy(105,5+j);
	        printf("%c",219);
    }   
//middle up down boarder   
    for(j=0;j<28;j++)
    {
    		gotoxy(13,9+j);
	        printf("%c",179);
    	
  			gotoxy(30,9+j);
	        printf("%c",179);
	        
	        gotoxy(70,9+j);
	        printf("%c",179);
	}
	int i,k,l;
	k=16,l=14;
	
	for(i=0;i<11;i++)
    {
	 gotoxy(k,l);
	 fflush(stdin);
     scanf("%d",&Q2[i].JN_T1);
     gotoxy(k+25,l);
     fflush(stdin);
     gets(Q2[i].P_name_T1);
     gotoxy(k+60,l);
     fflush(stdin);
     gets(Q2[i].P_position_T1);
     l=l+2;
 	}
 	fwrite(&Q2,sizeof(Q2),11,fpf);
 	opps:
    gotoxy(20,40);
    printf("\n\t\tWhat you want to do:\n");
    printf("\n\t\t1.Edit");
    printf("\n\t\t2.Continue");
    printf("\n\t\t3.Back");
    printf("\n\n\t\tEnter your choice: ");
    char ch;
	ch=getch();
	
	switch(ch)
	{
		case '1':
			fpf = fopen(F1.file_name3,"wb");
			goto pp;
			break;
			
		case '2':
			Football_record1();
			break;
		case '3':
			system("cls");
			create();
			break;
		default:
			printf("\n\n\t\tInvalid Choice!!! Please try again . . .");
    		getch();
    		goto opps;
    		break;
	}
 	fclose(fpf);
}

void Football_record1()
{
	system("cls");
	int j;
	getsfilename4:
// 1st Bottom border line... 
    gotoxy(10,8); 
    for(j=0; j<=95; j++)   
    printf("%c",196);
    
    fflush(stdin);
	printf("\n\n\n\t\t\t\tEnter the new file name to continue with Football Scoresheet (team 1): ");
//  Bottom border line... 
    gotoxy(10,14); 
    for(j=0; j<=95; j++)   
    printf("%c",196);
    gotoxy(103,11);
    gets(F1.file_name4);

	FILE *fpttr;
    fpttr = fopen(F1.file_name4,"wb");
    if (fpttr == NULL)
    {
    	fflush(stdin);
        printf("\n\n\n\n\n\n\t\t\t\tFile does not exist. Please try again . . .\n");
        printf("\t\t\t\t");
		system("pause");
		system("cls");
		goto getsfilename4;
    }
    printf("\n\n\n\n\n\t\t\t\tFile created successfully.");
    printf("\n\t\t\t\t");
	system("pause");
	
	system("cls");
    gotoxy(10,2);
	printf("\t\t\t\t\tFootball Scoresheet \n\n");
//Top border line
    gotoxy(5,4); 
    for(j=0; j<106; j++)   
    printf("%c", 254);
    printf("\n\n\t\t\t\t\t    Players Record (Team %s)",F1.team_1name);
    
// 1st Bottom border line... 
    gotoxy(5,8); 
    for(j=0; j<=105; j++)   
    printf("%c",196);
    printf("\n\n         SN");
    printf("\tPlayers J.N ");
    printf("\t        Players Name ");
    printf("\t\t   Total shoot");
    printf("\t\tTotal goal");
    //for Serial NO.
    int m,n,c;
    m=9,n=14;
	for(c=1;c<=11;c++)
    {
	 gotoxy(m,n);
	 fflush(stdin);
     printf("%d.",c);
     n=n+2;
 	}
    
//2nd Bottom border line...	
	gotoxy(5,12);
	for(j=0;j<105;j++)
	printf("%c",196);
	
//3nd Bottom border line... 
     gotoxy(5,37); 
     for(j=0; j<=105; j++)   
     printf("%c",254); 
     

//left and right boarder
    for(j=0; j<32; j++)
	{
			gotoxy(5,5+j);
			printf("%c",219);
	
	        gotoxy(110,5+j);
	        printf("%c",219);
    }   
//middle up down boarder   
    for(j=0;j<28;j++)
    {
    		gotoxy(13,9+j);
	        printf("%c",179);
    	
  			gotoxy(30,9+j);
	        printf("%c",179);
	        
	        gotoxy(60,9+j);
	        printf("%c",179);
	        
	        gotoxy(85,9+j);
	        printf("%c",179);
	}
	
	FILE *fptr;
    fptr=fopen(F1.file_name2,"rb");
	int i,k,l;
	k=16,l=14;
	int Total_shoot=0;
	int Total_goal=0;
	int saved,misconduct,assist;
    while(fread(&Q1,sizeof(Q1),11,fptr)!=NULL)
{
	for(i=0;i<11;i++)
    {
	 gotoxy(k,l);
	 fflush(stdin);
     printf("%d",Q1[i].JN_T1);
     gotoxy(k+20,l);
     fflush(stdin);
     puts(Q1[i].P_name_T1);
     gotoxy(k+50,l);
     fflush(stdin);
     scanf("%d",&Q3[i].shoot);
     gotoxy(k+75,l);
     scanf("%d",&Q3[i].goal);
     Total_shoot+=Q3[i].shoot;
     Total_goal+=Q3[i].goal;
     l=l+2;
 	}
}
	fflush(stdin);
	fclose(fptr);
	
	fwrite(&Q3,sizeof(Q3),11,fpttr);
	fclose(fpttr);
	
	FILE *fpp;
	fpp=fopen("football_team1.txt","w");
	fflush(stdin);
	gotoxy(20,40);
	printf("Enter total misconduct: ");
    scanf("%d",&misconduct);
    gotoxy(20,42);
    printf("Enter total saved: ");
    scanf("%d",&saved);
    gotoxy(20,44);
    printf("Enter total assist: ");
    scanf("%d",&assist);
    gotoxy(20,48);
    printf("Total shoot made: %d",Total_shoot);
    gotoxy(20,50);
    printf("Total goal scored: %d",Total_goal);

    fprintf(fpp,"%d\t%d\t%d\t%d\t%d",misconduct,saved,assist,Total_shoot,Total_goal);
    fclose(fpp);
    
    gotoxy(20,54);
    printf("Press any key to continue . . . ");
	getch();
	Football_record2();
}

void Football_record2()
{
	system("cls");
	int j;
	getsfilename5:
// 1st Bottom border line... 
    gotoxy(10,8); 
    for(j=0; j<=95; j++)   
    printf("%c",196);
    
    fflush(stdin);
	printf("\n\n\n\t\t\t\tEnter the new file name to continue with Football Scoresheet (team 2): ");
//  Bottom border line... 
    gotoxy(10,14); 
    for(j=0; j<=95; j++)   
    printf("%c",196);
    gotoxy(103,11);
    gets(F1.file_name5);

	FILE *fpttr;
    fpttr = fopen(F1.file_name5,"wb");
    if (fpttr == NULL)
    {
    	fflush(stdin);
        printf("\n\n\n\n\n\n\t\t\t\tFile does not exist. Please try again . . .\n");
        printf("\t\t\t\t");
		system("pause");
		system("cls");
		goto getsfilename5;
    }
    printf("\n\n\n\n\n\t\t\t\tFile created successfully.");
    printf("\n\t\t\t\t");
	system("pause");
	
	system("cls");
    gotoxy(10,2);
	printf("\t\t\t\t\tFootball Scoresheet \n\n");
//Top border line
    gotoxy(5,4); 
    for(j=0; j<106; j++)   
    printf("%c", 254);
    printf("\n\n\t\t\t\t\t    Players Record (Team %s)",F1.team_2name);
    
// 1st Bottom border line... 
    gotoxy(5,8); 
    for(j=0; j<=105; j++)   
    printf("%c",196);
    printf("\n\n         SN");
    printf("\tPlayers J.N ");
    printf("\t        Players Name ");
    printf("\t\t   Total shoot");
    printf("\t\tTotal goal");
    //for Serial NO.
    int m,n,c;
    m=9,n=14;
	for(c=1;c<=11;c++)
    {
	 gotoxy(m,n);
	 fflush(stdin);
     printf("%d.",c);
     n=n+2;
 	}
    
//2nd Bottom border line...	
	gotoxy(5,12);
	for(j=0;j<105;j++)
	printf("%c",196);
	
//3nd Bottom border line... 
     gotoxy(5,37); 
     for(j=0; j<=105; j++)   
     printf("%c",254); 
     

//left and right boarder
    for(j=0; j<32; j++)
	{
			gotoxy(5,5+j);
			printf("%c",219);
	
	        gotoxy(110,5+j);
	        printf("%c",219);
    }   
//middle up down boarder   
    for(j=0;j<28;j++)
    {
    		gotoxy(13,9+j);
	        printf("%c",179);
    	
  			gotoxy(30,9+j);
	        printf("%c",179);
	        
	        gotoxy(60,9+j);
	        printf("%c",179);
	        
	        gotoxy(85,9+j);
	        printf("%c",179);
	}
	
	FILE *fptr;
    fptr=fopen(F1.file_name3,"rb");
	int i,k,l;
	k=16,l=14;
	int Total_shoot=0;
	int Total_goal2=0;
	int misconduct,saved,assist;
    while(fread(&Q2,sizeof(Q2),11,fptr)!=NULL)
{
	for(i=0;i<11;i++)
    {
	 gotoxy(k,l);
	 fflush(stdin);
     printf("%d",Q2[i].JN_T1);
     gotoxy(k+20,l);
     fflush(stdin);
     puts(Q2[i].P_name_T1);
     gotoxy(k+50,l);
     fflush(stdin);
     scanf("%d",&Q4[i].shoot);
     gotoxy(k+75,l);
     scanf("%d",&Q4[i].goal);
     Total_shoot+=Q4[i].shoot;
     Total_goal2+=Q4[i].goal;
     l=l+2;
 	}
}
	fflush(stdin);
	fclose(fptr);
	
	fwrite(&Q4,sizeof(Q4),11,fpttr);
	fclose(fpttr);
	
	FILE *fpp;
	fpp=fopen("football_team2.txt","w");
	fflush(stdin);
	gotoxy(20,40);
	printf("Enter total misconduct: ");
    scanf("%d",&misconduct);
    gotoxy(20,42);
    printf("Enter total saved: ");
    scanf("%d",&saved);
    gotoxy(20,44);
    printf("Enter total assist: ");
    scanf("%d",&assist);
    gotoxy(20,48);
    printf("Total shoot made: %d",Total_shoot);
    gotoxy(20,50);
    printf("Total goal scored: %d",Total_goal2);

    fprintf(fpp,"%d\t%d\t%d\t%d\t%d",misconduct,saved,assist,Total_shoot,Total_goal2);
    fclose(fpp);
    
    int result,Total_goal;
    gotoxy(20,54);
    printf("Press any key to continue . . . ");
	getch();
	system("cls");
	FILE *ffp;
	ffp=fopen("football_team1.txt","r");
	while((fscanf(fpp,"%d\t%d\t%d\t%d\t%d",&misconduct,&saved,&assist,&Total_shoot,&Total_goal))!=EOF)
	{
		if(Total_goal>Total_goal2)
		{
			printf("\n\n\n\n\n\n\t\t\t\tCongratulation Team %s !!!",F1.team_1name);
			printf("\n\t\t\t\t%s: %d",F1.team_1name,Total_goal);
			printf("\n\t\t\t\t%s: %d",F1.team_2name,Total_goal2);
			//printf("\n\n\t\t\t\tPress any key to continue . . .");
			//getch();
		}
		else if(Total_goal2>Total_goal)
		{
			printf("\n\n\n\n\n\n\t\t\t\tCongratulation Team %s !!!",F1.team_2name);
			printf("\n\t\t\t\t%s: %d",F1.team_1name,Total_goal);
			printf("\n\t\t\t\t%s: %d",F1.team_2name,Total_goal2);
			//printf("\n\n\t\t\t\tPress any key to continue . . . ");
			//getch();
		}
		else
		{
			printf("\n\t\t\t\tMatch Tied !!!");
			printf("\n\t\t\t\t%s: %d",F1.team_1name,Total_goal);
			printf("\n\t\t\t\t%s: %d",F1.team_2name,Total_goal2);
			//printf("\n\n\t\t\t\tPress any key to continue . . . ");
			//getch();
		}
	}
	fclose(ffp);
	printf("\n\n\n\t\t\t\t\t\tMatch Summary: ");
// Top Border line... 
    gotoxy(10,13); 
    for(j=0; j<=90; j++)   
    printf("%c",254);
// Second Border line... 
    gotoxy(10,17); 
    for(j=0; j<=90; j++)   
    printf("%c",254);
// Second Border line... 
    gotoxy(10,22); 
    for(j=0; j<=90; j++)   
    printf("%c",196);
// Second Border line... 
    gotoxy(10,26); 
    for(j=0; j<=90; j++)   
    printf("%c",196);
// Second Border line... 
    gotoxy(10,30); 
    for(j=0; j<=90; j++)   
    printf("%c",196);
// Second Border line... 
    gotoxy(10,34); 
    for(j=0; j<=90; j++)   
    printf("%c",196);
// last Border line... 
    gotoxy(10,39); 
    for(j=0; j<=90; j++)   
    printf("%c",254);
// left and right boarder
    for(j=0; j<25; j++)
	{
			gotoxy(10,14+j);
			printf("%c",219);
	
	        gotoxy(55,14+j);
	        printf("%c",219);
	
	        gotoxy(100,14+j);
	        printf("%c",219);
    }   
// left and right boarder
	for(j=0; j<21; j++)
	{
		gotoxy(33,18+j);
		printf("%c",179);
		
		gotoxy(78,18+j);
		printf("%c",179);
	}
	FILE *fff;
	fff=fopen("football_team1.txt","r");
	while((fscanf(fpp,"%d\t%d\t%d\t%d\t%d",&misconduct,&saved,&assist,&Total_shoot,&Total_goal))!=EOF)
	{
		gotoxy(30,15);
		printf("Team %s",F1.team_1name);
		gotoxy(15,20);
		printf("Total goals: \t\t%d",Total_goal);
		gotoxy(15,24);
		printf("Total shoots: \t\t%d",Total_shoot);
		gotoxy(15,28);
		printf("Total saved: \t\t%d",saved);
		gotoxy(15,32);
		printf("Total misconduct: \t%d",misconduct);
		gotoxy(15,36);
		printf("Total assist: \t\t%d",assist);	
	}
	fclose(fff);
	FILE *ff;
	ff=fopen("football_team2.txt","r");
	while((fscanf(ff,"%d\t%d\t%d\t%d\t%d",&misconduct,&saved,&assist,&Total_shoot,&Total_goal2))!=EOF)
	{
		gotoxy(73,15);
		printf("Team %s",F1.team_2name);
		gotoxy(60,20);
		printf("Total goals: \t\t%d",Total_goal2);
		gotoxy(60,24);
		printf("Total shoots: \t\t%d",Total_shoot);
		gotoxy(60,28);
		printf("Total saved: \t\t%d",saved);
		gotoxy(60,32);
		printf("Total misconduct: \t\t%d",misconduct);
		gotoxy(60,36);
		printf("Total assist: \t\t%d",assist);	
	}
	fclose(ff);
	gotoxy(15,41);
	printf("Press any key to continue . . . ");
	getch();
	Home();
}

void browse()                               //TO browse and edit a scoresheet
{
	system("cls");
    int j;

//Top border line
    gotoxy(10,4); 
    for(j=0; j<96; j++)   
    printf("%c", 254);
    
    printf("\n\t\t\t\t\tselect a sport which you wanna browse:\n\n");
	printf("\n\n\t\t1.Cricket");
	printf("\n\n\t\t2.Football");
	printf("\n\n\t\t3.Back");
// 1st Bottom border line... 
    gotoxy(10,15); 
    for(j=0; j<=95; j++)   
    printf("%c", 196);
	
	int num;
	printf("\n\n\n\t\t\tEnter your choice: ");
	
// 2nd Bottom border line... 
    gotoxy(10,25); 
    for(j=0; j<=95; j++)   
    printf("%c", 254);
	
//right and left border line
    for(j=0; j<20; j++)
	{
	    gotoxy(10,5+j);
	    printf("%c",219);

	    gotoxy(105,5+j);
	    printf("%c",219);
	}

	gotoxy(43,18);
	fflush(stdin);
	scanf("%d",&num);
	
	switch(num)
	{
		case 1:
			view_cricketscore();
			break;
		case 2:
			view_footballscore();
			break;
		case 3:
			Home();
			break;
		default:	
			printf("\n\n\n\n\n\n\n\n\t\t\t\t\tInvalid choice!!! Please try again . . .\n");
			printf("\t\t\t\t\t");
			system("pause");
			browse();
			break;
	}
}
	
void view_cricketscore()
{
	system("cls");
	int j;

//Top border line
    gotoxy(10,4); 
    for(j=0; j<96; j++)   
    printf("%c", 254);

	printf("\n\t\t\t\t\t\tCricket Scoresheet\n\n");
	printf("\t\t\t\t\t\t\t\t\t\t1-continue\n\n");
	printf("\t\t\t\t\t\t\t\t\t\t2-go back");

// 1st Bottom border line... 
   gotoxy(10,15); 
   for(j=0; j<=95; j++)   
   printf("%c", 196);
	
	char num;
	printf("\n\n\n\t\t\t\tEnter your choice:");
// 2nd Bottom border line... 
   gotoxy(10,25); 
   for(j=0; j<=95; j++)   
   printf("%c", 254);
   
//right and left border line
    for(j=0; j<20; j++)
	{
	    gotoxy(10,5+j);
	    printf("%c",219);
	
	    gotoxy(105,5+j);
	    printf("%c",219);
	}
	
	gotoxy(51,18);
	fflush(stdin);
	scanf("%c",&num);
	
	switch(num){
		case '1':
		    browse_cricket();
		    break;
		case '2':
			browse();
		    break;
		default:
			printf("\n\n\n\n\n\n\n\n\t\t\t\t\tInvalid choice!!! Please try again . . .\n");
			printf("\t\t\t\t\t");
			system("pause");
			view_cricketscore();
		    break;	
	}
}	

void browse_cricket()
{
	system("cls");
	int j;

//top border line...
	gotoxy(10,4);
	for(j=0;j<96;j++)
	printf("%c",254);
	
	printf("\n\t\t1.Browse cricket scoresheet\n\n");
	printf("\t\t2.search cricket scoresheet\n\n");
	printf("\t\t3.Back\n");
	printf("\n\n\t\t\t\t\t\t\t\t\t\t1-access cricket files\n");
	printf("\t\t\t\t\t\t\t\t\t\t2-search cricket files\n");
	printf("\t\t\t\t\t\t\t\t\t\t3-go back to browse file\n\n");

// 1st bottom border line
	gotoxy(10,15);
	for(j=0;j<96;j++)
	printf("%c",196);

	char num;
	printf("\n\n\n\t\t\t\tEnter your choice:");

// 2nd bottom border line
	gotoxy(10,25);
	for(j=0;j<96;j++)
	printf("%c",254);	

//right and left border line
    for(j=0; j<20; j++)
	{
	    gotoxy(10,5+j);
	    printf("%c",219);
	
	    gotoxy(105,5+j);
	    printf("%c",219);
	}
    	
	gotoxy(51,18);
	fflush(stdin);
    scanf("%c",&num);

    switch(num)
	{
	    case '1':
		    Cricket();
		    break;
	    case '2':
		    search_cricket();
	        break;
	    case '3':
		    browse();
		    break;
	    default:
			printf("\n\n\n\n\n\n\n\n\t\t\t\t\tInvalid choice!!! Please try again . . .\n");
			printf("\t\t\t\t\t");
		    system("pause");
		    browse_cricket();
		    break;
	}
}

void Cricket()
{
	FILE *fptr;
	chk:
	system("cls");
   	int j;
// 1st Bottom border line... 
    gotoxy(10,8); 
    for(j=0; j<=95; j++)   
    printf("%c",196);
    
    fflush(stdin);
	printf("\n\n\n\t\t\t\tEnter the file name you want to view game details: ");
//  Bottom border line... 
    gotoxy(10,14); 
    for(j=0; j<=95; j++)   
    printf("%c",196);
    gotoxy(83,11);
    gets(C1.chk_filename);
   	fptr=fopen(C1.chk_filename,"rb");
   	if(fptr==NULL)
   	{
   		fflush(stdin);
   		printf("\n\n\n\n\t\t\t\tFile not found. Please try again . . . \n\t\t\t\t");
		system("pause");
   		goto chk;
	}
	else
	{
		printf("\n\n\n\n\t\t\t\tFile found successfully.\n\t\t\t\t");
		system("pause");
		Cricket_display();
	}
	fclose(fptr);
}
		
void Cricket_display()
{
	system("cls");
	FILE *fptr;
	fptr=fopen(C1.chk_filename,"rb");
	int i,j;
	char ch;
    gotoxy(5,0);
	
//Top border line
    gotoxy(10,4); 
    for(j=0; j<96; j++)   
    printf("%c", 254);
	printf("\n\n\t\t\t\t\t\tCricket Scoresheet\n\n");
	
// 1st Bottom border line... 
    gotoxy(10,8); 
    for(j=0; j<=95; j++)   
    printf("%c",196);
     
	printf("\n\n\t\tFile name: ");
	printf("\t\t\t\t\tFile code: ");
	printf("\n\n\t\tNo of overs: ");
	printf("\t\t\t\t\tLeague: ");
	printf("\n\n\t\tVenue: ");
	printf("\t\t\t\t\t\tDate: ");  
	printf("\n\n\t\tTeam_1 Name: ");
	printf("\t\t\t\t\tTeam_2 Name: ");
	printf("\n\n\t\tTeam_1 Total Players: ");
	printf("\t\t\t\tTeam_2 Total Players: "); 	 
	
//2nd Bottom border line... 
     gotoxy(10,25); 
     for(j=0; j<=95; j++)   
     printf("%c",254); 	

//left and right boarder
    for(j=0; j<20; j++)
	{
	        gotoxy(10,5+j);
	        printf("%c",219);
	
	        gotoxy(105,5+j);
	        printf("%c",219);
    }   
 //middle up down boarder   
    for(j=0;j<16;j++)
    {
  			gotoxy(55,9+j);
	        printf("%c",179);
	}
while(fread(&C1,sizeof(C1),1,fptr)!=NULL)	
{
    printf("\n");
    gotoxy(27,10);
    fflush(stdin);
	puts(C1.file_name);
    gotoxy(75,10);
    fflush(stdin);
    printf("%d",C1.file_code);
    gotoxy(29,12);
    fflush(stdin);
    printf("%d",C1.no_of_overs);
    gotoxy(72,12);
    fflush(stdin);
    puts(C1.league);
    gotoxy(23,14);
    fflush(stdin);
    puts(C1.venue);
    gotoxy(70,14);
    fflush(stdin);
    puts(C1.date);
    gotoxy(29,16);
    fflush(stdin);
    puts(C1.team_1name);
    gotoxy(77,16);
    fflush(stdin);
    puts(C1.team_2name);
    gotoxy(38,18);
    fflush(stdin);
    printf("%d",C1.total_no_of_player_team1);
    gotoxy(86,18);
    fflush(stdin);
    printf("%d",C1.total_no_of_player_team2);
}
	fwrite(&C1,sizeof(C1),1,fptr);
	opt:
	 gotoxy(20,28);
    printf("\n\t\tWhat you want to do:\n");
    printf("\n\t\t1.Edit");
    printf("\n\t\t2.Continue");
    printf("\n\t\t0.Back");
    printf("\n\n\t\tEnter your choice: ");
	ch=getch();
	
	switch(ch)
	{
	case '1':
	Edit_matchdetail_C();
    break;
    
    case '2':
    system("cls");
    C_Player_det1();
 	break;
 	
	case '0':
    	browse();
    	break;
    	
    default:
    	printf("\n\n\t\tInvalid Choice!!! Please try again . . .");
    	getch();
    	goto opt;
    	break;
	}
	//printf("\n\n\n\n\n\n\n\n\n\t\t");				//Players detail
    //printf("Press any key to view more . . . ");
    getch();
    fclose(fptr);
    
}

void C_Player_det1()
{
    FILE *fptr;
	chk2:
	system("cls");
   	int j;
// 1st Bottom border line... 
    gotoxy(10,8); 
    for(j=0; j<=95; j++)   
    printf("%c",196);
    
    fflush(stdin);
	printf("\n\n\n\t\t\t\tEnter the new file name to view Player details (team 1): ");
//  Bottom border line... 
    gotoxy(10,14); 
    for(j=0; j<=95; j++)   
    printf("%c",196);
    gotoxy(89,11);
    gets(C1.chk_filename2);
   	fptr=fopen(C1.chk_filename2,"rb");
   	if(fptr==NULL)
   	{
   		fflush(stdin);
   		printf("\n\n\n\n\t\t\t\tFile not found. Please try again . . . \n\t\t\t\t");
		system("pause");
   		goto chk2;
	}
	else
	{
		printf("\n\n\n\n\t\t\t\tFile found successfully.\n\t\t\t\t");
		system("pause");
	}
	system("cls");
    gotoxy(10,2);
	printf("\t\t\t\t\tCricket Scoresheet\n\n");
//Top border line
    gotoxy(5,4); 
    for(j=0; j<101; j++)   
    printf("%c", 254);
    printf("\n\n\t\t\t\t\t    Players Detail (Team %s)",C1.team_1name);
    
// 1st Bottom border line... 
    gotoxy(5,8); 
    for(j=0; j<=100; j++)   
    printf("%c",196);
    printf("\n\n         SN");
    printf("\tPlayers J.N ");
    printf("\t\t     Players Name ");
    printf("\t\t\tPlayers Position");
    //for Serial NO.
    int m,n,c;
    m=9,n=14;
	for(c=1;c<=11;c++)
    {
	 gotoxy(m,n);
	 fflush(stdin);
     printf("%d.",c);
     n=n+2;
 	}
    
//2nd Bottom border line...	
	gotoxy(5,12);
	for(j=0;j<100;j++)
	printf("%c",196);
	
//3nd Bottom border line... 
     gotoxy(5,37); 
     for(j=0; j<=100; j++)   
     printf("%c",254); 
     

//left and right boarder
    for(j=0; j<32; j++)
	{
			gotoxy(5,5+j);
			printf("%c",219);
	
	        gotoxy(105,5+j);
	        printf("%c",219);
    }   
//middle up down boarder   
    for(j=0;j<28;j++)
    {
    		gotoxy(13,9+j);
	        printf("%c",179);
    	
  			gotoxy(30,9+j);
	        printf("%c",179);
	        
	        gotoxy(70,9+j);
	        printf("%c",179);
	}
	int i,k,l;
	k=16,l=14;
while(fread(&P1,sizeof(P1),11,fptr)!=NULL)
{
	for(i=0;i<11;i++)
    {
	 gotoxy(k,l);
	 fflush(stdin);
     printf("%d",P1[i].JN_T1);
     gotoxy(k+25,l);
     fflush(stdin);
     puts(P1[i].P_name_T1);
     gotoxy(k+60,l);
     fflush(stdin);
     puts(P1[i].P_position_T1);
     l=l+2;
 	}
}
	fclose(fptr);
	fflush(stdin);
	gotoxy(20,40);
    printf("Press any key to view more . . . ");
    getch();
    C_Player_det2();
}

void C_Player_det2()
{
    FILE *fptr;
	chk3:
	system("cls");
   	int j;
// 1st Bottom border line... 
    gotoxy(10,8); 
    for(j=0; j<=95; j++)   
    printf("%c",196);
    
    fflush(stdin);
	printf("\n\n\n\t\t\t\tEnter the new file name to view Player details (team 2): ");
//  Bottom border line... 
    gotoxy(10,14); 
    for(j=0; j<=95; j++)   
    printf("%c",196);
    gotoxy(89,11);
    gets(C1.chk_filename3);
   	fptr=fopen(C1.chk_filename3,"rb");
   	if(fptr==NULL)
   	{
   		fflush(stdin);
   		printf("\n\n\n\n\t\t\t\tFile not found. Please try again . . . \n\t\t\t\t");
		system("pause");
   		goto chk3;
	}
	else
	{
		printf("\n\n\n\n\t\t\t\tFile found successfully.\n\t\t\t\t");
		system("pause");
	}
	system("cls");
    gotoxy(10,2);
	printf("\t\t\t\t\tCricket Scoresheet\n\n");
//Top border line
    gotoxy(5,4); 
    for(j=0; j<101; j++)   
    printf("%c", 254);
    printf("\n\n\t\t\t\t\t    Players Detail (Team %s)",C1.team_2name);
    
// 1st Bottom border line... 
    gotoxy(5,8); 
    for(j=0; j<=100; j++)   
    printf("%c",196);
    printf("\n\n         SN");
    printf("\tPlayers J.N ");
    printf("\t\t     Players Name ");
    printf("\t\t\tPlayers Position");
    //for Serial NO.
    int m,n,c;
    m=9,n=14;
	for(c=1;c<=11;c++)
    {
	 gotoxy(m,n);
	 fflush(stdin);
     printf("%d.",c);
     n=n+2;
 	}
    
//2nd Bottom border line...	
	gotoxy(5,12);
	for(j=0;j<100;j++)
	printf("%c",196);
	
//3nd Bottom border line... 
     gotoxy(5,37); 
     for(j=0; j<=100; j++)   
     printf("%c",254); 
     

//left and right boarder
    for(j=0; j<32; j++)
	{
			gotoxy(5,5+j);
			printf("%c",219);
	
	        gotoxy(105,5+j);
	        printf("%c",219);
    }   
//middle up down boarder   
    for(j=0;j<28;j++)
    {
    		gotoxy(13,9+j);
	        printf("%c",179);
    	
  			gotoxy(30,9+j);
	        printf("%c",179);
	        
	        gotoxy(70,9+j);
	        printf("%c",179);
	}
	int i,k,l;
	k=16,l=14;
while(fread(&P2,sizeof(P2),11,fptr)!=NULL)
{
	for(i=0;i<11;i++)
    {
	 gotoxy(k,l);
	 fflush(stdin);
     printf("%d",P2[i].JN_T1);
     gotoxy(k+25,l);
     fflush(stdin);
     puts(P2[i].P_name_T1);
     gotoxy(k+60,l);
     fflush(stdin);
     puts(P2[i].P_position_T1);
     l=l+2;
 	}
}
	fclose(fptr);
	fflush(stdin);
	gotoxy(20,40);
    printf("Press any key to view more . . . ");
    getch();
	V_C_scoresheet();
}

void V_C_scoresheet()
{
	labelc:
	system("cls");
	int j;
// 1st Bottom border line... 
    gotoxy(10,8); 
    for(j=0; j<=95; j++)   
    printf("%c",196);
    
    fflush(stdin);
    char cc;
	printf("\n\n\t\t\t\tWhich team has won the toss ?");
	printf("\n\t\t\t\t1. %s",C1.team_1name);
	printf("\n\t\t\t\t2. %s",C1.team_2name);
	printf("\n\n\t\t\t\tEnter your choice: ");
	scanf("%c",&cc);
	switch(cc)
	{
		case '1':
			V_C_team1();
			break;
		case '2':
			V_C_team2();
			break;
		default:
			fflush(stdin);
			printf("\n\n\t\t\t\tInvalid Choice!!! Please try again . . . ");
    		getch();
    		goto labelc;
    		break;
	}
}

void V_C_team1()
{
	int j;
	ld:
//  Bottom border line... 
    gotoxy(10,16); 
    for(j=0; j<=95; j++)   
    printf("%c",196);
    char bb;
    fflush(stdin);
	printf("\n\n\t\t\t\tWhat did team %s choose to do ?",C1.team_1name);
	printf("\n\t\t\t\t1. Bat");
	printf("\n\t\t\t\t2. Ball");
	printf("\n\n\t\t\t\tEnter your choice: ");
	scanf("%c",&bb);
	switch(bb)
	{
		case '1':
			//  Bottom border line... 
    		gotoxy(10,24); 
    		for(j=0; j<=95; j++)   
    		printf("%c",196);
    		printf("\n\n\n\t\t\t\tPress any key to begin the match . . . ");
    		getch();
			V_Bat_inning1();
			break;
		case '2':
			//  Bottom border line... 
    		gotoxy(10,24); 
    		for(j=0; j<=95; j++)   
    		printf("%c",196);
    		printf("\n\n\n\t\t\t\tPress any key to begin the match . . . ");
    		getch();
			V_First_inning_bat();
			break;
		default:
			fflush(stdin);
			printf("\n\n\t\t\t\tInvalid Choice!!! Please try again . . . ");
    		getch();
    		goto ld;
    		break;
	}
}

void V_C_team2()
{
	int j;
	ld:
//  Bottom border line... 
    gotoxy(10,16); 
    for(j=0; j<=95; j++)   
    printf("%c",196);
    char bb;
    fflush(stdin);
	printf("\n\n\t\t\t\tWhat did team %s choose to do ?",C1.team_2name);
	printf("\n\t\t\t\t1. Bat");
	printf("\n\t\t\t\t2. Ball");
	printf("\n\n\t\t\t\tEnter your choice: ");
	scanf("%c",&bb);
	switch(bb)
	{
		case '1':
			//  Bottom border line... 
    		gotoxy(10,24); 
    		for(j=0; j<=95; j++)   
    		printf("%c",196);
    		printf("\n\n\n\t\t\t\tPress any key to begin the match . . . ");
    		getch();
			V_First_inning_bat();
			break;
		case '2':
			//  Bottom border line... 
    		gotoxy(10,24); 
    		for(j=0; j<=95; j++)   
    		printf("%c",196);
    		printf("\n\n\n\t\t\t\tPress any key to begin the match . . . ");
    		getch();
			V_Bat_inning1();
			break;
		default:
			fflush(stdin);
			printf("\n\n\t\t\t\tInvalid Choice!!! Please try again . . . ");
    		getch();
    		goto ld;
    		break;
	}
}

void V_Bat_inning1()
{
	system("cls");
	int j;
	getsfilename4:
// 1st Bottom border line... 
    gotoxy(10,8); 
    for(j=0; j<=95; j++)   
    printf("%c",196);
    
    fflush(stdin);
	printf("\n\n\n\t\t\t\tEnter the new file name to view 1st inning batting: ");
//  Bottom border line... 
    gotoxy(10,14); 
    for(j=0; j<=95; j++)   
    printf("%c",196);
    gotoxy(84,11);
    gets(C1.chk_filename4);

	FILE *fpttr;
    fpttr = fopen(C1.chk_filename4,"rb");
    if (fpttr == NULL)
    {
    	fflush(stdin);
        printf("\n\n\n\n\n\n\t\t\t\tFile does not exist. Please try again . . .\n");
        printf("\t\t\t\t");
		system("pause");
		system("cls");
		goto getsfilename4;
    }
    
    printf("\n\n\n\n\n\t\t\t\tFile found successfully.");
    printf("\n\t\t\t\t");
	system("pause");
	
	system("cls");
    gotoxy(10,2);
	printf("\t\t\t\tCricket Scoresheet First Inning \n\n");
//Top border line
    gotoxy(5,4); 
    for(j=0; j<101; j++)   
    printf("%c", 254);
    printf("\n\n\t\t\t\t\t    Players Detail (Team %s)",C1.team_1name);
    
// 1st Bottom border line... 
    gotoxy(5,8); 
    for(j=0; j<=100; j++)   
    printf("%c",196);
    printf("\n\n         SN");
    printf("\tPlayers J.N ");
    printf("\t\t     Players Name ");
    printf("\t\t\tTotal Run Scored");
    //for Serial NO.
    int m,n,c;
    m=9,n=14;
	for(c=1;c<=11;c++)
    {
	 gotoxy(m,n);
	 fflush(stdin);
     printf("%d.",c);
     n=n+2;
 	}
    
//2nd Bottom border line...	
	gotoxy(5,12);
	for(j=0;j<100;j++)
	printf("%c",196);
	
//3nd Bottom border line... 
     gotoxy(5,37); 
     for(j=0; j<=100; j++)   
     printf("%c",254); 
     

//left and right boarder
    for(j=0; j<32; j++)
	{
			gotoxy(5,5+j);
			printf("%c",219);
	
	        gotoxy(105,5+j);
	        printf("%c",219);
    }   
//middle up down boarder   
    for(j=0;j<28;j++)
    {
    		gotoxy(13,9+j);
	        printf("%c",179);
    	
  			gotoxy(30,9+j);
	        printf("%c",179);
	        
	        gotoxy(70,9+j);
	        printf("%c",179);
	}
	int i,k,l;
	k=16,l=14;
	int T_Run;
	while(fread(&P3,sizeof(P3),11,fpttr)!=NULL)
	{
		for(i=0;i<11;i++)
		{
			gotoxy(k+60,l);
			fflush(stdin);
			printf("%d",P3[i].run);
			l=l+2;
		}
	}
	fclose(fpttr);
	
	FILE *fptr;
    fptr=fopen(C1.chk_filename2,"rb");
	k=16,l=14;
    while(fread(&P1,sizeof(P1),11,fptr)!=NULL)
{
	for(i=0;i<11;i++)
    {
	 gotoxy(k,l);
	 fflush(stdin);
     printf("%d",P1[i].JN_T1);
     gotoxy(k+25,l);
     fflush(stdin);
     puts(P1[i].P_name_T1);
     l=l+2;
 	}
}
	fflush(stdin);
	fclose(fptr);
	
	FILE *fp;
	fp=fopen("run.txt","r");
	gotoxy(20,40);
	printf("Total Run Scored: ");
	fflush(stdin);
	while((T_Run=getw(fp))!=EOF)
	{
		printf("%d",T_Run);
	}
	fclose(fp);
	fflush(stdin);
    gotoxy(20,42);
    printf("Press any key to view more . . . ");
	getch();
	V_Ball_inning1();
}

void V_Ball_inning1()
{
	system("cls");
	int j;
	getsfilename5:
// 1st Bottom border line... 
    gotoxy(10,8); 
    for(j=0; j<=95; j++)   
    printf("%c",196);
    
    fflush(stdin);
	printf("\n\n\n\t\t\t\tEnter the new file name to view 1st inning balling: ");
//  Bottom border line... 
    gotoxy(10,14); 
    for(j=0; j<=95; j++)   
    printf("%c",196);
    gotoxy(84,11);
    gets(C1.chk_filename5);

	FILE *fpttr;
    fpttr = fopen(C1.chk_filename5,"rb");
    if (fpttr == NULL)
    {
    	fflush(stdin);
        printf("\n\n\n\n\n\n\t\t\t\tFile does not exist. Please try again . . .\n");
        printf("\t\t\t\t");
		system("pause");
		system("cls");
		goto getsfilename5;
    }
    
    printf("\n\n\n\n\n\t\t\t\tFile found successfully.");
    printf("\n\t\t\t\t");
	system("pause");
	
	system("cls");
    gotoxy(10,2);
	printf("\t\t\t\tCricket Scoresheet First Inning \n\n");
//Top border line
    gotoxy(5,4); 
    for(j=0; j<106; j++)   
    printf("%c", 254);
    printf("\n\n\t\t\t\t\t    Players Detail (Team %s)",C1.team_2name);
    
// 1st Bottom border line... 
    gotoxy(5,8); 
    for(j=0; j<=105; j++)   
    printf("%c",196);
    printf("\n\n         SN");
    printf("\tPlayers J.N ");
    printf("\t        Players Name ");
    printf("\t\tTotal Wicket Taken");
    printf("\t Total Runs Given");
    //for Serial NO.
    int m,n,c;
    m=9,n=14;
	for(c=1;c<=11;c++)
    {
	 gotoxy(m,n);
	 fflush(stdin);
     printf("%d.",c);
     n=n+2;
 	}
    
//2nd Bottom border line...	
	gotoxy(5,12);
	for(j=0;j<105;j++)
	printf("%c",196);
	
//3nd Bottom border line... 
     gotoxy(5,37); 
     for(j=0; j<=105; j++)   
     printf("%c",254); 
     

//left and right boarder
    for(j=0; j<32; j++)
	{
			gotoxy(5,5+j);
			printf("%c",219);
	
	        gotoxy(110,5+j);
	        printf("%c",219);
    }   
//middle up down boarder   
    for(j=0;j<28;j++)
    {
    		gotoxy(13,9+j);
	        printf("%c",179);
    	
  			gotoxy(30,9+j);
	        printf("%c",179);
	        
	        gotoxy(60,9+j);
	        printf("%c",179);
	        
	        gotoxy(85,9+j);
	        printf("%c",179);
	}
	int i,k,l;
	k=16,l=14;
	while(fread(&P4,sizeof(P4),11,fpttr)!=NULL)
	{
		for(i=0;i<11;i++)
		{
		gotoxy(k+50,l);
		fflush(stdin);
		printf("%d",P4[i].wicket);
		gotoxy(k+75,l);
		fflush(stdin);
		printf("%d",P4[i].run_given);
		l=l+2;
		}
	}
	fclose(fpttr);
	
	FILE *fptr;
    fptr=fopen(C1.chk_filename3,"rb");
	k=16,l=14;
    while(fread(&P2,sizeof(P2),11,fptr)!=NULL)
{
	for(i=0;i<11;i++)
    {
	 gotoxy(k,l);
	 fflush(stdin);
     printf("%d",P2[i].JN_T1);
     gotoxy(k+20,l);
     fflush(stdin);
     puts(P2[i].P_name_T1);
     l=l+2;
 	}
}
	fflush(stdin);
	fclose(fptr);
	
	int Total_wicket,Total_run_given,Total_Runs,Extras,Target;
	FILE *fpp;
	fpp=fopen("finalrun.txt","r");
	fflush(stdin);
	gotoxy(16,40);
    while((fscanf(fpp,"%d\t%d\t%d\t%d\t%d",&Total_wicket,&Total_run_given,&Extras,&Total_Runs,&Target))!=EOF)
    {
    	printf("Total Wicket Taken: %d\n\t\tTotal Run Given: %d\n\t\tTotal Extra Run: %d\n\t\tFinal Runs Scored in the First Inning: %d - %d",Total_wicket,Total_run_given,Extras,Total_Runs,Total_wicket);
    	fflush(stdin);
    	printf("\n\n\t\tTarget on the Board: %d",Target);
	}
    fclose(fpp);
	
    gotoxy(16,46);
    printf("Press any key to continue . . . ");
	getch();
	V_inning_second_bat();
}

void V_inning_second_bat()
{
	system("cls");
	int j;
	getsfilename8:
// 1st Bottom border line... 
    gotoxy(10,8); 
    for(j=0; j<=95; j++)   
    printf("%c",196);
    
    fflush(stdin);
	printf("\n\n\n\t\t\t\tEnter the new file name to view 2nd inning batting: ");
//  Bottom border line... 
    gotoxy(10,14); 
    for(j=0; j<=95; j++)   
    printf("%c",196);
    gotoxy(84,11);
    gets(C1.chk_filename8);

	FILE *fpttr;
    fpttr = fopen(C1.chk_filename8,"rb");
    if (fpttr == NULL)
    {
    	fflush(stdin);
        printf("\n\n\n\n\n\n\t\t\t\tFile does not exist. Please try again . . .\n");
        printf("\t\t\t\t");
		system("pause");
		system("cls");
		goto getsfilename8;
    }
    
    printf("\n\n\n\n\n\t\t\t\tFile found successfully.");
    printf("\n\t\t\t\t");
	system("pause");
	
	system("cls");
    gotoxy(10,2);
	printf("\t\t\t\tCricket Scoresheet Second Inning \n\n");
//Top border line
    gotoxy(5,4); 
    for(j=0; j<101; j++)   
    printf("%c", 254);
    printf("\n\n\t\t\t\t\t    Players Detail (Team %s)",C1.team_2name);
    
// 1st Bottom border line... 
    gotoxy(5,8); 
    for(j=0; j<=100; j++)   
    printf("%c",196);
    printf("\n\n         SN");
    printf("\tPlayers J.N ");
    printf("\t\t     Players Name ");
    printf("\t\t\tTotal Run Scored");
    //for Serial NO.
    int m,n,c;
    m=9,n=14;
	for(c=1;c<=11;c++)
    {
	 gotoxy(m,n);
	 fflush(stdin);
     printf("%d.",c);
     n=n+2;
 	}
    
//2nd Bottom border line...	
	gotoxy(5,12);
	for(j=0;j<100;j++)
	printf("%c",196);
	
//3nd Bottom border line... 
     gotoxy(5,37); 
     for(j=0; j<=100; j++)   
     printf("%c",254); 
     

//left and right boarder
    for(j=0; j<32; j++)
	{
			gotoxy(5,5+j);
			printf("%c",219);
	
	        gotoxy(105,5+j);
	        printf("%c",219);
    }   
//middle up down boarder   
    for(j=0;j<28;j++)
    {
    		gotoxy(13,9+j);
	        printf("%c",179);
    	
  			gotoxy(30,9+j);
	        printf("%c",179);
	        
	        gotoxy(70,9+j);
	        printf("%c",179);
	}
	int i,k,l;
	k=16,l=14;
	int T_Run;
	while(fread(&P5,sizeof(P5),11,fpttr)!=NULL)
	{
		for(i=0;i<11;i++)
		{
			gotoxy(k+60,l);
			fflush(stdin);
			printf("%d",P5[i].run);
			l=l+2;
		}
	}
	fclose(fpttr);
	
	FILE *fptr;
    fptr=fopen(C1.chk_filename3,"rb");
	k=16,l=14;
    while(fread(&P2,sizeof(P2),11,fptr)!=NULL)
{
	for(i=0;i<11;i++)
    {
	 gotoxy(k,l);
	 fflush(stdin);
     printf("%d",P2[i].JN_T1);
     gotoxy(k+25,l);
     fflush(stdin);
     puts(P2[i].P_name_T1);
     l=l+2;
 	}
}
	fflush(stdin);
	fclose(fptr);
	
	FILE *fp;
	fp=fopen("runsecond.txt","r");
	gotoxy(20,40);
	printf("Total Run Scored: ");
	fflush(stdin);
	while((T_Run=getw(fp))!=EOF)
	{
		printf("%d",T_Run);
	}
	fclose(fp);
	fflush(stdin);
    gotoxy(20,42);
    printf("Press any key to view more . . . ");
	getch();
	V_inning_second_ball();
}

void V_inning_second_ball()
{
	system("cls");
	int j;
	getsfilename9:
// 1st Bottom border line... 
    gotoxy(10,8); 
    for(j=0; j<=95; j++)   
    printf("%c",196);
    
    fflush(stdin);
	printf("\n\n\n\t\t\t\tEnter the new file name to view 2nd inning balling: ");
//  Bottom border line... 
    gotoxy(10,14); 
    for(j=0; j<=95; j++)   
    printf("%c",196);
    gotoxy(84,11);
    gets(C1.chk_filename9);

	FILE *fpttr;
    fpttr = fopen(C1.chk_filename9,"rb");
    if (fpttr == NULL)
    {
    	fflush(stdin);
        printf("\n\n\n\n\n\n\t\t\t\tFile does not exist. Please try again . . .\n");
        printf("\t\t\t\t");
		system("pause");
		system("cls");
		goto getsfilename9;
    }
    
    printf("\n\n\n\n\n\t\t\t\tFile found successfully.");
    printf("\n\t\t\t\t");
	system("pause");
	
	system("cls");
    gotoxy(10,2);
	printf("\t\t\t\tCricket Scoresheet Second Inning \n\n");
//Top border line
    gotoxy(5,4); 
    for(j=0; j<106; j++)   
    printf("%c", 254);
    printf("\n\n\t\t\t\t\t    Players Detail (Team %s)",C1.team_1name);
    
// 1st Bottom border line... 
    gotoxy(5,8); 
    for(j=0; j<=105; j++)   
    printf("%c",196);
    printf("\n\n         SN");
    printf("\tPlayers J.N ");
    printf("\t        Players Name ");
    printf("\t\tTotal Wicket Taken");
    printf("\t Total Runs Given");
    //for Serial NO.
    int m,n,c;
    m=9,n=14;
	for(c=1;c<=11;c++)
    {
	 gotoxy(m,n);
	 fflush(stdin);
     printf("%d.",c);
     n=n+2;
 	}
    
//2nd Bottom border line...	
	gotoxy(5,12);
	for(j=0;j<105;j++)
	printf("%c",196);
	
//3nd Bottom border line... 
     gotoxy(5,37); 
     for(j=0; j<=105; j++)   
     printf("%c",254); 
     

//left and right boarder
    for(j=0; j<32; j++)
	{
			gotoxy(5,5+j);
			printf("%c",219);
	
	        gotoxy(110,5+j);
	        printf("%c",219);
    }   
//middle up down boarder   
    for(j=0;j<28;j++)
    {
    		gotoxy(13,9+j);
	        printf("%c",179);
    	
  			gotoxy(30,9+j);
	        printf("%c",179);
	        
	        gotoxy(60,9+j);
	        printf("%c",179);
	        
	        gotoxy(85,9+j);
	        printf("%c",179);
	}
	int i,k,l;
	k=16,l=14;
	while(fread(&P6,sizeof(P6),11,fpttr)!=NULL)
	{
		for(i=0;i<11;i++)
		{
		gotoxy(k+50,l);
		fflush(stdin);
		printf("%d",P6[i].wicket);
		gotoxy(k+75,l);
		fflush(stdin);
		printf("%d",P6[i].run_given);
		l=l+2;
		}
	}
	fclose(fpttr);
	
	FILE *fptr;
    fptr=fopen(C1.chk_filename2,"rb");
	k=16,l=14;
    while(fread(&P1,sizeof(P1),11,fptr)!=NULL)
{
	for(i=0;i<11;i++)
    {
	 gotoxy(k,l);
	 fflush(stdin);
     printf("%d",P1[i].JN_T1);
     gotoxy(k+20,l);
     fflush(stdin);
     puts(P1[i].P_name_T1);
     l=l+2;
 	}
}
	fflush(stdin);
	fclose(fptr);
	
	int Total_wicket,Total_run_given,Total_Runs2,Extras,Total_Runs,result,Target;
	FILE *fpp;
	fpp=fopen("finalrunsecond.txt","r");
	fflush(stdin);
	gotoxy(16,40);
    while((fscanf(fpp,"%d%d%d%d",&Total_wicket,&Total_run_given,&Extras,&Total_Runs2))!=EOF)
    {
    	printf("Total Wicket Taken: %d\n\t\tTotal Run Given: %d\n\t\tTotal Extra Run: %d\n\n\t\tFinal Scored in the Second Inning: %d - %d",Total_wicket,Total_run_given,Extras,Total_Runs2,Total_wicket);
	}
    fclose(fpp);
    fflush(stdin);
    gotoxy(16,46);
    printf("Press any key to continue . . . ");
	getch();
	system("cls");
	FILE *ffp;
	ffp=fopen("finalrun.txt","r");
	while((fscanf(ffp,"%d\t%d\t%d\t%d\t%d\t",&Total_wicket,&Total_run_given,&Extras,&Total_Runs,&Target))!=EOF)
	{
		if(Total_Runs>Total_Runs2)
		{
			printf("\n\n\n\n\n\n\t\t\t\t\t  Congratulation Team %s !!!",C1.team_1name);
			result=(Total_Runs-Total_Runs2);
			fflush(stdin);
			printf("\n\t\t\t\t\t\tYou won by %d run",result);
		}
		else if(Total_Runs2>Total_Runs)
		{
			printf("\n\n\n\n\n\n\t\t\t\t\t  Congratulation Team %s !!!",C1.team_2name);
			result=(Total_Runs2-Total_Runs);
			fflush(stdin);
			printf("\n\t\t\t\t\t\tYou won by %d run ",result);
		}
		else
		{
			printf("\n\n\n\n\n\n\t\t\t\tMatch Tied !!!");
		}
	}
	fclose(ffp);
	printf("\n\n\n\n\n\t\t\t\t\t\tMatch Summary: ");
// Top Border line... 
    gotoxy(10,13); 
    for(j=0; j<=90; j++)   
    printf("%c",254);
// Second Border line... 
    gotoxy(10,17); 
    for(j=0; j<=90; j++)   
    printf("%c",254);
// Second Border line... 
    gotoxy(10,22); 
    for(j=0; j<=90; j++)   
    printf("%c",196);
// Second Border line... 
    gotoxy(10,26); 
    for(j=0; j<=90; j++)   
    printf("%c",196);
// last Border line... 
    gotoxy(10,31); 
    for(j=0; j<=90; j++)   
    printf("%c",254);
// left and right boarder
    for(j=0; j<17; j++)
	{
			gotoxy(10,14+j);
			printf("%c",219);
	
	        gotoxy(55,14+j);
	        printf("%c",219);
	
	        gotoxy(100,14+j);
	        printf("%c",219);
    }   
// left and right boarder
	for(j=0; j<13; j++)
	{
		gotoxy(33,18+j);
		printf("%c",179);
		
		gotoxy(78,18+j);
		printf("%c",179);
	}
	FILE *fff;
	fff=fopen("finalrun.txt","r");
	while((fscanf(fff,"%d\t%d\t%d\t%d\t%d\t",&Total_wicket,&Total_run_given,&Extras,&Total_Runs,&Target))!=EOF)
	{
		gotoxy(30,15);
		printf("Team %s",C1.team_1name);
		gotoxy(15,20);
		printf("Total Runs: \t\t%d",Total_Runs);
		gotoxy(15,24);
		printf("Total Wicket: \t\t%d",Total_wicket);
		gotoxy(15,28);
		printf("Total Extras: \t\t%d",Extras);	
	}
	fclose(fff);
	FILE *ff;
	ff=fopen("finalrunsecond.txt","r");
	while((fscanf(ff,"%d\t%d\t%d\t%d\t",&Total_wicket,&Total_run_given,&Extras,&Total_Runs2))!=EOF)
	{
		gotoxy(73,15);
		printf("Team %s",C1.team_2name);
		gotoxy(60,20);
		printf("Total Runs: \t\t%d",Total_Runs2);
		gotoxy(60,24);
		printf("Total Wicket: \t\t%d",Total_wicket);
		gotoxy(60,28);
		printf("Total Extras: \t\t%d",Extras);
	}
	fclose(ff);
	gotoxy(15,34);
	printf("Press any key to continue . . . ");
	getch();
	Home();
}

void V_First_inning_bat()
{
	system("cls");
	int j;
	getsfilename6:
// 1st Bottom border line... 
    gotoxy(10,8); 
    for(j=0; j<=95; j++)   
    printf("%c",196);
    
    fflush(stdin);
	printf("\n\n\n\t\t\t\tEnter the new file name to view 1st inning batting: ");
//  Bottom border line... 
    gotoxy(10,14); 
    for(j=0; j<=95; j++)   
    printf("%c",196);
    gotoxy(84,11);
    gets(C1.chk_filename6);

	FILE *fpttr;
    fpttr = fopen(C1.chk_filename6,"rb");
    if (fpttr == NULL)
    {
    	fflush(stdin);
        printf("\n\n\n\n\n\n\t\t\t\tFile does not exist. Please try again . . .\n");
        printf("\t\t\t\t");
		system("pause");
		system("cls");
		goto getsfilename6;
    }
    
    printf("\n\n\n\n\n\t\t\t\tFile found successfully.");
    printf("\n\t\t\t\t");
	system("pause");
	
	system("cls");
    gotoxy(10,2);
	printf("\t\t\t\tCricket Scoresheet First Inning \n\n");
//Top border line
    gotoxy(5,4); 
    for(j=0; j<101; j++)   
    printf("%c", 254);
    printf("\n\n\t\t\t\t\t    Players Detail (Team %s)",C1.team_2name);
    
// 1st Bottom border line... 
    gotoxy(5,8); 
    for(j=0; j<=100; j++)   
    printf("%c",196);
    printf("\n\n         SN");
    printf("\tPlayers J.N ");
    printf("\t\t     Players Name ");
    printf("\t\t\tTotal Run Scored");
    //for Serial NO.
    int m,n,c;
    m=9,n=14;
	for(c=1;c<=11;c++)
    {
	 gotoxy(m,n);
	 fflush(stdin);
     printf("%d.",c);
     n=n+2;
 	}
    
//2nd Bottom border line...	
	gotoxy(5,12);
	for(j=0;j<100;j++)
	printf("%c",196);
	
//3nd Bottom border line... 
     gotoxy(5,37); 
     for(j=0; j<=100; j++)   
     printf("%c",254); 
     

//left and right boarder
    for(j=0; j<32; j++)
	{
			gotoxy(5,5+j);
			printf("%c",219);
	
	        gotoxy(105,5+j);
	        printf("%c",219);
    }   
//middle up down boarder   
    for(j=0;j<28;j++)
    {
    		gotoxy(13,9+j);
	        printf("%c",179);
    	
  			gotoxy(30,9+j);
	        printf("%c",179);
	        
	        gotoxy(70,9+j);
	        printf("%c",179);
	}
	int i,k,l;
	k=16,l=14;
	int T_Run;
	while(fread(&P3,sizeof(P3),11,fpttr)!=NULL)
	{
		for(i=0;i<11;i++)
		{
			gotoxy(k+60,l);
			fflush(stdin);
			printf("%d",P3[i].run);
			l=l+2;
		}
	}
	fclose(fpttr);
	
	FILE *fptr;
    fptr=fopen(C1.chk_filename3,"rb");
	k=16,l=14;
    while(fread(&P2,sizeof(P2),11,fptr)!=NULL)
{
	for(i=0;i<11;i++)
    {
	 gotoxy(k,l);
	 fflush(stdin);
     printf("%d",P2[i].JN_T1);
     gotoxy(k+25,l);
     fflush(stdin);
     puts(P2[i].P_name_T1);
     l=l+2;
 	}
}
	fflush(stdin);
	fclose(fptr);
	
	FILE *fp;
	fp=fopen("secondrun.txt","r");
	gotoxy(20,40);
	printf("Total Run Scored: ");
	fflush(stdin);
	while((T_Run=getw(fp))!=EOF)
	{
		printf("%d",T_Run);
	}
	fclose(fp);
	fflush(stdin);
    gotoxy(20,42);
    printf("Press any key to view more . . . ");
	getch();
	V_First_inning_ball();
}

void V_First_inning_ball()
{
	system("cls");
	int j;
	getsfilename7:
// 1st Bottom border line... 
    gotoxy(10,8); 
    for(j=0; j<=95; j++)   
    printf("%c",196);
    
    fflush(stdin);
	printf("\n\n\n\t\t\t\tEnter the new file name to view 1st inning balling: ");
//  Bottom border line... 
    gotoxy(10,14); 
    for(j=0; j<=95; j++)   
    printf("%c",196);
    gotoxy(84,11);
    gets(C1.chk_filename7);

	FILE *fpttr;
    fpttr = fopen(C1.chk_filename7,"rb");
    if (fpttr == NULL)
    {
    	fflush(stdin);
        printf("\n\n\n\n\n\n\t\t\t\tFile does not exist. Please try again . . .\n");
        printf("\t\t\t\t");
		system("pause");
		system("cls");
		goto getsfilename7;
    }
    
    printf("\n\n\n\n\n\t\t\t\tFile found successfully.");
    printf("\n\t\t\t\t");
	system("pause");
	
	system("cls");
    gotoxy(10,2);
	printf("\t\t\t\tCricket Scoresheet First Inning \n\n");
//Top border line
    gotoxy(5,4); 
    for(j=0; j<106; j++)   
    printf("%c", 254);
    printf("\n\n\t\t\t\t\t    Players Detail (Team %s)",C1.team_1name);
    
// 1st Bottom border line... 
    gotoxy(5,8); 
    for(j=0; j<=105; j++)   
    printf("%c",196);
    printf("\n\n         SN");
    printf("\tPlayers J.N ");
    printf("\t        Players Name ");
    printf("\t\tTotal Wicket Taken");
    printf("\t Total Runs Given");
    //for Serial NO.
    int m,n,c;
    m=9,n=14;
	for(c=1;c<=11;c++)
    {
	 gotoxy(m,n);
	 fflush(stdin);
     printf("%d.",c);
     n=n+2;
 	}
    
//2nd Bottom border line...	
	gotoxy(5,12);
	for(j=0;j<105;j++)
	printf("%c",196);
	
//3nd Bottom border line... 
     gotoxy(5,37); 
     for(j=0; j<=105; j++)   
     printf("%c",254); 
     

//left and right boarder
    for(j=0; j<32; j++)
	{
			gotoxy(5,5+j);
			printf("%c",219);
	
	        gotoxy(110,5+j);
	        printf("%c",219);
    }   
//middle up down boarder   
    for(j=0;j<28;j++)
    {
    		gotoxy(13,9+j);
	        printf("%c",179);
    	
  			gotoxy(30,9+j);
	        printf("%c",179);
	        
	        gotoxy(60,9+j);
	        printf("%c",179);
	        
	        gotoxy(85,9+j);
	        printf("%c",179);
	}
	int i,k,l;
	k=16,l=14;
	while(fread(&P4,sizeof(P4),11,fpttr)!=NULL)
	{
		for(i=0;i<11;i++)
		{
		gotoxy(k+50,l);
		fflush(stdin);
		printf("%d",P4[i].wicket);
		gotoxy(k+75,l);
		fflush(stdin);
		printf("%d",P4[i].run_given);
		l=l+2;
		}
	}
	fclose(fpttr);
	
	FILE *fptr;
    fptr=fopen(C1.chk_filename2,"rb");
	k=16,l=14;
    while(fread(&P1,sizeof(P1),11,fptr)!=NULL)
{
	for(i=0;i<11;i++)
    {
	 gotoxy(k,l);
	 fflush(stdin);
     printf("%d",P1[i].JN_T1);
     gotoxy(k+20,l);
     fflush(stdin);
     puts(P1[i].P_name_T1);
     l=l+2;
 	}
}
	fflush(stdin);
	fclose(fptr);
	
	int Total_wicket,Total_run_given,Total_Runs,Extras,Target;
	FILE *fpp;
	fpp=fopen("finalsecondrun.txt","r");
	fflush(stdin);
	gotoxy(16,40);
    while((fscanf(fpp,"%d%d%d%d%d",&Total_wicket,&Total_run_given,&Extras,&Total_Runs,&Target))!=EOF)
    {
    	printf("Total Wicket Taken: %d\n\t\tTotal Run Given: %d\n\t\tTotal Extra Run: %d\n\t\tFinal Scored in the First Inning: %d - %d",Total_wicket,Total_run_given,Extras,Total_Runs,Total_wicket);
    	fflush(stdin);
    	printf("\n\n\t\tTarget on the Board: %d",Target);
	}
    fclose(fpp);
	
    gotoxy(16,46);
    printf("Press any key to continue . . . ");
	getch();
	V_Second_inning_bat();
}

void V_Second_inning_bat()
{
	system("cls");
	int j;
	getsfilename10:
// 1st Bottom border line... 
    gotoxy(10,8); 
    for(j=0; j<=95; j++)   
    printf("%c",196);
    
    fflush(stdin);
	printf("\n\n\n\t\t\t\tEnter the new file name to view 2nd inning batting: ");
//  Bottom border line... 
    gotoxy(10,14); 
    for(j=0; j<=95; j++)   
    printf("%c",196);
    gotoxy(84,11);
    gets(C1.chk_filename10);

	FILE *fpttr;
    fpttr = fopen(C1.chk_filename10,"rb");
    if (fpttr == NULL)
    {
    	fflush(stdin);
        printf("\n\n\n\n\n\n\t\t\t\tFile does not exist. Please try again . . .\n");
        printf("\t\t\t\t");
		system("pause");
		system("cls");
		goto getsfilename10;
    }
    
    printf("\n\n\n\n\n\t\t\t\tFile found successfully.");
    printf("\n\t\t\t\t");
	system("pause");
	
	system("cls");
    gotoxy(10,2);
	printf("\t\t\t\tCricket Scoresheet Second Inning \n\n");
//Top border line
    gotoxy(5,4); 
    for(j=0; j<101; j++)   
    printf("%c", 254);
    printf("\n\n\t\t\t\t\t    Players Detail (Team %s)",C1.team_1name);
    
// 1st Bottom border line... 
    gotoxy(5,8); 
    for(j=0; j<=100; j++)   
    printf("%c",196);
    printf("\n\n         SN");
    printf("\tPlayers J.N ");
    printf("\t\t     Players Name ");
    printf("\t\t\tTotal Run Scored");
    //for Serial NO.
    int m,n,c;
    m=9,n=14;
	for(c=1;c<=11;c++)
    {
	 gotoxy(m,n);
	 fflush(stdin);
     printf("%d.",c);
     n=n+2;
 	}
    
//2nd Bottom border line...	
	gotoxy(5,12);
	for(j=0;j<100;j++)
	printf("%c",196);
	
//3nd Bottom border line... 
     gotoxy(5,37); 
     for(j=0; j<=100; j++)   
     printf("%c",254); 
     

//left and right boarder
    for(j=0; j<32; j++)
	{
			gotoxy(5,5+j);
			printf("%c",219);
	
	        gotoxy(105,5+j);
	        printf("%c",219);
    }   
//middle up down boarder   
    for(j=0;j<28;j++)
    {
    		gotoxy(13,9+j);
	        printf("%c",179);
    	
  			gotoxy(30,9+j);
	        printf("%c",179);
	        
	        gotoxy(70,9+j);
	        printf("%c",179);
	}
	int i,k,l;
	k=16,l=14;
	int T_Run;
	while(fread(&P5,sizeof(P5),11,fpttr)!=NULL)
	{
		for(i=0;i<11;i++)
		{
			gotoxy(k+60,l);
			fflush(stdin);
			printf("%d",P5[i].run);
			l=l+2;
		}
	}
	fclose(fpttr);
	
	FILE *fptr;
    fptr=fopen(C1.chk_filename2,"rb");
	k=16,l=14;
    while(fread(&P1,sizeof(P1),11,fptr)!=NULL)
{
	for(i=0;i<11;i++)
    {
	 gotoxy(k,l);
	 fflush(stdin);
     printf("%d",P1[i].JN_T1);
     gotoxy(k+25,l);
     fflush(stdin);
     puts(P1[i].P_name_T1);
     l=l+2;
 	}
}
	fflush(stdin);
	fclose(fptr);
	
	FILE *fp;
	fp=fopen("second_secondrun.txt","r");
	gotoxy(20,40);
	printf("Total Run Scored: ");
	fflush(stdin);
	while((T_Run=getw(fp))!=EOF)
	{
		printf("%d",T_Run);
	}
	fclose(fp);
	fflush(stdin);
    gotoxy(20,42);
    printf("Press any key to view more . . . ");
	getch();
	V_Second_inning_ball();
}

void V_Second_inning_ball()
{
	system("cls");
	int j;
	getsfilename11:
// 1st Bottom border line... 
    gotoxy(10,8); 
    for(j=0; j<=95; j++)   
    printf("%c",196);
    
    fflush(stdin);
	printf("\n\n\n\t\t\t\tEnter the new file name to view 2nd inning balling: ");
//  Bottom border line... 
    gotoxy(10,14); 
    for(j=0; j<=95; j++)   
    printf("%c",196);
    gotoxy(84,11);
    gets(C1.chk_filename11);

	FILE *fpttr;
    fpttr = fopen(C1.chk_filename11,"rb");
    if (fpttr == NULL)
    {
    	fflush(stdin);
        printf("\n\n\n\n\n\n\t\t\t\tFile does not exist. Please try again . . .\n");
        printf("\t\t\t\t");
		system("pause");
		system("cls");
		goto getsfilename11;
    }
    
    printf("\n\n\n\n\n\t\t\t\tFile found successfully.");
    printf("\n\t\t\t\t");
	system("pause");
	
	system("cls");
    gotoxy(10,2);
	printf("\t\t\t\tCricket Scoresheet Second Inning \n\n");
//Top border line
    gotoxy(5,4); 
    for(j=0; j<106; j++)   
    printf("%c", 254);
    printf("\n\n\t\t\t\t\t    Players Detail (Team %s)",C1.team_2name);
    
// 1st Bottom border line... 
    gotoxy(5,8); 
    for(j=0; j<=105; j++)   
    printf("%c",196);
    printf("\n\n         SN");
    printf("\tPlayers J.N ");
    printf("\t        Players Name ");
    printf("\t\tTotal Wicket Taken");
    printf("\t Total Runs Given");
    //for Serial NO.
    int m,n,c;
    m=9,n=14;
	for(c=1;c<=11;c++)
    {
	 gotoxy(m,n);
	 fflush(stdin);
     printf("%d.",c);
     n=n+2;
 	}
    
//2nd Bottom border line...	
	gotoxy(5,12);
	for(j=0;j<105;j++)
	printf("%c",196);
	
//3nd Bottom border line... 
     gotoxy(5,37); 
     for(j=0; j<=105; j++)   
     printf("%c",254); 
     

//left and right boarder
    for(j=0; j<32; j++)
	{
			gotoxy(5,5+j);
			printf("%c",219);
	
	        gotoxy(110,5+j);
	        printf("%c",219);
    }   
//middle up down boarder   
    for(j=0;j<28;j++)
    {
    		gotoxy(13,9+j);
	        printf("%c",179);
    	
  			gotoxy(30,9+j);
	        printf("%c",179);
	        
	        gotoxy(60,9+j);
	        printf("%c",179);
	        
	        gotoxy(85,9+j);
	        printf("%c",179);
	}
	int i,k,l;
	k=16,l=14;
	while(fread(&P6,sizeof(P6),11,fpttr)!=NULL)
	{
		for(i=0;i<11;i++)
		{
		gotoxy(k+50,l);
		fflush(stdin);
		printf("%d",P6[i].wicket);
		gotoxy(k+75,l);
		fflush(stdin);
		printf("%d",P6[i].run_given);
		l=l+2;
		}
	}
	fclose(fpttr);
	
	FILE *fptr;
    fptr=fopen(C1.chk_filename3,"rb");
	k=16,l=14;
    while(fread(&P2,sizeof(P2),11,fptr)!=NULL)
{
	for(i=0;i<11;i++)
    {
	 gotoxy(k,l);
	 fflush(stdin);
     printf("%d",P2[i].JN_T1);
     gotoxy(k+20,l);
     fflush(stdin);
     puts(P2[i].P_name_T1);
     l=l+2;
 	}
}
	fflush(stdin);
	fclose(fptr);
	
	int Total_wicket,Total_run_given,Total_Runs,Total_Runs2,Extras,result,Target;
	FILE *fpp;
	fpp=fopen("runsecond_second.txt","r");
	fflush(stdin);
	gotoxy(16,40);
    while((fscanf(fpp,"%d%d%d%d",&Total_wicket,&Total_run_given,&Extras,&Total_Runs2))!=EOF)
    {
    	printf("Total Wicket Taken: %d\n\t\tTotal Run Given: %d\n\t\tTotal Extra Run: %d\n\n\t\tFinal Scored in the Second Inning: %d",Total_wicket,Total_run_given,Extras,Total_Runs2,Total_wicket);
	}
    fclose(fpp);
	fflush(stdin);
    gotoxy(16,46);
    printf("Press any key to continue . . . ");
	getch();
	system("cls");
	FILE *ffp;
	ffp=fopen("finalsecondrun.txt","r");
	while((fscanf(fpp,"%d\t%d\t%d\t%d\t%d\t",&Total_wicket,&Total_run_given,&Extras,&Total_Runs,&Target))!=EOF)
	{
		if(Total_Runs>Total_Runs2)
		{
			printf("\n\n\n\n\n\n\t\t\t\t\t  Congratulation Team %s !!!",C1.team_2name);
			result=(Total_Runs-Total_Runs2);
			fflush(stdin);
			printf("\n\t\t\t\t\t\tYou won by %d run",result);
		}
		else if(Total_Runs2>Total_Runs)
		{
			printf("\n\n\n\n\n\n\t\t\t\t\t  Congratulation Team %s !!!",C1.team_1name);
			result=(Total_Runs2-Total_Runs);
			fflush(stdin);
			printf("\n\t\t\t\t\t\tYou won by %d run ",result);
		}
		
		else
		{
			printf("\n\n\n\n\n\n\t\t\t\tMatch Tied !!!");
		}
	}
	fclose(ffp);
	printf("\n\n\n\n\n\t\t\t\t\t\tMatch Summary: ");
// Top Border line... 
    gotoxy(10,13); 
    for(j=0; j<=90; j++)   
    printf("%c",254);
// Second Border line... 
    gotoxy(10,17); 
    for(j=0; j<=90; j++)   
    printf("%c",254);
// Second Border line... 
    gotoxy(10,22); 
    for(j=0; j<=90; j++)   
    printf("%c",196);
// Second Border line... 
    gotoxy(10,26); 
    for(j=0; j<=90; j++)   
    printf("%c",196);
// last Border line... 
    gotoxy(10,31); 
    for(j=0; j<=90; j++)   
    printf("%c",254);
// left and right boarder
    for(j=0; j<17; j++)
	{
			gotoxy(10,14+j);
			printf("%c",219);
	
	        gotoxy(55,14+j);
	        printf("%c",219);
	
	        gotoxy(100,14+j);
	        printf("%c",219);
    }   
// left and right boarder
	for(j=0; j<13; j++)
	{
		gotoxy(33,18+j);
		printf("%c",179);
		
		gotoxy(78,18+j);
		printf("%c",179);
	}
	FILE *fff;
	fff=fopen("finalsecondrun.txt","r");
	while((fscanf(fff,"%d\t%d\t%d\t%d\t%d\t",&Total_wicket,&Total_run_given,&Extras,&Total_Runs,&Target))!=EOF)
	{
		gotoxy(30,15);
		printf("Team %s",C1.team_2name);
		gotoxy(15,20);
		printf("Total Runs: \t\t%d",Total_Runs);
		gotoxy(15,24);
		printf("Total Wicket: \t\t%d",Total_wicket);
		gotoxy(15,28);
		printf("Total Extras: \t\t%d",Extras);	
	}
	fclose(fff);
	FILE *ff;
	ff=fopen("runsecond_second.txt","r");
	while((fscanf(ff,"%d\t%d\t%d\t%d\t",&Total_wicket,&Total_run_given,&Extras,&Total_Runs2))!=EOF)
	{
		gotoxy(73,15);
		printf("Team %s",C1.team_1name);
		gotoxy(60,20);
		printf("Total Runs: \t\t%d",Total_Runs2);
		gotoxy(60,24);
		printf("Total Wicket: \t\t%d",Total_wicket);
		gotoxy(60,28);
		printf("Total Extras: \t\t%d",Extras);
	}
	fclose(ff);
	gotoxy(15,34);
	printf("Press any key to continue . . . ");
	getch();
	Home();
}

void search_cricket()
{
	system("cls");
	printf("you can search cricket files from here");
}

void view_footballscore()
{
	system("cls");
	int j;
	
//Top border line
    gotoxy(10,4); 
    for(j=0; j<96; j++)   
    printf("%c", 254);
    
	printf("\n\t\t\t\t\t\tFootball Scoresheet\n\n");
	printf("\t\t\t\t\t\t\t\t\t\t1-continue\n\n");
	printf("\t\t\t\t\t\t\t\t\t\t2-go back");
		
// 1st Bottom border line... 
    gotoxy(10,15); 
    for(j=0; j<=95; j++)   
        printf("%c", 196);
	
	char num;
	printf("\n\n\n\t\t\t\tEnter your choice:");
	
// 2nd Bottom border line... 
   gotoxy(10,25); 
   for(j=0; j<=95; j++)   
   printf("%c", 254);
   
//right and left border line
    for(j=0; j<20; j++)
	{
	    gotoxy(10,5+j);
	    printf("%c",219);
	
	    gotoxy(105,5+j);
	    printf("%c",219);
	}

	gotoxy(51,18);
	fflush(stdin);
	scanf("%c",&num);
	
	switch(num)
	{
		case '1':
		    browse_football();
		    break;
		case '2':
			browse();
		    break;
		default:
			printf("\n\n\n\n\n\n\n\n\t\t\t\t\tInvalid choice!!! Please try again . . .\n");
			printf("\t\t\t\t\t");
			system("pause");
			view_footballscore();
		    break;	
	}
}
void browse_football()
{
	system("cls");
	int j;

//top border line...
	gotoxy(10,4);
	for(j=0;j<96;j++)
	printf("%c",254);
	
	printf("\n\t\t1.Browse football scoresheet\n\n");
	printf("\t\t2.search football scoresheet\n\n");
	printf("\t\t3.Back\n");
	printf("\n\n\t\t\t\t\t\t\t\t\t\t1-access football files\n");
	printf("\t\t\t\t\t\t\t\t\t\t2-search football files\n");
	printf("\t\t\t\t\t\t\t\t\t\t3-go back to browse file\n\n");
	
// 1st bottom border line
	gotoxy(10,15);
	for(j=0;j<96;j++)
	printf("%c",196);

	char num;
	printf("\n\t\t\t\tEnter your choice:");

// 2nd bottom border line
	gotoxy(10,25);
	for(j=0;j<96;j++)
	printf("%c",254);	

//right and left border line
    for(j=0; j<20; j++)
	{
	    gotoxy(10,5+j);
	    printf("%c",219);
	
	    gotoxy(105,5+j);
	    printf("%c",219);
	}

	gotoxy(51,16);
    fflush(stdin);
    scanf("%c",&num);

    switch(num)
	{
	    case '1':
		    Football();
		    break;
	    case '2':
		    search_football();
		    break;
	    case '3':
		    browse();
		    break;
	    default:
			printf("\n\n\n\n\n\n\n\n\t\t\t\t\tInvalid choice!!! Please try again . . .\n");
			printf("\t\t\t\t\t");
		    system("pause");
		    browse_football();
		    break;
		}	
}

void Football()
{
	FILE *fpf;
	chk:
	system("cls");
   	int j;
// 1st Bottom border line... 
    gotoxy(10,8); 
    for(j=0; j<=95; j++)   
    printf("%c",196);
    
    fflush(stdin);
	printf("\n\n\n\t\t\t\tEnter the file name you want to view game details: ");
//  Bottom border line... 
    gotoxy(10,14); 
    for(j=0; j<=95; j++)   
    printf("%c",196);
    gotoxy(83,11);
    gets(F1.chk_filename);
   	fpf=fopen(F1.chk_filename,"rb");
   	if(fpf==NULL)
   	{
   		fflush(stdin);
   		printf("\n\n\n\n\t\t\t\tFile not found. Please try again . . . \n\t\t\t\t");
		system("pause");
   		goto chk;
	}
	else
	{
		printf("\n\n\n\n\t\t\t\tFile found successfully.\n\t\t\t\t");
		system("pause");
		Football_display();
	}
	fclose(fpf);
}

void Football_display()
{
	system("cls");
	FILE *fpf;
	fpf=fopen(F1.chk_filename,"rb");
	int i,j;
    gotoxy(5,0);
	
//Top border line
    gotoxy(10,4); 
    for(j=0; j<96; j++)   
    printf("%c", 254);
	printf("\n\n\t\t\t\t\t\tFootball Scoresheet\n\n");
	
// 1st Bottom border line... 
    gotoxy(10,8); 
    for(j=0; j<=95; j++)   
    printf("%c",196);
    
    printf("\n\n\t\tFile name: ");
	printf("\t\t\t\t\tFile code: ");
	printf("\n\n\t\tTime: ");
	printf("\t\t\t\t\t\tLeague: ");
	printf("\n\n\t\tVenue: ");
	printf("\t\t\t\t\t\tDate: ");  
	printf("\n\n\t\tTeam_1 Name: ");
	printf("\t\t\t\t\tTeam_2 Name: ");
	printf("\n\n\t\tTeam_1 Total Players: ");
	printf("\t\t\t\tTeam_2 Total Players: "); 	 
	printf("\n\n\t\tTeam_1 Coach Name: ");
	printf("\t\t\t\tTeam_2 Coach Name: ");
	
	//2nd Bottom border line... 
     gotoxy(10,25); 
     for(j=0; j<=95; j++)   
     printf("%c",254); 	

//left and right boarder
    for(j=0; j<20; j++)
	{
	        gotoxy(10,5+j);
	        printf("%c",219);
	
	        gotoxy(105,5+j);
	        printf("%c",219);
    }   
 //middle up down boarder   
    for(j=0;j<16;j++)
    {
  			gotoxy(55,9+j);
	        printf("%c",179);
	}
while(fread(&F1,sizeof(F1),1,fpf)!=NULL)	
{
	printf("\n");
    gotoxy(27,10);
    fflush(stdin);
	puts(F1.file_name);
    gotoxy(75,10);
    fflush(stdin);
    printf("%d",F1.file_code);
    gotoxy(22,12);
    fflush(stdin);
    puts(F1.time);
    gotoxy(72,12);
    fflush(stdin);
    puts(F1.league);
    gotoxy(23,14);
    fflush(stdin);
    puts(F1.venue);
    gotoxy(70,14);
    fflush(stdin);
    puts(F1.date);
    gotoxy(29,16);
    fflush(stdin);
    puts(F1.team_1name);
    gotoxy(77,16);
    fflush(stdin);
    puts(F1.team_2name);
    gotoxy(38,18);
    fflush(stdin);
    printf("%d",F1.total_no_of_player_team1);
    gotoxy(86,18);
    fflush(stdin);
    printf("%d",F1.total_no_of_player_team2);
    gotoxy(35,20);
    fflush(stdin);
    puts(F1.coach_name1);
    gotoxy(83,20);
    fflush(stdin);
    puts(F1.coach_name2);
}
	printf("\n\n\n\n\n\n\t\t");				//Players detail
    printf("Press any key to view more . . . ");
    getch();
    fclose(fpf);
    F_Player_det1();
}

void F_Player_det1()
{
	FILE *fpf;
	chk2:
	system("cls");
   	int j;
// 1st Bottom border line... 
    gotoxy(10,8); 
    for(j=0; j<=95; j++)   
    printf("%c",196);
    
    fflush(stdin);
	printf("\n\n\n\t\t\t\tEnter the new file name to view Player details (team 1): ");
//  Bottom border line... 
    gotoxy(10,14); 
    for(j=0; j<=95; j++)   
    printf("%c",196);
    gotoxy(89,11);
    gets(F1.chk_filename2);
   	fpf=fopen(F1.chk_filename2,"rb");
   	if(fpf==NULL)
   	{
   		fflush(stdin);
   		printf("\n\n\n\n\t\t\t\tFile not found. Please try again . . . \n\t\t\t\t");
		system("pause");
   		goto chk2;
	}
	else
	{
		printf("\n\n\n\n\t\t\t\tFile found successfully.\n\t\t\t\t");
		system("pause");
	}
	system("cls");
    gotoxy(10,2);
	printf("\t\t\t\t\tFootball Scoresheet\n\n");
//Top border line
    gotoxy(5,4); 
    for(j=0; j<101; j++)   
    printf("%c", 254);
    printf("\n\n\t\t\t\t\t    Players Detail (Team %s)",F1.team_1name);
    
// 1st Bottom border line... 
    gotoxy(5,8); 
    for(j=0; j<=100; j++)   
    printf("%c",196);
    printf("\n\n         SN");
    printf("\tPlayers J.N ");
    printf("\t\t     Players Name ");
    printf("\t\t\tPlayers Position");
    //for Serial NO.
    int m,n,c;
    m=9,n=14;
	for(c=1;c<=11;c++)
    {
	 gotoxy(m,n);
	 fflush(stdin);
     printf("%d.",c);
     n=n+2;
 	}
    
//2nd Bottom border line...	
	gotoxy(5,12);
	for(j=0;j<100;j++)
	printf("%c",196);
	
//3nd Bottom border line... 
     gotoxy(5,37); 
     for(j=0; j<=100; j++)   
     printf("%c",254); 
     

//left and right boarder
    for(j=0; j<32; j++)
	{
			gotoxy(5,5+j);
			printf("%c",219);
	
	        gotoxy(105,5+j);
	        printf("%c",219);
    }   
//middle up down boarder   
    for(j=0;j<28;j++)
    {
    		gotoxy(13,9+j);
	        printf("%c",179);
    	
  			gotoxy(30,9+j);
	        printf("%c",179);
	        
	        gotoxy(70,9+j);
	        printf("%c",179);
	}
	int i,k,l;
	k=16,l=14;
while(fread(&Q1,sizeof(Q1),11,fpf)!=NULL)
{
	for(i=0;i<11;i++)
    {
	 gotoxy(k,l);
	 fflush(stdin);
     printf("%d",Q1[i].JN_T1);
     gotoxy(k+25,l);
     fflush(stdin);
     puts(Q1[i].P_name_T1);
     gotoxy(k+60,l);
     fflush(stdin);
     puts(Q1[i].P_position_T1);
     l=l+2;
 	}
}
	fclose(fpf);
	fflush(stdin);
	gotoxy(20,40);
    printf("Press any key to view more . . . ");
    getch();
    F_Player_det2();
}

void F_Player_det2()
{
	FILE *fpf;
	chk3:
	system("cls");
   	int j;
// 1st Bottom border line... 
    gotoxy(10,8); 
    for(j=0; j<=95; j++)   
    printf("%c",196);
    
    fflush(stdin);
	printf("\n\n\n\t\t\t\tEnter the new file name to view Player details (team 2): ");
//  Bottom border line... 
    gotoxy(10,14); 
    for(j=0; j<=95; j++)   
    printf("%c",196);
    gotoxy(89,11);
    gets(F1.chk_filename3);
   	fpf=fopen(F1.chk_filename3,"rb");
   	if(fpf==NULL)
   	{
   		fflush(stdin);
   		printf("\n\n\n\n\t\t\t\tFile not found. Please try again . . . \n\t\t\t\t");
		system("pause");
   		goto chk3;
	}
	else
	{
		printf("\n\n\n\n\t\t\t\tFile found successfully.\n\t\t\t\t");
		system("pause");
	}
	system("cls");
    gotoxy(10,2);
	printf("\t\t\t\t\tFootball Scoresheet\n\n");
//Top border line
    gotoxy(5,4); 
    for(j=0; j<101; j++)   
    printf("%c", 254);
    printf("\n\n\t\t\t\t\t    Players Detail (Team %s)",F1.team_2name);
    
// 1st Bottom border line... 
    gotoxy(5,8); 
    for(j=0; j<=100; j++)   
    printf("%c",196);
    printf("\n\n         SN");
    printf("\tPlayers J.N ");
    printf("\t\t     Players Name ");
    printf("\t\t\tPlayers Position");
    //for Serial NO.
    int m,n,c;
    m=9,n=14;
	for(c=1;c<=11;c++)
    {
	 gotoxy(m,n);
	 fflush(stdin);
     printf("%d.",c);
     n=n+2;
 	}
    
//2nd Bottom border line...	
	gotoxy(5,12);
	for(j=0;j<100;j++)
	printf("%c",196);
	
//3nd Bottom border line... 
     gotoxy(5,37); 
     for(j=0; j<=100; j++)   
     printf("%c",254); 
     

//left and right boarder
    for(j=0; j<32; j++)
	{
			gotoxy(5,5+j);
			printf("%c",219);
	
	        gotoxy(105,5+j);
	        printf("%c",219);
    }   
//middle up down boarder   
    for(j=0;j<28;j++)
    {
    		gotoxy(13,9+j);
	        printf("%c",179);
    	
  			gotoxy(30,9+j);
	        printf("%c",179);
	        
	        gotoxy(70,9+j);
	        printf("%c",179);
	}
	int i,k,l;
	k=16,l=14;
while(fread(&Q2,sizeof(Q2),11,fpf)!=NULL)
{
	for(i=0;i<11;i++)
    {
	 gotoxy(k,l);
	 fflush(stdin);
     printf("%d",Q2[i].JN_T1);
     gotoxy(k+25,l);
     fflush(stdin);
     puts(Q2[i].P_name_T1);
     gotoxy(k+60,l);
     fflush(stdin);
     puts(Q2[i].P_position_T1);
     l=l+2;
 	}
}
	fflush(stdin);
	fclose(fpf);
	gotoxy(20,40);
	printf("Press any key to view more . . . ");
    getch();
    V_Football_record1();
}

void V_Football_record1()
{
	system("cls");
	int j;
	getsfilename5:
// 1st Bottom border line... 
    gotoxy(10,8); 
    for(j=0; j<=95; j++)   
    printf("%c",196);
    
    fflush(stdin);
	printf("\n\n\n\t\t\t\tEnter the new file name to view Football Scoresheet (team 1): ");
//  Bottom border line... 
    gotoxy(10,14); 
    for(j=0; j<=95; j++)   
    printf("%c",196);
    gotoxy(94,11);
    gets(F1.chk_filename4);

	FILE *fpttr;
    fpttr = fopen(F1.chk_filename4,"rb");
    if (fpttr == NULL)
    {
    	fflush(stdin);
        printf("\n\n\n\n\n\n\t\t\t\tFile does not exist. Please try again . . .\n");
        printf("\t\t\t\t");
		system("pause");
		system("cls");
		goto getsfilename5;
    }
    
    printf("\n\n\n\n\n\t\t\t\tFile found successfully.");
    printf("\n\t\t\t\t");
	system("pause");
	
	system("cls");
    gotoxy(10,2);
	printf("\t\t\t\t\tFootball Scoresheet \n\n");
//Top border line
    gotoxy(5,4); 
    for(j=0; j<106; j++)   
    printf("%c", 254);
    printf("\n\n\t\t\t\t\t    Players Record (Team %s)",F1.team_1name);
    
// 1st Bottom border line... 
    gotoxy(5,8); 
    for(j=0; j<=105; j++)   
    printf("%c",196);
    printf("\n\n         SN");
    printf("\tPlayers J.N ");
    printf("\t        Players Name ");
    printf("\t\t   Total shoot");
    printf("\t\tTotal goal");
    //for Serial NO.
    int m,n,c;
    m=9,n=14;
	for(c=1;c<=11;c++)
    {
	 gotoxy(m,n);
	 fflush(stdin);
     printf("%d.",c);
     n=n+2;
 	}
    
//2nd Bottom border line...	
	gotoxy(5,12);
	for(j=0;j<105;j++)
	printf("%c",196);
	
//3nd Bottom border line... 
     gotoxy(5,37); 
     for(j=0; j<=105; j++)   
     printf("%c",254); 
     

//left and right boarder
    for(j=0; j<32; j++)
	{
			gotoxy(5,5+j);
			printf("%c",219);
	
	        gotoxy(110,5+j);
	        printf("%c",219);
    }   
//middle up down boarder   
    for(j=0;j<28;j++)
    {
    		gotoxy(13,9+j);
	        printf("%c",179);
    	
  			gotoxy(30,9+j);
	        printf("%c",179);
	        
	        gotoxy(60,9+j);
	        printf("%c",179);
	        
	        gotoxy(85,9+j);
	        printf("%c",179);
	}
	int i,k,l;
	k=16,l=14;
	while(fread(&Q3,sizeof(Q3),11,fpttr)!=NULL)
	{
		for(i=0;i<11;i++)
		{
		gotoxy(k+50,l);
		fflush(stdin);
		printf("%d",Q3[i].shoot);
		gotoxy(k+75,l);
		fflush(stdin);
		printf("%d",Q3[i].goal);
		l=l+2;
		}
	}
	fclose(fpttr);
	
	FILE *fpf;
    fpf=fopen(F1.chk_filename2,"rb");
	k=16,l=14;
    while(fread(&Q1,sizeof(Q1),11,fpf)!=NULL)
{
	for(i=0;i<11;i++)
    {
	 fflush(stdin);
	 gotoxy(k,l);
	 fflush(stdin);
     printf("%d",Q1[i].JN_T1);
     gotoxy(k+20,l);
     fflush(stdin);
     puts(Q1[i].P_name_T1);
     l=l+2;
 	}
}
	fflush(stdin);
	fclose(fpf);
	
	int Total_shoot,Total_goal,saved,misconduct,assist;
	FILE *fpp;
	fpp=fopen("football_team1.txt","r");
	fflush(stdin);
	gotoxy(16,40);
    while((fscanf(fpp,"%d%d%d%d%d",&misconduct,&saved,&assist,&Total_shoot,&Total_goal))!=EOF)
    {
    	printf("Total misconduct: %d\n\t\tTotal saved: %d\n\t\tTotal assist: %d\n\t\tTotal Shoot Made: %d\n\t\tTotal Goal Scored: %d",misconduct,saved,assist,Total_shoot,Total_goal);
	}
    fclose(fpp);
	
    gotoxy(16,46);
    printf("Press any key to continue . . . ");
	getch();
	V_Football_record2();
}

void V_Football_record2()
{
	system("cls");
	int j;
	getsfilename5:
// 1st Bottom border line... 
    gotoxy(10,8); 
    for(j=0; j<=95; j++)   
    printf("%c",196);
    
    fflush(stdin);
	printf("\n\n\n\t\t\t\tEnter the new file name to view Football Scoresheet (team 2): ");
//  Bottom border line... 
    gotoxy(10,14); 
    for(j=0; j<=95; j++)   
    printf("%c",196);
    gotoxy(94,11);
    gets(F1.chk_filename5);

	FILE *fpttr;
    fpttr = fopen(F1.chk_filename5,"rb");
    if (fpttr == NULL)
    {
    	fflush(stdin);
        printf("\n\n\n\n\n\n\t\t\t\tFile does not exist. Please try again . . .\n");
        printf("\t\t\t\t");
		system("pause");
		system("cls");
		goto getsfilename5;
    }
    
    printf("\n\n\n\n\n\t\t\t\tFile found successfully.");
    printf("\n\t\t\t\t");
	system("pause");
	
	system("cls");
    gotoxy(10,2);
	printf("\t\t\t\t\tFootball Scoresheet \n\n");
//Top border line
    gotoxy(5,4); 
    for(j=0; j<106; j++)   
    printf("%c", 254);
    printf("\n\n\t\t\t\t\t    Players Record (Team %s)",F1.team_2name);
    
// 1st Bottom border line... 
    gotoxy(5,8); 
    for(j=0; j<=105; j++)   
    printf("%c",196);
    printf("\n\n         SN");
    printf("\tPlayers J.N ");
    printf("\t        Players Name ");
    printf("\t\t   Total shoot");
    printf("\t\tTotal goal");
    //for Serial NO.
    int m,n,c;
    m=9,n=14;
	for(c=1;c<=11;c++)
    {
	 gotoxy(m,n);
	 fflush(stdin);
     printf("%d.",c);
     n=n+2;
 	}
    
//2nd Bottom border line...	
	gotoxy(5,12);
	for(j=0;j<105;j++)
	printf("%c",196);
	
//3nd Bottom border line... 
     gotoxy(5,37); 
     for(j=0; j<=105; j++)   
     printf("%c",254); 
     

//left and right boarder
    for(j=0; j<32; j++)
	{
			gotoxy(5,5+j);
			printf("%c",219);
	
	        gotoxy(110,5+j);
	        printf("%c",219);
    }   
//middle up down boarder   
    for(j=0;j<28;j++)
    {
    		gotoxy(13,9+j);
	        printf("%c",179);
    	
  			gotoxy(30,9+j);
	        printf("%c",179);
	        
	        gotoxy(60,9+j);
	        printf("%c",179);
	        
	        gotoxy(85,9+j);
	        printf("%c",179);
	}
	int i,k,l;
	k=16,l=14;
	while(fread(&Q4,sizeof(Q4),11,fpttr)!=NULL)
	{
		for(i=0;i<11;i++)
		{
		gotoxy(k+50,l);
		fflush(stdin);
		printf("%d",Q4[i].shoot);
		gotoxy(k+75,l);
		fflush(stdin);
		printf("%d",Q4[i].goal);
		l=l+2;
		}
	}
	fclose(fpttr);
	
	FILE *fptr;
    fptr=fopen(F1.chk_filename3,"rb");
	k=16,l=14;
    while(fread(&Q2,sizeof(Q2),11,fptr)!=NULL)
{
	for(i=0;i<11;i++)
    {
	 gotoxy(k,l);
	 fflush(stdin);
     printf("%d",Q2[i].JN_T1);
     gotoxy(k+20,l);
     fflush(stdin);
     puts(Q2[i].P_name_T1);
     l=l+2;
 	}
}
	fflush(stdin);
	fclose(fptr);
	
	int Total_shoot,Total_goal2,misconduct,saved,assist;
	FILE *fpp;
	fpp=fopen("football_team2.txt","r");
	fflush(stdin);
	gotoxy(16,40);
    while((fscanf(fpp,"%d%d%d%d%d",&misconduct,&saved,&assist,&Total_shoot,&Total_goal2))!=EOF)
    {
    	printf("Total misconduct: %d\n\t\tTotal saved: %d\n\t\tTotal assist: %d\n\t\tTotal Shoot Made: %d\n\t\tTotal Goal Scored: %d",misconduct,saved,assist,Total_shoot,Total_goal2);
	}
    fclose(fpp);
	
	int Total_goal;
    gotoxy(16,46);
    printf("Press any key to continue . . . ");
	getch();
	system("cls");
	FILE *ffp;
	ffp=fopen("football_team1.txt","r");
	while((fscanf(fpp,"%d\t%d\t%d\t%d\t%d",&misconduct,&saved,&assist,&Total_shoot,&Total_goal))!=EOF)
	{
		if(Total_goal>Total_goal2)
		{
			printf("\n\n\n\n\n\n\t\t\t\tCongratulation Team %s !!!",F1.team_1name);
			printf("\n\t\t\t\t%s: %d",F1.team_1name,Total_goal);
			printf("\n\t\t\t\t%s: %d",F1.team_2name,Total_goal2);
			//printf("\n\n\t\t\t\tPress any key to continue . . .");
			//getch();
		}
		else if(Total_goal2>Total_goal)
		{
			printf("\n\n\n\n\n\n\t\t\t\tCongratulation Team %s !!!",F1.team_2name);
			printf("\n\t\t\t\t%s: %d",F1.team_1name,Total_goal);
			printf("\n\t\t\t\t%s: %d",F1.team_2name,Total_goal2);
			//printf("\n\n\t\t\t\tPress any key to continue . . . ");
			//getch();
		}
		else
		{
			printf("\n\t\t\t\tMatch Tied !!!");
			printf("\n\t\t\t\t%s: %d",F1.team_1name,Total_goal);
			printf("\n\t\t\t\t%s: %d",F1.team_2name,Total_goal2);
			//printf("\n\n\t\t\t\tPress any key to continue . . . ");
			//getch();
		}
	}
	fclose(ffp);
	printf("\n\n\n\t\t\t\t\t\tMatch Summary: ");
// Top Border line... 
    gotoxy(10,13); 
    for(j=0; j<=90; j++)   
    printf("%c",254);
// Second Border line... 
    gotoxy(10,17); 
    for(j=0; j<=90; j++)   
    printf("%c",254);
// Second Border line... 
    gotoxy(10,22); 
    for(j=0; j<=90; j++)   
    printf("%c",196);
// Second Border line... 
    gotoxy(10,26); 
    for(j=0; j<=90; j++)   
    printf("%c",196);
// Second Border line... 
    gotoxy(10,30); 
    for(j=0; j<=90; j++)   
    printf("%c",196);
// Second Border line... 
    gotoxy(10,34); 
    for(j=0; j<=90; j++)   
    printf("%c",196);
// last Border line... 
    gotoxy(10,39); 
    for(j=0; j<=90; j++)   
    printf("%c",254);
// left and right boarder
    for(j=0; j<25; j++)
	{
			gotoxy(10,14+j);
			printf("%c",219);
	
	        gotoxy(55,14+j);
	        printf("%c",219);
	
	        gotoxy(100,14+j);
	        printf("%c",219);
    }   
// left and right boarder
	for(j=0; j<21; j++)
	{
		gotoxy(33,18+j);
		printf("%c",179);
		
		gotoxy(78,18+j);
		printf("%c",179);
	}
	FILE *fff;
	fff=fopen("football_team1.txt","r");
	while((fscanf(fpp,"%d\t%d\t%d\t%d\t%d",&misconduct,&saved,&assist,&Total_shoot,&Total_goal))!=EOF)
	{
		gotoxy(30,15);
		printf("Team %s",F1.team_1name);
		gotoxy(15,20);
		printf("Total goals: \t\t%d",Total_goal);
		gotoxy(15,24);
		printf("Total shoots: \t\t%d",Total_shoot);
		gotoxy(15,28);
		printf("Total saved: \t\t%d",saved);
		gotoxy(15,32);
		printf("Total misconduct: \t%d",misconduct);
		gotoxy(15,36);
		printf("Total assist: \t\t%d",assist);	
	}
	fclose(fff);
	FILE *ff;
	ff=fopen("football_team2.txt","r");
	while((fscanf(ff,"%d\t%d\t%d\t%d\t%d",&misconduct,&saved,&assist,&Total_shoot,&Total_goal2))!=EOF)
	{
		gotoxy(73,15);
		printf("Team %s",F1.team_2name);
		gotoxy(60,20);
		printf("Total goals: \t\t%d",Total_goal2);
		gotoxy(60,24);
		printf("Total shoots: \t\t%d",Total_shoot);
		gotoxy(60,28);
		printf("Total saved: \t\t%d",saved);
		gotoxy(60,32);
		printf("Total misconduct: \t\t%d",misconduct);
		gotoxy(60,36);
		printf("Total assist: \t\t%d",assist);	
	}
	fclose(ff);
	gotoxy(15,41);
	printf("Press any key to continue . . . ");
	getch();
	Home();
}

void search_football()
{
	system("cls");
    printf("you can search football files from here");
}
