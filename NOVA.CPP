#include<conio.h>
#include<stdio.h>
#include<ctype.h>
#include<math.h>
#include<process.h>
#include<dos.h>
#include<stdlib.h>
#include<string.h>
#include<fstream.h>
#include<graphics.h>

int gd=DETECT,gm;

char xborderstyle=220;
char yborderstyle=219;
char NOVA_user[200];
char NOVA_boss1[10],NOVA_boss2[10];
char NOVA_gender;

long double NOVA_string_to_number(char[]); /* Converts number in form of characters to integer */
void NOVA_change_sentence_case(char[], int);
char* NOVA_correct_space();
long double NOVA_quadratic(long double, long double, long double);
void NOVA_startup(int);
void NOVA_game1();  /*Security*/
void NOVA_user_input();
void NOVA_computer_output(int);
void NOVA_computer_extraction();
void NOVA_computer_quadratic(char);
void NOVA_computer_arithmetic();
void NOVA_computer_trignometry(int);
void NOVA_computer_log(int);
void NOVA_computer_exponent(int);
void NOVA_can_do();
void NOVA_creator();
void NOVA_intro();
void NOVA_games();

void NOVA_ques_ans_table();
void NOVA_disp_ques_ans(char[]);
void NOVA_ques_insert();
void NOVA_ques_ans_editing();
void NOVA_ques_displayall();
void NOVA_ans_displayall();


void tictacto();
void tictacto_border();
int tictacto_bx1=1,tictacto_bx2=79,tictacto_by1=1, tictacto_by2=25;
void tictacto_disp();
void tictacto_check();
void tictacto_win();
void tictacto_pwin();
void tictacto_cwin();
void tictacto_tie();
void tictacto_game();
void tictacto_enterno();
void tictacto_computer();
void tictacto_computer1();
void tictacto_computer2();
void tictacto_computer3();
void tictacto_boardy();
char tictacto_board[9];
char tictacto_choice;
int flag=0,no,a,c;  /*flag=1-tictacto_pwin; flag=2-tictacto_cwin; flag=3-tictacto_tie; */
char tictacto_cmark,tictacto_pmark;



int snake_p,snake_q,snake_len1,snake_len2,snake_i,snake_points, snake_score1;
char snake_choice,snake_gamechoice,snake_gogame,snake_level1;


void snake_border();         //The function creates the snake_border.
int snake_bx1=1;             //Minimum limit of SNAKE_X- Coordinate of snake_border in TEXT MODE.
int snake_bx2=79;            //Maxiimum limit of SNAKE_X- Coordinate of snake_border in TEXT MODE.
int snake_by1=1;             //Minimum limit of SNAKE_Y- Coordinate of snake_border in TEXT MODE.
int snake_by2=24;            //Maximum limit of SNAKE_Y- Coordinate of snake_border in TEXT MODE.

void snake_game1();     //This function provides the password security.
void snake_logo();         //This function creates the snake_logo of Ryan.
void snake_intro();        //This function is programmed by the programmer for startup purpose.
void snake_notification(); //This function is programmed by the programmer for startup purpose.
void snake_instructions(); //This function is programmed by the programmer for startup purpose.
void snake_level();        //This function dynamically allocate the speed of the snake.
void snake_game();         //The main snake_body (Program) of the snake_game.
void snake_rup(int&,int&,int&);    //The function turns the right moving snake in upward direction.
void snake_rdown(int&,int&, int&); //The functions turns the right moving snake in downward direction.
void snake_lup(int&,int&,int&);    //The functions turns the left moving snake in upward direction.
void snake_ldown(int&,int&, int&); //The function turns the left moving snake in downward direction.
void snake_uright(int&,int&,int&); //The function turns the up moving snake in right direction.
void snake_uleft(int&,int&,int&);  //The functions turns the up moving snake in left direction.
void snake_dright(int&,int&,int&); //The function turns the down moving snake in right direction.
void snake_dleft(int&,int&,int&);  //The function turns the down moving snake in left direction.
void snake_leave();      //The function works when you want to snake_leave the snake_game in between.
void snake_leavegame(); //The function works when you want to snake_leave the snake_game in between.
void snake_loose();      //The function works when you lose the snake_game.
void snake_score();      //The function displays the 'Points', 'Score' and 'Life' on their respective position on the console.
void snake_check();      //The function does the work of collision detection of snake with snake_enemy, snake_food and snake_life snake_food.


void snake_genfood();         //The function creates the random position for snake_food, keeping in note for free space on console.
int snake_foodx , snake_foody;
char snake_food =1;            //Character used to draw snake_food.
void snake_dispfood();        //The function displays the snake_food on the console at the position genreated.


void snake_genenemy();          //The function creates the random position for snake_enemy, keeping in note for free space on console.
int snake_enemyx , snake_enemyy;
char snake_enemy=15;            //Character used to draw snake_enemy.
void snake_dispenemy();         //The function displays the snake_enemy on the console at the position generated.


void snake_genlife();       //The function creates the random position for snake_life snake_food, keeping in note for free space on console.
int snake_lifex, snake_lifey, snake_life, snake_lifeflag;
char snake_lyf=3;           //Character used to draw snake_life snake_food.
int snake_lifecomp;
int snake_wait;
void snake_displife();      //The function displays the snake_life snake_food on the console at the position genreated.


int snake_tym;       //Perception time of the snake_game/ speed of the snake_game.
int snake_size;
int snake_x,snake_y;
char snake_head=2;   //Character used to draw the snake_head of the snake.
char snake_body=48;  //Character used to draw the snake_body of the snake.
char snake_ch=77,f;
/*xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx*/
/*xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx*/



void NOVA_contact_disp_address(char[]);
void NOVA_contact_border();
void NOVA_contacts_displayall() ;

class NOVA_contacts
{

char NOVA_contact_nickname[15];
char NOVA_contact_address[150];
public:
char NOVA_contact_name[30];
char NOVA_contact_number[20];

void NOVA_contact_input()
{
 clrscr();
 cout<<"\n\t\t\t   Input Contact Name";
 cout<<"\n\n\nEnter Name: ";
 cout.flush();
  strcpy(NOVA_contact_name,NOVA_correct_space());
 cout<<"\nEnter Contact Number:\n (Add Country code with space; '+' <country code> <number>):\n" ;
 cout.flush();
  strcpy(NOVA_contact_number,NOVA_correct_space());
 cout<<"\nEnter the nick name: ";
  cout.flush();
 cin.getline(NOVA_contact_nickname,16,'\n');
 cout<<"\nEnter the Address: ";
  cout.flush();
 cin.getline(NOVA_contact_address,150,'\n');
}

void NOVA_contact_output()
{
clrscr();
NOVA_contact_border();
gotoxy(30,2);
cout<<NOVA_contact_number;
gotoxy(30,4);
cout<<NOVA_contact_name;
gotoxy(30,6);
cout<<NOVA_contact_nickname;
NOVA_contact_disp_address(NOVA_contact_address);
}
};

/*xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx*/
/*xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx*/
void NOVA_diary_disp_content(char[]);
void NOVA_diary_border();
void NOVA_diary_displayall() ;

class NOVA_diary
{
char NOVA_diary_content[1000];
public:
char NOVA_diary_date[20];

void NOVA_diary_input()
{
 clrscr();
 cout<<"\n\t\t\t\tInput Diary";
 cout<<"\n\n\nEnter Date (dd-mm-yyyy): ";
 cout.flush();
  strcpy(NOVA_diary_date,NOVA_correct_space());
 cout<<"\n\nInput (PRESS ENTER ONLY WHEN YOU ARE DONE). Max character limit: 1000\n";
  cout.flush();
  cin.getline(NOVA_diary_content,1001,'\n') ;
}

void NOVA_diary_output()
{
clrscr();
NOVA_diary_border();
gotoxy(10,2);
cout<<NOVA_diary_date;
NOVA_diary_disp_content(NOVA_diary_content);
}
};



/*xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx*/
/*xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx*/

class NOVA_question_answer
{
 int NOVA_ques_ans_no, NOVA_ques_ans_retno;
public:
 char NOVA_ques_ans[200];
 int return_NOVA_ques_ans_no()
 {
  return NOVA_ques_ans_no;
  }
 int return_NOVA_ques_ans_retno()
 {
  return NOVA_ques_ans_retno;
  }

 void input()
 {
  clrscr();
  cout<<"\n\t\t\t\t\tList";
  cout<<"\nInput Sr. NO.: ";
  cin>>NOVA_ques_ans_no;
  cout<<"\nInput Statement: ";
  cout.flush();
  cin.ignore();
  strcpy(NOVA_ques_ans,NOVA_correct_space());

  cout<<"\n\nInput Return no: ";
  cin>>NOVA_ques_ans_retno;
  }

 void display()
 {
  clrscr();
  NOVA_ques_ans_table();
  gotoxy(20,2);
  cout<<NOVA_ques_ans_no;;
  NOVA_disp_ques_ans(NOVA_ques_ans);
  gotoxy(20,9);
  cout<<NOVA_ques_ans_retno;
  }
};

/*xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx*/
/*xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx*/
/*xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx*/
/*xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx*/

void main()
{
clrscr();
NOVA_startup(10);
clrscr();
cout<<"\n\t\t\tWelcome to the world of NOVA";
cout<<"\n\t\t\t\tI am NOVA";
cout<<"\n\n\nNOVA: Press 'M' is you are male or Press 'F'if you are female.\n\n";
cout.flush();
retake:
NOVA_gender=getch();
if(NOVA_gender=='m'|| NOVA_gender=='M')
{
 strcpy(NOVA_boss1,"Sir, ");
 strcpy(NOVA_boss2,", sir.");
 }

else if(NOVA_gender=='f'|| NOVA_gender=='F')
{
 strcpy(NOVA_boss1,"Ma'am, ");
 strcpy(NOVA_boss2,", ma'am.");
 }
else goto retake;

start:
NOVA_user_input();
goto start;

 }


/*xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx*/
/*xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx*/
/*xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx*/
/*xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx*/

/*-----------------------------------------------------*/




/*xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx*/
/*xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx*/

long double NOVA_quadratic(long double NOVA_quadratic_a,long double NOVA_quadratic_b,long double NOVA_quadratic_c, int NOVA_quadratic_condition)
{
long double NOVA_quadratic_root, NOVA_quadratic_d;

NOVA_quadratic_d=pow(NOVA_quadratic_b,2)-(4*NOVA_quadratic_a*NOVA_quadratic_c);
if(NOVA_quadratic_d<0)
return -1;

NOVA_quadratic_d=sqrt(NOVA_quadratic_d);

if(NOVA_quadratic_condition==2)
NOVA_quadratic_d*=-1;

NOVA_quadratic_root=(-NOVA_quadratic_b+NOVA_quadratic_d)/(2*NOVA_quadratic_a);
return NOVA_quadratic_root;

}

/*xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx*/
/*xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx*/

void NOVA_change_sentence_case( char NOVA_change_case_char[], int NOVA_change_case_condition)
{

int NOVA_change_case_i;

if(NOVA_change_case_condition==-1)
{
 for(NOVA_change_case_i=0; NOVA_change_case_char[NOVA_change_case_i]!='\0'; NOVA_change_case_i++)
 {
  NOVA_change_case_char[NOVA_change_case_i]=tolower(NOVA_change_case_char[NOVA_change_case_i]);
  }
 }

if(NOVA_change_case_condition==0)
{
 for(NOVA_change_case_i=0; NOVA_change_case_char[NOVA_change_case_i]!='\0'; NOVA_change_case_i++)
 {
  if(isupper(NOVA_change_case_char[NOVA_change_case_i]))
   NOVA_change_case_char[NOVA_change_case_i]=tolower(NOVA_change_case_char[NOVA_change_case_i]);
  else
   NOVA_change_case_char[NOVA_change_case_i]=toupper(NOVA_change_case_char[NOVA_change_case_i]);
  }
 }

if(NOVA_change_case_condition==1)
{
 for(NOVA_change_case_i=0; NOVA_change_case_char[NOVA_change_case_i]!='\0'; NOVA_change_case_i++)
 {
  NOVA_change_case_char[NOVA_change_case_i]=toupper(NOVA_change_case_char[NOVA_change_case_i]);
  }
 }
}


/*xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx*/
/*xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx*/

long double NOVA_string_to_number( char NOVA_number_input[50] ) /* Number in form of charcters */
{

long double NOVA_number_int=0,NOVA_temp, NOVA_number_j; /*Number in form of characters converted to integer*/
int NOVA_number_i;  /* Local Variables */

for(NOVA_number_i=0; NOVA_number_input[NOVA_number_i]!='\0'; NOVA_number_i++)
{
 if(NOVA_number_input[NOVA_number_i]=='.')
 {
  NOVA_number_i+=1;
  goto decimal; /* Function goes to add decimal values */
  }

 if(isdigit(NOVA_number_input[NOVA_number_i]))
 {
  NOVA_number_int*=10;
  NOVA_number_int+=(NOVA_number_input[NOVA_number_i]-48);
  }
 }

decimal:
for(NOVA_number_j=10; NOVA_number_input[NOVA_number_i]!='\0'; NOVA_number_i++,NOVA_number_j*=10)
{
 if(isdigit(NOVA_number_input[NOVA_number_i]))
 {
  NOVA_temp=NOVA_number_input[NOVA_number_i]-48;
  NOVA_number_int+= NOVA_temp/NOVA_number_j;
  }
 }

return NOVA_number_int;
}

/*xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx*/
/*xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx*/

char* NOVA_correct_space()
{
ofstream NOVA_correct_space_fout;
ifstream NOVA_correct_space_fin;

char ch;
int NOVA_correct_space_n,NOVA_correct_space_i,NOVA_correct_space_j;


cout.flush();
char NOVA_correct_space_a[200];
cin.getline(NOVA_correct_space_a,200,'\n');
NOVA_correct_space_fout.open("NOVATEMP.txt");
NOVA_correct_space_fout<<NOVA_correct_space_a;

NOVA_correct_space_fout.close();

NOVA_correct_space_fin.open("NOVATEMP.txt");
NOVA_correct_space_fin.seekg(0,ios::end);
NOVA_correct_space_n=NOVA_correct_space_fin.tellg();
NOVA_correct_space_fin.seekg(0,ios::beg);

char NOVA_correct_space_b[200],NOVA_correct_space_c[200];
for(NOVA_correct_space_i=0; NOVA_correct_space_i<200; NOVA_correct_space_i++)
{
 NOVA_correct_space_b[NOVA_correct_space_i]='\0';
 NOVA_correct_space_c[NOVA_correct_space_i]='\0';
 }

for(NOVA_correct_space_i=0; NOVA_correct_space_fin.tellg()!=NOVA_correct_space_n;)
{
 NOVA_correct_space_fin.getline(NOVA_correct_space_c,200,' ');
 for(NOVA_correct_space_j=0; NOVA_correct_space_c[NOVA_correct_space_j]!='\0';)
 {
  if(NOVA_correct_space_i!=0 && NOVA_correct_space_j==0)
  {
  NOVA_correct_space_b[NOVA_correct_space_i]=' ';
  NOVA_correct_space_i++;
  }
  if(isdigit(NOVA_correct_space_c[NOVA_correct_space_j]) && isdigit(NOVA_correct_space_c[NOVA_correct_space_j+1]))
  {
   NOVA_correct_space_b[NOVA_correct_space_i]=NOVA_correct_space_c[NOVA_correct_space_j];
   NOVA_correct_space_i++;
   NOVA_correct_space_j++;
   }

  else if(isdigit(NOVA_correct_space_c[NOVA_correct_space_j]) && !isdigit(NOVA_correct_space_c[NOVA_correct_space_j+1]))
  {
   NOVA_correct_space_b[NOVA_correct_space_i]=NOVA_correct_space_c[NOVA_correct_space_j];
   NOVA_correct_space_b[++NOVA_correct_space_i]=' ';
   NOVA_correct_space_i++;
   NOVA_correct_space_j++;
   }
  else if(isalpha(NOVA_correct_space_c[NOVA_correct_space_j]) && isalpha(NOVA_correct_space_c[NOVA_correct_space_j+1]))
  {
   NOVA_correct_space_b[NOVA_correct_space_i]=NOVA_correct_space_c[NOVA_correct_space_j];
   NOVA_correct_space_i++;
   NOVA_correct_space_j++;
   }

  else if(isalpha(NOVA_correct_space_c[NOVA_correct_space_j]) && !isalpha(NOVA_correct_space_c[NOVA_correct_space_j+1]))
  {
   NOVA_correct_space_b[NOVA_correct_space_i]=NOVA_correct_space_c[NOVA_correct_space_j];
   NOVA_correct_space_b[++NOVA_correct_space_i]=' ';
   NOVA_correct_space_i++;
   NOVA_correct_space_j++;
   }

  else if(!isalnum(NOVA_correct_space_c[NOVA_correct_space_j]) && NOVA_correct_space_c[NOVA_correct_space_j]!=' ')
  {
   NOVA_correct_space_b[NOVA_correct_space_i]=NOVA_correct_space_c[NOVA_correct_space_j];
   NOVA_correct_space_b[++NOVA_correct_space_i]=' ';
   NOVA_correct_space_i++;
   NOVA_correct_space_j++;
   }

  else if(NOVA_correct_space_c[NOVA_correct_space_j]==' ')
  NOVA_correct_space_j++;

  if(NOVA_correct_space_c[NOVA_correct_space_j]=='\0')
   NOVA_correct_space_i--;

 }
}
NOVA_correct_space_fin.close();
NOVA_correct_space_b[strlen(NOVA_correct_space_b)-1]='\0';

return NOVA_correct_space_b;
}

/*xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx*/
/*xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx*/

void NOVA_startup(int NOVA_flag)
{
 clrscr();
initgraph(&gd,&gm,"c:/tc/bgi");

int NOVA_startup_midx=getmaxx()/2,NOVA_startup_midy=getmaxy()/2,i;
int NOVA_startup_st,NOVA_startup_end;
char NOVA_var;

settextstyle(10,0,7);
setcolor(8);
setfillstyle(1,8);
circle(NOVA_startup_midx,NOVA_startup_midy,NOVA_startup_midy-90);
circle(NOVA_startup_midx,NOVA_startup_midy,NOVA_startup_midy-95);
floodfill(466,230,8);


setcolor(11);
setfillstyle(1,11);
outtextxy(NOVA_startup_midx-NOVA_startup_midx/3-22,NOVA_startup_midy-NOVA_startup_midy/2+40,"NOVA");
floodfill(230,220,11);
floodfill(330,220,11);
floodfill(265,220,11);
floodfill(410,220,11);
settextstyle(0,0,1);
outtextxy(NOVA_startup_midx-NOVA_startup_midx/2+10,NOVA_startup_midy+180,"Developed and Created by: Vaibhav Gupta");
settextstyle(0,0,2);

if(NOVA_flag==10)
outtextxy(NOVA_startup_midx-NOVA_startup_midx/3-18,NOVA_startup_midy-180,"INITALIZING NOVA");

if(NOVA_flag==20)
outtextxy(NOVA_startup_midx-NOVA_startup_midx/3-60,NOVA_startup_midy-180,"INITALIZING SNAKE GAME");

if(NOVA_flag==30)
outtextxy(NOVA_startup_midx-NOVA_startup_midx/3-50,NOVA_startup_midy-180,"INITALIZING TICTACTO");

for(NOVA_startup_st=0,NOVA_startup_end=0; NOVA_startup_end<=360; NOVA_startup_end++)
{
 setcolor(11);
 arc(NOVA_startup_midx,NOVA_startup_midy,NOVA_startup_st,NOVA_startup_end,NOVA_startup_midy-90);
 arc(NOVA_startup_midx,NOVA_startup_midy,NOVA_startup_st,NOVA_startup_end,NOVA_startup_midy-91);
 arc(NOVA_startup_midx,NOVA_startup_midy,NOVA_startup_st,NOVA_startup_end,NOVA_startup_midy-92);
 arc(NOVA_startup_midx,NOVA_startup_midy,NOVA_startup_st,NOVA_startup_end,NOVA_startup_midy-93);
 arc(NOVA_startup_midx,NOVA_startup_midy,NOVA_startup_st,NOVA_startup_end,NOVA_startup_midy-94);
 arc(NOVA_startup_midx,NOVA_startup_midy,NOVA_startup_st,NOVA_startup_end,NOVA_startup_midy-95);

 delay(2);
 if(kbhit())
 {
  NOVA_var=getch();
  if(NOVA_var=='V'||NOVA_var=='v')
  {
   closegraph();
   NOVA_game1();
   NOVA_ques_ans_editing();
   return;
   }
  }

 }
closegraph();
return;
 }


/*xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx*/
/*xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx*/


void NOVA_ques_displayall()
{
 ofstream fout,fout1;
 ifstream fin;
 NOVA_question_answer NOVA_q;
 int NOVA_n, NOVA_pos, NOVA_i,NOVA_j,NOVA_temp_no,NOVA_u;
 char NOVA_ch;
 start:
 fin.open("NOVAQUES.dat",ios::in|ios::binary);
 if(!fin)
 goto add;
 fin.seekg(0,ios::end);
 NOVA_n=fin.tellg()/sizeof(NOVA_q);
 fin.seekg(0,ios::beg);
 NOVA_i=0;
 show:
  fin.read((char*)&NOVA_q,sizeof(NOVA_q));
  NOVA_q.display();
  gotoxy(5,15);
  cout<<"Use arrow keys to toggle between records. \n\t*Press 'Enter' key to MODIFY. \n\t*Press 'Esc' key to exit.\n\t*Press '+' to insert new record.\n\t*Press 'Space' key to search a particular record.";

  reselect:
   NOVA_ch=getch();
   if(NOVA_ch==75 && NOVA_i>0)
   {
    NOVA_pos=fin.tellg();
    NOVA_pos-=2*sizeof(NOVA_q);
    fin.seekg(NOVA_pos);
    NOVA_i--;
    goto show;
    }

   else if(NOVA_ch==77 && NOVA_i<NOVA_n-1)
   {
    NOVA_i++;
    goto show;
    }

   else if(NOVA_ch==27)
   {
    fin.close();
    return;
    }
   else if(NOVA_ch=='+')
   {
    fin.close();
    add:
    NOVA_q.input();
    fout.open("NOVAQUES.dat",ios::app|ios::binary);
    fout.write((char*)&NOVA_q,sizeof(NOVA_q));
    fout.close();
    goto start;
    }

   else if(NOVA_ch=='-')
   {
    NOVA_temp_no=NOVA_q.return_NOVA_ques_ans_no();
    fin.seekg(0,ios::beg);
    fout1.open("NOVA0000.dat",ios::binary);
    for(NOVA_u=0; NOVA_u<NOVA_n; NOVA_u++)
    {
     fin.read((char*)&NOVA_q,sizeof(NOVA_q));
     if(NOVA_temp_no!=NOVA_q.return_NOVA_ques_ans_no())
     fout1.write((char*)&NOVA_q,sizeof(NOVA_q));
     }
    fout1.close();
    fin.close();
    remove("NOVAQUES.dat");
    rename("NOVA0000.dat","NOVAQUES.dat");
    goto start;
   }

   else if(NOVA_ch==13)
   {
    cout<<"\n\nAre you sure you want to modify the record?(y/n)";
    re:
    NOVA_ch=getch();
    if(NOVA_ch=='n'||NOVA_ch=='N')
     {
      NOVA_pos=fin.tellg();
      NOVA_pos-=sizeof(NOVA_q);
      fin.seekg(NOVA_pos);
      goto show;
      }
     else if(NOVA_ch=='y'||NOVA_ch=='Y')
     {
      NOVA_pos=fin.tellg();
      NOVA_pos-=sizeof(NOVA_q);
      fin.close();
      NOVA_q.input();
      fout.open("NOVAQUES.dat",ios::ate|ios::binary);
      fout.seekp(NOVA_pos);
      fout.write((char*)&NOVA_q,sizeof(NOVA_q));
      fout.close();
      goto start;
      }
     else goto re;
    }
   else if(NOVA_ch==32)
   {
    cout<<"\n\nEnter the Sr.no you are searching for: ";
    cin>>NOVA_temp_no;
    fin.seekg(0,ios::beg);
    for(NOVA_j=0; NOVA_j<NOVA_n; NOVA_j++)
    {
     fin.read((char*)&NOVA_q,sizeof(NOVA_q));
     if(NOVA_temp_no==NOVA_q.return_NOVA_ques_ans_no())
     {
      NOVA_pos=fin.tellg();
      NOVA_pos-=sizeof(NOVA_q);
      fin.seekg(NOVA_pos);
      NOVA_i=NOVA_j;
      goto show;
      }
     }
   }
   else goto reselect;
 }

/*xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx*/
/*xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx*/

void NOVA_ans_displayall()
{
 ofstream fout,fout1;
 ifstream fin;
 NOVA_question_answer NOVA_q;
 int NOVA_n, NOVA_pos, NOVA_i,NOVA_j,NOVA_temp_no,NOVA_u;
 char NOVA_ch;
 start:
 fin.open("NOVAAANS.dat",ios::in|ios::binary);
 if(!fin)
 goto add;
 fin.seekg(0,ios::end);
 NOVA_n=fin.tellg()/sizeof(NOVA_q);
 fin.seekg(0,ios::beg);
 NOVA_i=0;
 show:
  fin.read((char*)&NOVA_q,sizeof(NOVA_q));
  NOVA_q.display();
  gotoxy(5,15);
  cout<<"Use arrow keys to toggle between records. \n\t*Press 'Enter' key to MODIFY. \n\t*Press 'Esc' key to exit.\n\t*Press '+' to insert new record.\n\t*Press 'Space' key to search a particular record.";

  reselect:
   NOVA_ch=getch();
   if(NOVA_ch==75 && NOVA_i>0)
   {
    NOVA_pos=fin.tellg();
    NOVA_pos-=2*sizeof(NOVA_q);
    fin.seekg(NOVA_pos);
    NOVA_i--;
    goto show;
    }

   else if(NOVA_ch==77 && NOVA_i<NOVA_n-1)
   {
    NOVA_i++;
    goto show;
    }

   else if(NOVA_ch==27)
   {
    fin.close();
    return;
    }
   else if(NOVA_ch=='+')
   {
    fin.close();
    add:
    NOVA_q.input();
    fout.open("NOVAAANS.dat",ios::app|ios::binary);
    fout.write((char*)&NOVA_q,sizeof(NOVA_q));
    fout.close();
    goto start;
    }

   else if(NOVA_ch=='-')
   {
    NOVA_temp_no=NOVA_q.return_NOVA_ques_ans_no();
    fin.seekg(0,ios::beg);
    fout1.open("NOVA0000.dat",ios::binary);
    for(NOVA_u=0; NOVA_u<NOVA_n; NOVA_u++)
    {
     fin.read((char*)&NOVA_q,sizeof(NOVA_q));
     if(NOVA_temp_no!=NOVA_q.return_NOVA_ques_ans_no())
     fout1.write((char*)&NOVA_q,sizeof(NOVA_q));
     }
    fout1.close();
    fin.close();
    remove("NOVAAANS.dat");
    rename("NOVA0000.dat","NOVAAANS.dat");
    goto start;
   }


   else if(NOVA_ch==13)
   {
    cout<<"\n\nAre you sure you want to modify the record?(y/n)";
    re:
    NOVA_ch=getch();
    if(NOVA_ch=='n'||NOVA_ch=='N')
     {
      NOVA_pos=fin.tellg();
      NOVA_pos-=sizeof(NOVA_q);
      fin.seekg(NOVA_pos);
      goto show;
      }
     else if(NOVA_ch=='y'||NOVA_ch=='Y')
     {
      NOVA_pos=fin.tellg();
      NOVA_pos-=sizeof(NOVA_q);
      fin.close();
      NOVA_q.input();
      fout.open("NOVAAANS.dat",ios::ate|ios::binary);
      fout.seekp(NOVA_pos);
      fout.write((char*)&NOVA_q,sizeof(NOVA_q));
      fout.close();
      goto start;
      }
     else goto re;
    }
   else if(NOVA_ch==32)
   {
    cout<<"\n\nEnter the Sr.no you are searching for: ";
    cin>>NOVA_temp_no;
    fin.seekg(0,ios::beg);
    for(NOVA_j=0; NOVA_j<NOVA_n; NOVA_j++)
    {
     fin.read((char*)&NOVA_q,sizeof(NOVA_q));
     if(NOVA_temp_no==NOVA_q.return_NOVA_ques_ans_no())
     {
      NOVA_pos=fin.tellg();
      NOVA_pos-=sizeof(NOVA_q);
      fin.seekg(NOVA_pos);
      NOVA_i=NOVA_j;
      goto show;
      }
     }
   }
   else goto reselect;
 }

/*xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx*/
/*xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx*/


void NOVA_ques_ans_table()
{
 int i;
 for(i=1; i<=80; i++)
 {
  gotoxy(i,1);
  cout<<xborderstyle;
  gotoxy(i,3);
  cout<<xborderstyle;
  gotoxy(i,8);
  cout<<xborderstyle;
  gotoxy(i,10);
  cout<<xborderstyle;
  }
 for(i=2; i<=10; i++)
 {
  gotoxy(1,i);
  cout<<yborderstyle;
  gotoxy(80,i);
  cout<<yborderstyle;
  gotoxy(15,i);
  cout<<yborderstyle;
  }

 gotoxy(3,2);
 cout<<"Sr. no.";
 gotoxy(3,4);
 cout<<"Statement";
 gotoxy(3,9);
 cout<<"Reuturn no.";
 }

/*xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx*/
/*xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx*/

void NOVA_disp_ques_ans(char a[])
{
 int i,j,k=20;
 for(i=0,j=4; a[i]!='\0'; i++)
 {
  gotoxy(k++,j);
  cout<<a[i];
  if(i==55 || i==110|| i==165)
  {
   k=20;
   j++ ;
   }
  }
 }

/*xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx*/
/*xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx*/

void NOVA_ques_ans_editing()
{
 char NOVA_ques_ans_choice;
start:
clrscr();
cout<<"\n\n\tPress 1 to open Question file.";
cout<<"\n\tPress 2 to open Answer file.";
cout<<"\n\tPress 3 to open Contact diary." ;
cout<<"\n\tPress 4 to open Personal diary.";
re:
NOVA_ques_ans_choice=getch();
if(NOVA_ques_ans_choice=='1')
{
 NOVA_ques_displayall();
 goto start;
 }
else if(NOVA_ques_ans_choice=='2')
{
 NOVA_ans_displayall();
goto start;
}

else if(NOVA_ques_ans_choice=='3')
{
 NOVA_contacts_displayall();
goto start;
}

else if(NOVA_ques_ans_choice=='4')
{
 NOVA_diary_displayall();
goto start;
}
else if(NOVA_ques_ans_choice==27)
{
 cout.flush();
 return;
 }
else goto re;
}

/*xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx*/
/*xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx*/



void NOVA_game1() //This function provides the password security.
 {
  int snake_i;
  char game1r[16]="ilovemymomanddad";
  char game1in[20],pass;

  gotoxy(29,11);
  cout<<"Please enter password";
  gotoxy(31,12);

  for(snake_i=0; snake_i<20; snake_i++)
  {
   take:
   pass=getch();

   if(pass==13)
    goto snake_check;

   if(pass==8)
   {
    if(snake_i<0)
     snake_i=0;
    game1in[snake_i-1]=0;
    if(snake_i==0)
    {
     cout<<"\b  \b";
      goto take;
     }
    else
    {
     --snake_i;
     cout<<"\b \b";
      goto take;
     }
    }

   game1in[snake_i]=pass;
   cout<<"*";
  }

  full:
  if(getch()==13)
   goto snake_check;
  else
   goto full;

 snake_check:
 if(snake_i==16)
 {
  for(snake_i=0; snake_i<16; snake_i++)
  {
   if(game1in[snake_i]==game1r[snake_i])
   {
    continue;
    }

   else
   {
    wrong:
    gotoxy(32,14);
    cout<<"Wrong password";
    delay(1000);
    exit(0);
    }
   }
  }
 else
  goto wrong;
 if(game1in[snake_i]=='\0')
  return;
 }




/*xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx*/
/*xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx*/


void NOVA_user_input()
{
ifstream fin;
int NOVA_n,NOVA_j,return_value=-1,return_no=0;
NOVA_question_answer NOVA_q;

cout<<"\n\nMe: ";
strcpy(NOVA_user,NOVA_correct_space());

if(NOVA_user[0]=='\0')
return;

fin.open("NOVAQUES.dat",ios::binary);
fin.seekg(0,ios::end);

NOVA_n=fin.tellg()/sizeof(NOVA_q);
fin.seekg(0,ios::beg);

for(NOVA_j=0; NOVA_j<NOVA_n; NOVA_j++)
{
 fin.read((char*)&NOVA_q, sizeof(NOVA_q));
 if(!strcmpi(NOVA_user,NOVA_q.NOVA_ques_ans))
 {
  return_value=NOVA_q.return_NOVA_ques_ans_retno();
  return_no=NOVA_q.return_NOVA_ques_ans_no();
  fin.close();
  break;
  }
 }
if(return_value==-1)
{
 fin.close();
 NOVA_computer_extraction();
 return;
 }

if(return_value==0 && return_no>=291 && return_no<=310)
{
if(NOVA_gender=='F' || NOVA_gender=='f')
{
NOVA_computer_output(61);
 return;
}
}

if(return_value==54)
{
if(NOVA_gender=='F' || NOVA_gender=='f')
{
NOVA_computer_output(61);
 return;
}
}

if(return_value==60)
{
if(NOVA_gender=='F' || NOVA_gender=='f')
{
NOVA_computer_output(61);
 return;
}
}

if(return_value==0)
{
 cout<<"\nNOVA: NO"<<NOVA_boss2;
 return;
 }


 randomize();

if(return_value==2|| return_value==11||return_value==17||return_value==23||return_value==29)
{
 NOVA_computer_output(random(6)+return_value);
 return;
 }

if(return_value==35|| return_value==42||return_value==48||return_value==54)
{
 NOVA_computer_output(random(6)+return_value);
 return;
 }

if(return_value==9981)
{
snake_game();
clrscr();
return;
}

if(return_value==9988)
{
NOVA_games();
return;
}

if(return_value==9982)
{
tictacto();
clrscr();
return;
}

if(return_value==9983)
{
NOVA_contacts_displayall();
clrscr();
return;
}

if(return_value==9984)
{
NOVA_diary_displayall();
clrscr();
return;
}

if(return_value==41)
{
 NOVA_intro();
 return;
 }

if(return_value==9986)
{
NOVA_creator();
return;
}

NOVA_computer_output(return_value);
return;
}

/*xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx*/
/*xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx*/


void NOVA_computer_output(int NOVA_flag)
{
 ifstream fin;
 int NOVA_n,NOVA_j,return_value=-48;
 char answer[150];
 fin.open("NOVAAANS.dat",ios::binary);
 fin.seekg(0,ios::end);
 NOVA_question_answer NOVA_q;

 NOVA_n=fin.tellg()/sizeof(NOVA_q);
 fin.seekg(0,ios::beg);

 for(NOVA_j=0; NOVA_j<NOVA_n; NOVA_j++)
 {
  fin.read((char*)&NOVA_q, sizeof(NOVA_q));
  if(NOVA_flag==NOVA_q.return_NOVA_ques_ans_no())
  {
   strcpy(answer,NOVA_q.NOVA_ques_ans);
   return_value=NOVA_q.return_NOVA_ques_ans_retno();
   fin.close();
   }
  }


if(return_value==9985)
{
 cout<<"\nNOVA: "<<NOVA_boss1<<answer;
 NOVA_intro();
 return;
 }

if(return_value==-1)
{
 cout<<"\nNOVA: "<<NOVA_boss1<<answer;

if(NOVA_flag>=42 && NOVA_flag<=47)
{
NOVA_can_do();
return;
}
 return;
 }

if(return_value==-2)
{
 cout<<"\nNOVA: "<<answer<<NOVA_boss2;

if(NOVA_flag>=42 && NOVA_flag<=47)
{
NOVA_can_do();
return;
}
 return;
 }



if(return_value==9999)
{
clrscr();
cout<<"\n\n\n\nNOVA: "<<answer;
delay(1690);
exit(0);
}

if(return_value!=-48)
{
 cout<<"\nNOVA: "<<answer;
if(NOVA_flag>=42 && NOVA_flag<=47)
{
NOVA_can_do();
}
 return;
 }


fin.close();
cout<<"NOVA: I didn't get you"<<NOVA_boss2;
 }

/*xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx*/
/*xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx*/


void NOVA_computer_extraction()
{
 ofstream fout;
 ifstream fin;
 int NOVA_n,NOVA_j,NOVA_i;
 char NOVA_temp[200],NOVA_quadratic_temp;
 int NOVA_quadratic_flag_1=0,NOVA_quadratic_flag_2=0,NOVA_quadratic_flag_3=0,NOVA_quadratic_flag_4=0;
 int NOVA_arithmetic_flag_1=0,NOVA_arithmetic_flag_2=0,NOVA_arithmetic_flag_3=0;
 int NOVA_trignometry_flag_1=0,NOVA_trignometry_flag_2=0,NOVA_trignometry_flag_3=0;
 int NOVA_trigo_flag;
 int NOVA_log_flag_1=0,NOVA_log_flag_2=0,NOVA_log_flag_3=0;
 int NOVA_exponent_flag_1=0,NOVA_exponent_flag_2=0,NOVA_exponent_flag_3=0;
 int NOVA_exponent_flag=0;
 int NOVA_no_flag_1=0,NOVA_no_flag_2=0,NOVA_no_flag_3=0;
 int NOVA_go_flag_1=0,NOVA_go_flag_2=0,NOVA_go_flag_3=0;

 for(NOVA_j=0; NOVA_j<200; NOVA_j++)
 {
  NOVA_temp[NOVA_j]='\0';
  }

 fout.open("NOVATEMP.txt");
 fout<<NOVA_user;
 fout.close();

 fin.open("NOVATEMP.txt");
 fin.seekg(0,ios::end);
 NOVA_n=fin.tellg();
 fin.seekg(0,ios::beg);

 for(NOVA_i=0;fin.tellg()!=NOVA_n; NOVA_i++)
 {
  fin.getline(NOVA_temp,200,' ');
  if(NOVA_i==0 )
  if(!strcmpi(NOVA_temp,"solve")||!strcmpi(NOVA_temp,"calculate")||!strcmpi(NOVA_temp,"deduce")||!strcmpi(NOVA_temp,"find"))
  {
   {
   NOVA_quadratic_flag_1=1;
   NOVA_arithmetic_flag_1=1;
   NOVA_trignometry_flag_1=1;
   NOVA_log_flag_1=1;
   NOVA_exponent_flag_1=1;
   }
  }

  if(NOVA_i==0)
  {
   if(!strcmpi(NOVA_temp,"do")||!strcmpi(NOVA_temp,"can")||!strcmpi(NOVA_temp,"have"))
   NOVA_no_flag_1=1;
   }

 if(NOVA_i==0)
  {
   if(!strcmpi(NOVA_temp,"are")||!strcmpi(NOVA_temp,"will"))
   NOVA_go_flag_1=1;
   }

  if(NOVA_i==1 && !strcmpi(NOVA_temp,":"))
  {
    NOVA_arithmetic_flag_2=1;
    NOVA_trignometry_flag_2=1;
    NOVA_log_flag_2=1;
    NOVA_exponent_flag_2=1;

    for(NOVA_j=0; NOVA_user[NOVA_j]!='\0'; NOVA_j++)
    {
     if(NOVA_user[NOVA_j]=='^' && isdigit(NOVA_user[NOVA_j+2]))
     {
      if(NOVA_user[NOVA_j-2]=='e')
      {
       NOVA_exponent_flag_3=1;
       NOVA_exponent_flag=1;
       }
     if(isdigit(NOVA_user[NOVA_j-2]))
      {
       NOVA_exponent_flag_3=1;
       NOVA_exponent_flag=2;
       }
      }
     }

   if(NOVA_exponent_flag_1==1 && NOVA_exponent_flag_2==1 && NOVA_exponent_flag_3==1)
   {
    NOVA_computer_exponent(NOVA_exponent_flag);
    return;
    }

    for(NOVA_j=0; NOVA_user[NOVA_j]!='\0'; NOVA_j++)
    {
     if(NOVA_user[NOVA_j]=='+'&& isdigit(NOVA_user[NOVA_j-2]))
     NOVA_arithmetic_flag_3=1;
     if(NOVA_user[NOVA_j]=='-'&& isdigit(NOVA_user[NOVA_j-2]))
     NOVA_arithmetic_flag_3=1;
     if(NOVA_user[NOVA_j]=='/'&& isdigit(NOVA_user[NOVA_j-2]))
     NOVA_arithmetic_flag_3=1;
     if(NOVA_user[NOVA_j]=='*'&& isdigit(NOVA_user[NOVA_j-2]))
     NOVA_arithmetic_flag_3=1;
     if(NOVA_user[NOVA_j]=='x'&& isdigit(NOVA_user[NOVA_j-2]))
     NOVA_arithmetic_flag_3=1;
     if(NOVA_user[NOVA_j]=='X'&& isdigit(NOVA_user[NOVA_j-2]))
     NOVA_arithmetic_flag_3=1;
     if(NOVA_user[NOVA_j]=='/'&& isdigit(NOVA_user[NOVA_j-2]))
     NOVA_arithmetic_flag_3=1;
    }

  if(NOVA_arithmetic_flag_1==1 && NOVA_arithmetic_flag_2==1 && NOVA_arithmetic_flag_3==1)
  {
  NOVA_computer_arithmetic();
  return;
  }
  }

  if(NOVA_i==1 && !strcmpi(NOVA_temp,"for"))
  {
  NOVA_quadratic_flag_2=1;
  }

  if(NOVA_i==1)
  {
   if(!strcmpi(NOVA_temp,"you"))
   NOVA_no_flag_2=1;
   NOVA_go_flag_2=1;
   }

  if(NOVA_i==2)
  {
   if(!strcmpi(NOVA_temp,"know") ||!strcmpi(NOVA_temp,"love") ||!strcmpi(NOVA_temp,"like")||!strcmpi(NOVA_temp,"lost")||!strcmpi(NOVA_temp,"ever")||!strcmpi(NOVA_temp,"been")||!strcmpi(NOVA_temp,"see")||!strcmpi(NOVA_temp,"watch") )
   NOVA_no_flag_3=1;
   }

  if(NOVA_i==2)
  {
   if(!strcmpi(NOVA_temp,"come") ||!strcmpi(NOVA_temp,"coming"))
   NOVA_go_flag_3=1;
   }

  if(NOVA_no_flag_1==1 &&  NOVA_no_flag_2==1 && NOVA_no_flag_3==1)
  {
   cout<<"\nNOVA: NO";
   return;
   }

  if(NOVA_go_flag_1==1 &&  NOVA_go_flag_2==1 && NOVA_go_flag_3==1)
  {
   cout<<"\nNOVA: You never asked, so I never planned for it"<<NOVA_boss2;
   return;
   }


  if(NOVA_i==2)
  {
   if(!strcmpi(NOVA_temp,"sin"))
   {
    NOVA_trigo_flag=1;
    NOVA_trignometry_flag_3=1;
    }
   if(!strcmpi(NOVA_temp,"cos"))
   {
    NOVA_trigo_flag=2;
    NOVA_trignometry_flag_3=1;
    }
   if(!strcmpi(NOVA_temp,"tan"))
   {
    NOVA_trigo_flag=3;
    NOVA_trignometry_flag_3=1;
    }
   if(!strcmpi(NOVA_temp,"cot"))
   {
    NOVA_trigo_flag=4;
    NOVA_trignometry_flag_3=1;
    }
   if(!strcmpi(NOVA_temp,"sec"))
   {
    NOVA_trigo_flag=5;
    NOVA_trignometry_flag_3=1;
    }
   if(!strcmpi(NOVA_temp,"cosec"))
   {
    NOVA_trigo_flag=6;
    NOVA_trignometry_flag_3=1;
    }
   if(NOVA_trignometry_flag_1==1 && NOVA_trignometry_flag_2==1 && NOVA_trignometry_flag_3==1)
   {
   NOVA_computer_trignometry(NOVA_trigo_flag);
   return;
   }
   }


  if(NOVA_i==2)
  {
   if(!strcmpi(NOVA_temp,"log"))
   {
    NOVA_log_flag_3=1;
    if(NOVA_log_flag_1==1 && NOVA_log_flag_2==1 && NOVA_log_flag_3==1)
    {
     NOVA_computer_log(1);
     return;
     }
    }

   if(!strcmpi(NOVA_temp,"ln"))
   {
    NOVA_log_flag_3=1;
    if(NOVA_log_flag_1==1 && NOVA_log_flag_2==1 && NOVA_log_flag_3==1)
    {
     NOVA_computer_log(2);
     return;
     }
    }
  }


  if(NOVA_i==2 && !isdigit(NOVA_temp[0]) && NOVA_temp[1]=='\0')
  {
    NOVA_quadratic_flag_3=1;
    NOVA_quadratic_temp=NOVA_temp[0];
    strcpy(NOVA_temp,NOVA_user);
    for(NOVA_j=0; NOVA_temp[NOVA_j]!='\0'; NOVA_j++)
    {
     if(NOVA_temp[NOVA_j]==NOVA_quadratic_temp )
     NOVA_quadratic_flag_4=1;
     }
    if(NOVA_quadratic_flag_1==1 && NOVA_quadratic_flag_2==1 && NOVA_quadratic_flag_3==1 && NOVA_quadratic_flag_4==1)
    {
    NOVA_computer_quadratic(NOVA_quadratic_temp);
    return;
    }
   }
  }

 cout<<"\nNOVA: I didn't get you sir";
 return;
}

/*xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx*/
/*xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx*/

void NOVA_computer_arithmetic()
{
 char NOVA_user_temp[40];
 strcpy(NOVA_user_temp,NOVA_user);

 long double NOVA_a=1,NOVA_b=1;
 char NOVA_ac[50];
 int NOVA_flag=0,NOVA_i,NOVA_j=0,NOVA_k;

for(NOVA_i=0;NOVA_user_temp[NOVA_i]!='\0';NOVA_i++)
{
 if(NOVA_user_temp[NOVA_i]==':')
 {NOVA_k=++NOVA_i;
 break;
  }
 }

for(NOVA_i=NOVA_k;NOVA_user_temp[NOVA_i]!='\0';NOVA_i++)
{
 if(isdigit(NOVA_user_temp[NOVA_i]) || NOVA_user_temp[NOVA_i]=='.'||NOVA_user_temp[NOVA_i]==' '||NOVA_user_temp[NOVA_i]=='+' || NOVA_user_temp[NOVA_i]=='-' || NOVA_user_temp[NOVA_i]=='*'||NOVA_user_temp[NOVA_i]=='x'||NOVA_user_temp[NOVA_i]=='X'||NOVA_user_temp[NOVA_i]=='/')
 {
  continue;
  }
 else
 {
  cout<<"\nNOVA: There are extra elements in the question.";
  return;
  }
 }


if(NOVA_flag==0)
{
 for(NOVA_i=NOVA_k,NOVA_j=0;NOVA_user_temp[NOVA_i]!='\0'; NOVA_i++)
 {
  if(isdigit(NOVA_user_temp[NOVA_i])&&NOVA_user_temp[NOVA_i+1]==' ')
  {
   if(NOVA_user_temp[NOVA_i+2]=='-' || NOVA_user_temp[NOVA_i+2]=='+'||NOVA_user_temp[NOVA_i+2]=='*'||NOVA_user_temp[NOVA_i+2]=='x'||NOVA_user_temp[NOVA_i+2]=='X'||NOVA_user_temp[NOVA_i+2]=='/')
   {
    NOVA_ac[NOVA_j]=NOVA_user_temp[NOVA_i];
    NOVA_j++;
    NOVA_i+=2;
    break;
    }
   }

  if(isdigit(NOVA_user_temp[NOVA_i]) || NOVA_user_temp[NOVA_i]=='.')
  {
   NOVA_ac[NOVA_j]=NOVA_user_temp[NOVA_i];
   NOVA_j++;
   }
  if(NOVA_user_temp[NOVA_i]=='-' && isdigit(NOVA_user_temp[NOVA_i+2]))
  NOVA_a=-1;

  }
}

NOVA_flag=1;
NOVA_a*=NOVA_string_to_number(NOVA_ac);


char NOVA_bc[50];

 for(NOVA_j=0;NOVA_user_temp[NOVA_i]!='\0'; NOVA_i++ )
 {
  if(NOVA_user_temp[NOVA_i]=='-' && isdigit(NOVA_user_temp[NOVA_i+2]))
  NOVA_b=-1;


  if(isdigit(NOVA_user_temp[NOVA_i]) && NOVA_user_temp[NOVA_i+1]=='\0')
  {
   NOVA_bc[NOVA_j]=NOVA_user_temp[NOVA_i];
   NOVA_j++;
   NOVA_bc[NOVA_j]='\0';
   break;
   }

  if(isdigit(NOVA_user_temp[NOVA_i]) || NOVA_user_temp[NOVA_i]=='.')
  {
   NOVA_bc[NOVA_j]=NOVA_user_temp[NOVA_i];
   NOVA_j++;
   }
 }

NOVA_b*=NOVA_string_to_number(NOVA_bc);

for(NOVA_i=0; NOVA_user_temp[NOVA_i]!='\0';NOVA_i++)
{
 if(NOVA_user_temp[NOVA_i]=='*' ||NOVA_user_temp[NOVA_i]=='x'||NOVA_user_temp[NOVA_i]=='X')
 {
  cout<<endl<<"NOVA: "<<NOVA_boss1<<"the solution is: "<<NOVA_a*NOVA_b;
  return;
  }
 if(NOVA_user_temp[NOVA_i]=='/')
 {
  cout<<endl<<"NOVA:"<<NOVA_boss1<<"the solution is: "<<NOVA_a/NOVA_b;
  return;
  }
 }
cout<<endl<<"NOVA:"<<NOVA_boss1<<"the solution is: "<<NOVA_a+NOVA_b;
return;
}

/*xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx*/
/*xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx*/

void NOVA_computer_quadratic(char NOVA_x)
{
  char NOVA_user_temp[50],NOVA_temp_a[50],NOVA_temp_b[50],NOVA_temp_c[50];
  long double NOVA_a=0,NOVA_b=0,NOVA_c=0,NOVA_d;
  int NOVA_i,NOVA_j,NOVA_k,NOVA_l,NOVA_key,NOVA_flag;

strcpy(NOVA_user_temp,NOVA_user);

for(NOVA_i=0; NOVA_user_temp[NOVA_i]!='\0'; NOVA_i++)
{
 if(NOVA_user_temp[NOVA_i]==':')
 {
  NOVA_key=++NOVA_i;
  NOVA_i=0;
  break;
  }
 }

for(NOVA_i=NOVA_key; NOVA_user_temp[NOVA_i]!='\0'; NOVA_i++)
{

 if(isdigit(NOVA_user_temp[NOVA_i]) || NOVA_user_temp[NOVA_i]=='^'  || NOVA_user_temp[NOVA_i]=='.'|| NOVA_user_temp[NOVA_i]==' '||NOVA_user_temp[NOVA_i]==NOVA_x ||NOVA_user_temp[NOVA_i]=='='|| NOVA_user_temp[NOVA_i]=='+'||NOVA_user_temp[NOVA_i]=='-')
 continue;
 else
 {
 cout<<"NOVA: There are extra elements in the equation.";
 return;
 }
}

for(NOVA_i=NOVA_key; NOVA_user_temp[NOVA_i]!='\0'; NOVA_i++)
{
if(NOVA_user_temp[NOVA_i]=='='&&NOVA_user_temp[NOVA_i+2]=='0')
 NOVA_flag=4;
}

if(NOVA_flag!=4)
{
 cout<<"\nNOVA: This is not an eqation, where is '=' sign? This is just a formula";
 return;
}

NOVA_temp_a[0]='0';
NOVA_temp_a[1]='\0';
NOVA_temp_b[0]='0';
NOVA_temp_b[1]='\0';
NOVA_temp_c[0]='0';
NOVA_temp_c[1]='\0';

for(NOVA_i=NOVA_key; NOVA_user_temp[NOVA_i]!='\0'; NOVA_i++)
{
   if(NOVA_user_temp[NOVA_i]==NOVA_x && NOVA_user_temp[NOVA_i+2]=='^' && NOVA_user_temp[NOVA_i+4]=='2')
   {
    NOVA_temp_a[0]='1';
    NOVA_a=1;
    NOVA_k=NOVA_i;

       for(NOVA_j=0; ; NOVA_k--)
       {
	if(isdigit(NOVA_user_temp[NOVA_k])||NOVA_user_temp[NOVA_k]=='.')
	{
	 NOVA_temp_a[NOVA_j]=NOVA_user_temp[NOVA_k];
	 NOVA_j++;
	}
	if(NOVA_user_temp[NOVA_k-2]=='+'||NOVA_user_temp[NOVA_k-2]=='-'||NOVA_user_temp[NOVA_k-2]==':')
	{
	 if(NOVA_user_temp[NOVA_k-2]=='-')
	 NOVA_a=-1;
	 goto nova_temp_a;
	 }
       }
     nova_temp_a:
     strcpy(NOVA_temp_a,strrev(NOVA_temp_a));
     NOVA_a*=NOVA_string_to_number(NOVA_temp_a);
   }

  if(NOVA_user_temp[NOVA_i]==NOVA_x && NOVA_user_temp[NOVA_i+2]!='^')
   {
    NOVA_temp_b[0]='1';
    NOVA_b=1;
    NOVA_k=NOVA_i;

       for(NOVA_j=0; ; NOVA_k--)
       {
	if(isdigit(NOVA_user_temp[NOVA_k])||NOVA_user_temp[NOVA_k]=='.')
	{
	 NOVA_temp_b[NOVA_j]=NOVA_user_temp[NOVA_k];
	 NOVA_j++;
	}
	if(NOVA_user_temp[NOVA_k-2]=='+'||NOVA_user_temp[NOVA_k-2]=='-'||NOVA_user_temp[NOVA_k-2]==':')
	{
	 if(NOVA_user_temp[NOVA_k-2]=='-')
	 NOVA_b=-1;
	 goto nova_temp_b;
	 }
       }
     nova_temp_b:
     strcpy(NOVA_temp_b,strrev(NOVA_temp_b));
     NOVA_b*=NOVA_string_to_number(NOVA_temp_b);
   }

  if(isdigit(NOVA_user_temp[NOVA_i]) && NOVA_user_temp[NOVA_i-2]!='^')
  {
   if(NOVA_user_temp[NOVA_i+2]=='+' || NOVA_user_temp[NOVA_i+2]=='-'||NOVA_user_temp[NOVA_i+2]=='=')
   {
    NOVA_temp_c[0]='1';
    NOVA_c=1;
    NOVA_k=NOVA_i;

       for(NOVA_j=0; ; NOVA_k--)
       {
	if(isdigit(NOVA_user_temp[NOVA_k])||NOVA_user_temp[NOVA_k]=='.')
	{
	 NOVA_temp_c[NOVA_j]=NOVA_user_temp[NOVA_k];
	 NOVA_j++;
	}
	if(NOVA_user_temp[NOVA_k-2]=='+'||NOVA_user_temp[NOVA_k-2]=='-'||NOVA_user_temp[NOVA_k-2]==':')
	{
	 if(NOVA_user_temp[NOVA_k-2]=='-')
	 NOVA_c=-1;
	 goto nova_temp_c;
	 }
       }
     nova_temp_c:
     strcpy(NOVA_temp_c,strrev(NOVA_temp_c));
     NOVA_c*=NOVA_string_to_number(NOVA_temp_c);
   }
  }

}

NOVA_d=pow(NOVA_b,2)-(4*NOVA_a*NOVA_c);

if(NOVA_d<0)
{
 cout<<"\nNOVA: "<<NOVA_boss1<<"their exist no real roots for the given equation.";
 if(NOVA_a>0)
 cout<<"\nNOVA: "<<NOVA_boss1<<"this function will always give positive value for any real number.";
 if(NOVA_a<0)
 cout<<"\nNOVA: "<<NOVA_boss1<<"this function will always give negative value for any real number.";
 return;
 }

if(NOVA_d==0)
{
 cout<<"\nNOVA: "<<NOVA_boss1<<"both roots for the given equation are equal.";
 cout<<"\nNOVA: "<<(-1*NOVA_b)/(2*NOVA_a);
 return;
 }

if(NOVA_d>0)
{
 NOVA_d=sqrt(NOVA_d);
 cout<<"\nNOVA: "<<NOVA_boss1<<"the first root is: "<<((-1*NOVA_b)-NOVA_d)/(2*NOVA_a);
 cout<<"\nNOVA: "<<NOVA_boss1<<"the second root is: "<<((-1*NOVA_b)+NOVA_d)/(2*NOVA_a);
 return;
 }
cout<<endl<<NOVA_temp_a<<endl<<NOVA_a;
cout<<endl<<NOVA_temp_b<<endl<<NOVA_b;
cout<<endl<<NOVA_temp_c<<endl<<NOVA_c;
}

/*xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx*/
/*xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx*/


void NOVA_computer_trignometry(int NOVA_trigo_flag )
{
 char NOVA_user_temp[40],NOVA_temp[50],p;
 strcpy(NOVA_user_temp,NOVA_user);
 long double NOVA_angle=1,NOVA_22=1,NOVA_7=1,NOVA_180=1,NOVA_argument,NOVA_sol;
 int NOVA_i,NOVA_j,NOVA_flag1=0,NOVA_flag2=0;

 NOVA_change_sentence_case(NOVA_user_temp,-1);

for(NOVA_i=0;NOVA_user_temp[NOVA_i]!='\0';NOVA_i++)
{
if(NOVA_user_temp[NOVA_i]=='(')
 NOVA_flag1=11;
if(NOVA_user_temp[NOVA_i]==')')
 NOVA_flag2=11;
}

if(NOVA_flag1!=11||NOVA_flag2!=11)
{
 cout<<"\nNOVA: Expression Syntax";
 return;
 }

NOVA_flag1=0;

for(NOVA_i=0;NOVA_user_temp[NOVA_i]!='\0';NOVA_i++)
{
if(NOVA_user_temp[NOVA_i]=='(')
{
 NOVA_j=++NOVA_i;
 break;
 }
}

for(;NOVA_user_temp[NOVA_j]!=')';NOVA_j++)
{
 if(isdigit(NOVA_user_temp[NOVA_j])||NOVA_user_temp[NOVA_j]=='.'||NOVA_user_temp[NOVA_j]==' '||NOVA_user_temp[NOVA_j]=='r'||NOVA_user_temp[NOVA_j]=='d')
 continue;
 else
 {
  cout<<"\nNOVA: There are extra elememts:";
  return;
  }
}


 for(NOVA_i=0,NOVA_j=0;NOVA_user_temp[NOVA_i]!=')';NOVA_i++)
 {
  if(NOVA_user_temp[NOVA_i]=='('&&NOVA_user_temp[NOVA_i+2]==')')
  {
  cout<<"\nNOVA: "<<NOVA_boss1<<"please define the angle inside the brackets (.).";
  return;
  }

  if(NOVA_user_temp[NOVA_i]=='d'&& NOVA_user_temp[NOVA_i+2]==')')
  {
   NOVA_22=22;NOVA_7=7;NOVA_180=180;NOVA_flag1=1;
   break;
  }

  if(NOVA_user_temp[NOVA_i]=='r'&& NOVA_user_temp[NOVA_i+2]==')')
  {
   NOVA_flag1=1;
   break;
  }

  if(isdigit(NOVA_user_temp[NOVA_i])&&NOVA_user_temp[NOVA_i+2]==')')
  {
   NOVA_temp[NOVA_j]=NOVA_user_temp[NOVA_i];
   break;
  }

  if(NOVA_user_temp[NOVA_i]=='('&&NOVA_user_temp[NOVA_i+2]=='-')
  NOVA_angle=-1;

  if(isdigit(NOVA_user_temp[NOVA_i])||NOVA_user_temp[NOVA_i]=='.')
  {
   NOVA_temp[NOVA_j]=NOVA_user_temp[NOVA_i];
   NOVA_j++;
   }
 }

 NOVA_angle*=NOVA_string_to_number(NOVA_temp);
 NOVA_argument=(NOVA_22*NOVA_angle)/(NOVA_7*NOVA_180);

    if(NOVA_trigo_flag==1)
    {
    NOVA_sol=sin(NOVA_argument);
    }

    if(NOVA_trigo_flag==2)
    {
    NOVA_sol=cos(NOVA_argument);
    }

    if(NOVA_trigo_flag==3)
    {
    NOVA_sol=tan(NOVA_argument);
    }

    if(NOVA_trigo_flag==4)
    {
    if(tan(NOVA_argument)==0)
    p='~';
    else
    NOVA_sol=1/tan(NOVA_argument);
    }

    if(NOVA_trigo_flag==5)
    {
    if(cos(NOVA_argument)==0)
    p='~';
    else
    NOVA_sol=1/cos(NOVA_argument);
    }

    if(NOVA_trigo_flag==6)
    {
    if(sin(NOVA_argument)==0)
    p='~';
    else
    NOVA_sol=1/sin(NOVA_argument);
    }

if(NOVA_flag1==1)
{
 if(p!='~')
 cout<<"\nNOVA: "<<NOVA_boss1<<"the ratio is: "<<NOVA_sol<<endl;
 else
 cout<<"\nNOVA: "<<NOVA_boss1<<"the ratio is not defined."<<endl;
 return;
 }

if(NOVA_flag1==0)
{
 if(p!='~')
 cout<<"\nNOVA: "<<NOVA_boss1<<"if you have given angle in radians, the ratio is: "<<NOVA_sol;
 else
 cout<<"\nNOVA: "<<NOVA_boss1<<"if you have given angle in radians, the ratio is undefined.";

 NOVA_22=22;NOVA_7=7;NOVA_180=180;NOVA_flag1=1;
 NOVA_argument=(NOVA_22*NOVA_angle)/(NOVA_7*NOVA_180);
    if(NOVA_trigo_flag==1)
    {
    NOVA_sol=sin(NOVA_argument);
    }

    if(NOVA_trigo_flag==2)
    {
    NOVA_sol=cos(NOVA_argument);
    }

    if(NOVA_trigo_flag==3)
    {
    NOVA_sol=tan(NOVA_argument);
    }

    if(NOVA_trigo_flag==4)
    {
    if(tan(NOVA_argument)==0)
    p='~';
    else
    NOVA_sol=1/tan(NOVA_argument);
    }

    if(NOVA_trigo_flag==5)
    {
    if(cos(NOVA_argument)==0)
    p='~';
    else
    NOVA_sol=1/cos(NOVA_argument);
    }

    if(NOVA_trigo_flag==6)
    {
    if(sin(NOVA_argument)==0)
    p='~';
    else
    NOVA_sol=1/sin(NOVA_argument);
    }
 if(p!='~')
 cout<<"\nNOVA: "<<NOVA_boss1<<"if you have given angle in degrees, the ratio is: "<<NOVA_sol<<endl;
 else
 cout<<"\nNOVA: "<<NOVA_boss1<<"if you have given angle in degrees, the ratio is undefined."<<endl;
}
}


/*xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx*/
/*xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx*/


void NOVA_computer_log(int NOVA_flag)
{
char NOVA_user_temp[40],NOVA_temp[50];
long double NOVA_argument=1;
int NOVA_i,NOVA_j,NOVA_flag1,NOVA_flag2;

strcpy(NOVA_user_temp,NOVA_user);

for(NOVA_i=0;NOVA_user_temp[NOVA_i]!='\0';NOVA_i++)
{
if(NOVA_user_temp[NOVA_i]=='(')
 NOVA_flag1=11;
if(NOVA_user_temp[NOVA_i]==')')
 NOVA_flag2=11;
}

if(NOVA_flag1!=11||NOVA_flag2!=11)
{
 cout<<"\nNOVA: Expression Syntax";
 return;
 }


for(NOVA_i=0; NOVA_user_temp[NOVA_i]!='0'; NOVA_i++)
{
 if(NOVA_user_temp[NOVA_i]=='(')
 {
  NOVA_j=++NOVA_i;
  break;
 }
}

for(NOVA_i=NOVA_j; NOVA_user_temp[NOVA_i]!=')'; NOVA_i++)
{
 if(isdigit(NOVA_user_temp[NOVA_i])|| NOVA_user_temp[NOVA_i]=='.' ||NOVA_user_temp[NOVA_i]==' ')
 continue;
 else
 {
  cout<<"NOVA: Extra elements";
  return;
  }
 }

for(NOVA_i=0; NOVA_user_temp[NOVA_j]!=')'; NOVA_j++)
{
 if(NOVA_user_temp[NOVA_j]=='(' && NOVA_user_temp[NOVA_j+2]==')')
 {
  cout<<"NOVA: "<<NOVA_boss1<<"please define the digits inside the brackets (.).";
  return;
  }

 if(isdigit(NOVA_user_temp[NOVA_j]) || NOVA_user_temp[NOVA_j]=='.')
 {
  NOVA_temp[NOVA_i]=NOVA_user_temp[NOVA_j];
  NOVA_i++;
  }

 if(NOVA_user_temp[NOVA_j]=='(' && NOVA_user_temp[NOVA_j]=='-')
 {
  cout<<"NOVA: "<<NOVA_boss1<<"log for negative number is not defined";
  return;
  }
}

NOVA_argument*=NOVA_string_to_number(NOVA_temp);

if(NOVA_flag==1)
{
 cout<<"NOVA: "<<NOVA_boss1<<"the log of "<<NOVA_argument<<" is: "<<log10(NOVA_argument)<<endl;
 return;
}

if(NOVA_flag==2)
{
cout<<"NOVA: "<<NOVA_boss1<<"the natural log of "<<NOVA_argument<<" is: "<<log(NOVA_argument)<<endl;
}
}

/*xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx*/
/*xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx*/


void NOVA_computer_exponent(int NOVA_flag)
{
char NOVA_user_temp[50],NOVA_temp[50];
long double NOVA_base=1,NOVA_power=1;
int NOVA_i,NOVA_j,NOVA_k;

strcpy(NOVA_user_temp,NOVA_user);

  for(NOVA_i=0; NOVA_user_temp[NOVA_i]!='\0'; NOVA_i++)
  {
   if(NOVA_user_temp[NOVA_i]==':')
   {
    NOVA_j=++NOVA_i;
    break;
    }
  }

 for(NOVA_i=NOVA_j; NOVA_user_temp[NOVA_i]!='\0'; NOVA_i++)
 {
  if(isdigit(NOVA_user_temp[NOVA_i]) || NOVA_user_temp[NOVA_i]=='-'|| NOVA_user_temp[NOVA_i]=='^'||NOVA_user_temp[NOVA_i]==' '||NOVA_user_temp[NOVA_i]=='e')
  continue;
  else
  {
  cout<<"extra parameters";
  return;
  }
 }


if(NOVA_flag==2)
{
    for(NOVA_i=NOVA_j,NOVA_k=0; ; NOVA_i++)
    {
      if(NOVA_user_temp[NOVA_i]=='^')
      {
       NOVA_j=NOVA_i+1;
       break;
       }
      if(NOVA_user_temp[NOVA_i]=='-'&& isdigit(NOVA_user_temp[NOVA_i+2]))
      NOVA_base=-1;

      if(isdigit(NOVA_user_temp[NOVA_i]) || NOVA_user_temp[NOVA_i]=='.')
      {
       NOVA_temp[NOVA_k]=NOVA_user_temp[NOVA_i];
       NOVA_k++;
       }
    }
 }

NOVA_base*=NOVA_string_to_number(NOVA_temp);

for(NOVA_i=0; NOVA_i<50; NOVA_i++)
NOVA_temp[NOVA_i]='\0';

for(NOVA_i=NOVA_j; NOVA_user_temp[NOVA_i]!='\0'; NOVA_i++)
{
 if(NOVA_user_temp[NOVA_i]=='^')
 {
  NOVA_j=NOVA_i+1;
  break;
  }
}

     for(NOVA_i=NOVA_j,NOVA_k=0; NOVA_user_temp[NOVA_i]!='\0' ; NOVA_i++)
     {
      if(NOVA_user_temp[NOVA_i]=='-'&& isdigit(NOVA_user_temp[NOVA_i+2]))
      NOVA_power=-1;

      if(isdigit(NOVA_user_temp[NOVA_i]) || NOVA_user_temp[NOVA_i]=='.')
      {
       NOVA_temp[NOVA_k]=NOVA_user_temp[NOVA_i];
       NOVA_k++;
       }
    }

NOVA_power*=NOVA_string_to_number(NOVA_temp);

cout<<NOVA_base<<endl<<NOVA_power<<endl;

if(NOVA_flag==1)
{
cout<<"NOVA: "<<NOVA_boss1<<"the solution is: "<<exp(NOVA_power)<<endl;
return;
}

if(NOVA_flag==2)
{
cout<<"NOVA: "<<NOVA_boss1<<"the solution is: "<<pow(NOVA_base,NOVA_power)<<endl;
return;
}
}

/*xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx*/
/*xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx*/



 void snake_game() //The main snake_body (Program) of the snake_game.
 {
   NOVA_startup(20);
   snake_level();
   clrscr();
   ::snake_points=0; ::snake_score1=0; ::snake_life=1; ::snake_lifeflag=1; ::snake_ch=77; ::snake_size=4; ::snake_x=5; ::snake_y=12; ::snake_lifecomp=0;
   snake_lifex=19; snake_lifey=9; snake_enemyx=50; snake_enemyy=15; snake_foodx=32; snake_foody=20;
   int snake_i, j, b, k;

   start:
   clrscr();
   if(::snake_ch==77) //The command will move the snake in continuous right direction.
    {
     snake_border();
     snake_dispfood();
     snake_displife();
     snake_dispenemy();

     for( ;  ; snake_x++)
     {
      snake_score();
      snake_check();
      if(snake_x>snake_bx2)
	snake_x=snake_bx1;

      if(snake_y==snake_by1||snake_y==snake_by2)
      {
       snake_border();
       snake_score();
       }

      gotoxy(snake_x,snake_y);
	cout<<snake_head;

      for(b=snake_x-1,k=0;snake_i>=snake_bx1, k<::snake_size; k++,b--)
      {
       if(b<snake_bx1)
	b=snake_bx2;

       gotoxy(b,snake_y);
	cout<<snake_body;
	}
      gotoxy(b,snake_y);
      cout<<" ";

 if(b==snake_bx1)
 {
  snake_border();
  snake_score();
  }


       if(kbhit())
	{
	 ::snake_ch=getch();
	 if(::snake_ch==72)
	 {
	  snake_rup(snake_x,snake_y,::snake_size);
	   goto start;
	  }
	 if(::snake_ch==80)
	 {
	  snake_rdown(snake_x,snake_y,::snake_size);
	   goto start;
	  }
	 if(::snake_ch==27)
	 {
	  snake_leavegame();
	  clrscr();
	  snake_border();
	  snake_dispfood();
	  snake_displife();
	  snake_dispenemy();
	  }
	}

	delay(::snake_tym);
       }

      }





   if(::snake_ch==75)  //This command is to move the snake in continuous left direction
    {
     snake_border();
     snake_dispfood();
     snake_displife();
     snake_dispenemy();
     for(snake_x--; ; snake_x--)
      {
       snake_score();
       snake_check();

       if(snake_x<snake_bx1)
	 snake_x=snake_bx2;

       if(snake_y==snake_by1||snake_y==snake_by2)
       {
	snake_border();
	snake_score();
	}

	gotoxy(snake_x,snake_y);
	cout<<snake_head;

       for(b=snake_x+1,k=0; k<::snake_size; b++,k++)
       {
	if(b>snake_bx2)
	 b=snake_bx1;
	gotoxy(b,snake_y);
	 cout<<snake_body;
	 }
     gotoxy(b,snake_y);
     cout<<" ";

if(b==snake_bx2)
{
 snake_border();
 snake_score();
 }

	if(kbhit())
	{
	 ::snake_ch=getch();
	 if(::snake_ch==72)
	 {
	  snake_lup(snake_x,snake_y,::snake_size);
	  goto start;
	  }
	 if(::snake_ch==80)
	  {
	   snake_ldown(snake_x,snake_y,::snake_size);
	   goto start;
	   }
	 if(::snake_ch==27)
	  {
	  snake_leavegame();
	  clrscr();
	  snake_border();
	  snake_dispfood();
	  snake_displife();
	  snake_dispenemy();
	  }
	 }
       delay(::snake_tym);
       }
     }




  if(::snake_ch==72) //This command will move the snake in continuous upward direction.
    {
     snake_border();
     snake_dispfood();
     snake_displife();
     snake_dispenemy();
     for( ; ; snake_y--)
     {
      snake_score();
      snake_check();
      if(snake_y<snake_by1)
	 snake_y=snake_by2;


       if(snake_x==snake_bx1||snake_x==snake_bx2)
       {
	snake_border();
	snake_score();
	}

       gotoxy(snake_x,snake_y);
	cout<<snake_head;
      for(b=snake_y+1,k=0; k<::snake_size; b++,k++)
      {
       if(b>snake_by2)
	b=snake_by1;
       gotoxy(snake_x,b);
	cout<<snake_body;
	}
      gotoxy(snake_x,b);
      cout<<" ";

 if(b==snake_by2)
 {
  snake_border();
  snake_score();
  }

	if(kbhit())
	{
	 ::snake_ch=getch();
	 if(::snake_ch==77)
	 {
	  snake_uright(snake_x,snake_y,::snake_size);
	  goto start;
	  }
	 if(::snake_ch==75)
	 {
	  snake_uleft(snake_x,snake_y,::snake_size);
	  goto start;
	  }
	 if(::snake_ch==27)
	  {
	  snake_leavegame();
	  clrscr();
	  snake_border();
	  snake_dispfood();
	  snake_displife();
	  snake_dispenemy();
	  }
	}
       delay(::snake_tym);
       }
     }



    if(::snake_ch==80)//This command will move the snake in continuous downward direction.
    {
     snake_border();
     snake_dispfood();
     snake_displife();
     snake_dispenemy();
     for(j=snake_y-::snake_size; ;j++, snake_y++)
     {
      snake_score();
      snake_check();

      if(snake_y>snake_by2)
	snake_y=snake_by1;

      if(snake_x==snake_bx1||snake_x==snake_bx2)
      {
       snake_border();
       snake_score();
       }

      gotoxy(snake_x,snake_y);
       cout<<snake_head;
      for(b=snake_y-1,k=0; k<::snake_size; b--,k++)
      {

       if(b<snake_by1)
	b=snake_by2;
       gotoxy(snake_x,b);
       cout<<snake_body;
       }
     gotoxy(snake_x,b);
     cout<<" ";

 if(b==snake_by1)
 {
  snake_border();
  snake_score();
  }

 if(j<=snake_by1+1)
 {
  snake_border();
  snake_score();
  }

       if(kbhit())
       {
	::snake_ch=getch();
	if(::snake_ch==77)
	{
	 snake_dright(snake_x,snake_y,::snake_size);
	 goto start;
	 }
	if(::snake_ch==75)
	{
	 snake_dleft(snake_x,snake_y,::snake_size);
	 goto start;
	 }
	if(::snake_ch==27)
	{
	  snake_leavegame();
	  clrscr();
	  snake_border();
	  snake_dispfood();
	  snake_displife();
	  snake_dispenemy();
	  }       }
      delay(::snake_tym);
     }
    }

 }



void snake_border() //The function creates the snake_border
{
 int snake_i;
 for(snake_i=snake_bx1; snake_i<=snake_bx2; snake_i++)
 {
  gotoxy(snake_i,snake_by1);
  cout<<xborderstyle;
  }
 for(snake_i=snake_bx1; snake_i<=snake_bx2; snake_i++)
 {
  gotoxy(snake_i,snake_by2);
  cout<<xborderstyle;
  }
 for(snake_i=snake_by1+1; snake_i<=snake_by2; snake_i++)
 {
  gotoxy(snake_bx1,snake_i);
  cout<<yborderstyle;
  }
 for(snake_i=snake_by1+1; snake_i<=snake_by2; snake_i++)
 {
  gotoxy(snake_bx2,snake_i);
  cout<<yborderstyle;
  }
 }






void snake_instructions() //This function is programmed by the programmer for startup purpose.
{
 start:
 clrscr();
 cout<<"\n\t\t\t\tInstructions:";
 delay(100);
 cout<<"\n    1-) Press 't' to move the snake in upward direction.";
 delay(100);
 cout<<"\n    2-) Press 'g' to move the snake in downward direction.";
 delay(100);
 cout<<"\n    3-) Press 'h' to move the snake in right direction.";
 delay(100);
 cout<<"\n    4-) Press 'f' to move the snake in left direction.";
 delay(100);
 cout<<"\n    5-) As told before, due to lack of use of concepts and resricted use of \n\tfunctions, as per reccomended by C.B.S.E., the snake can take only a \n\tsingle turn at a time and also some graphics problems are also \n\tsituated with it. ";
 delay(100);
 cout<<"\n    6-) On eating the food '"<<snake_food<<"' the size of snake will increase by 1,\n\t and also your score will increase by 100.";
 delay(100);
 cout<<"\n    7-) On eating the life food '"<<snake_lyf<<"' your life will increase by 1, \n\t and also your score will increase by 1000." ;
 delay(100);
 cout<<"\n    8-) On eating the enemy '"<<snake_enemy<<"' your life will decrease by 1,\n\t and also your score will decrease by 500.";
 delay(100);
 cout<<"\n    9-) If your life will become 0, you will loose and game will be \n\tautomatically quit. And also if you want to leave game in between, \n\tpress 'Esc' key.";
 delay(100);
 cout<<"\n   Best of luck!";
 reselect:
 gotoxy(35,24);
 cout<<"Press enter to continue.";
  snake_gogame=getch();
 if(snake_gogame==13)
  return;
 else if(snake_gogame==27)
 {
  clrscr();
  snake_leave();
  goto start;
  }
 else
  goto reselect;
 }



void snake_level() //This function dynamically allocate the speed of the snake.
{
 start:
 clrscr();
 cout<<"\n\t\t\tSelect the speed of snake.";
 gotoxy(10,6);
 cout<<"Press 1 for fast";
 gotoxy(10,8);
 cout<<"Press 2 for medium";
 gotoxy(10,10);
 cout<<"Press 3 for slow";
 gotoxy(10,12);
 cout<<"Press 4 to see instructions";

  reselect:
  snake_level1=getch();
  snake_gogame=snake_level1;
  if(snake_level1=='1')
  {
   snake_tym=75;
   snake_wait=2500;
   }
  else if(snake_level1=='2')
  {
   snake_tym=100;
   snake_wait=2000;
   }
  else if(snake_level1=='3')
  {
   snake_tym=125;
   snake_wait=1500;
   }

  else if(snake_level1=='4')
  {
   snake_instructions();
   goto start;
   }

  else if(snake_gogame==27)
  {
   clrscr();
   snake_leave();
   goto start;
   }
  else
   goto reselect;

 retry:
 gotoxy(22,22);
 cout<<"Press enter to continue to game.";
  snake_gogame=getch();

  if(snake_gogame!=13)
   goto retry;
  else
   return;
 }




 void snake_rup(int &snake_x, int&snake_y, int &len) //The function turns the right moving snake in upward direction.
 {
  snake_len1=len;
  snake_len2=snake_len1;
  snake_p=snake_y;

     snake_border();
     snake_dispfood();
     snake_displife();
     snake_dispenemy();
     for(snake_i=snake_x-len; snake_i<=snake_x; snake_i++,snake_len1--,snake_y--)
     {
      snake_score();
      snake_check();

       if(snake_y==snake_by1)
       {
	snake_y=snake_by2;
	}
       gotoxy(snake_x,snake_y-1);
       cout<<snake_head;
       gotoxy(snake_i-1,snake_p);
       cout<<" ";
       for(snake_len2=snake_len1;snake_len2>0; snake_len2--)
	{
	 cout<<snake_body;
	}
	 snake_q=snake_p-1;
       for(snake_len2=len;snake_len2>snake_len1;snake_q--,snake_len2--)
       {
	if(snake_q==snake_by1)
	 snake_q=snake_by2;
	gotoxy(snake_x,snake_q);
	cout<<snake_body;
	}
       gotoxy(snake_x,snake_p);
       cout<<" ";

      if(kbhit())
       {
	snake_gogame=getch();
	if(snake_gogame==27)
	{
	snake_leavegame();
	 clrscr();
	 snake_border();
	 snake_dispfood();
	 snake_displife();
	 snake_dispenemy();
	 }
	}

      delay(snake_tym);
   }
  }




 void snake_rdown(int &snake_x, int&snake_y, int &len) //The functions turns the right moving snake in downward direction.
 {
  snake_len1=len;
  snake_len2=snake_len1;
  snake_p=snake_y;

     snake_border();
     snake_dispfood();
     snake_displife();
     snake_dispenemy();
     for(snake_i=snake_x-len; snake_i<=snake_x; snake_i++,snake_len1--,snake_y++)
     {
      snake_score();
      snake_check();

       if(snake_y==snake_by2)
       {
	snake_y=snake_by1;
	}

       gotoxy(snake_x,snake_y+1);
       cout<<snake_head;
       gotoxy(snake_i-1,snake_p);
       cout<<" ";
       for(snake_len2=snake_len1;snake_len2>0; snake_len2--)
       {
	cout<<snake_body;
	}
       snake_q=snake_p+1;
       for(snake_len2=len;snake_len2>snake_len1;snake_q++,snake_len2--)
       {
	if(snake_q==snake_by2)
	snake_q=snake_by1;
	gotoxy(snake_x,snake_q);
	cout<<snake_body;
	}
      gotoxy(snake_x,snake_p);
      cout<<" ";

      if(kbhit())
       {
	snake_gogame=getch();
	if(snake_gogame==27)
	{
	 snake_leavegame();
	 clrscr();
	 snake_border();
	 snake_dispfood();
	 snake_displife();
	 snake_dispenemy();
	 }
	}


      delay(snake_tym);
   }
  }




 void snake_lup(int &snake_x, int&snake_y, int &len)//The functions turns the left moving snake in upward direction
 {
  snake_len1=len;
  snake_len2=snake_len1;
  snake_p=snake_y;

     snake_border();
     snake_dispfood();
     snake_displife();
     snake_dispenemy();
     for(snake_i=snake_x+1; snake_len1>0;snake_len1--,snake_y--)
     {
      snake_score();
      snake_check();

      if(snake_y==snake_by1)
      {
       snake_y=snake_by2;
       }

      gotoxy(snake_x,snake_y-1);
      cout<<snake_head;
      gotoxy(snake_x,snake_p);
      cout<<" ";
      gotoxy(snake_i,snake_p);
      for(snake_len2=snake_len1;snake_len2>0; snake_len2--)
      {
       cout<<snake_body;
       }

      gotoxy(snake_x+snake_len1+1,snake_p);
      cout<<" ";
      snake_q=snake_p-1;
      for(snake_len2=len;snake_len2>snake_len1;snake_q--,snake_len2--)
      {
       if(snake_q==snake_by1)
	snake_q=snake_by2;
	gotoxy(snake_x,snake_q);
	cout<<snake_body;
	}
      if(kbhit())
       {
	snake_gogame=getch();
	if(snake_gogame==27)
	{
	 snake_leavegame();
	 clrscr();
	 snake_border();
	 snake_dispfood();
	 snake_displife();
	 snake_dispenemy();
	 }
	}


      delay(snake_tym);
   }
  }




 void snake_ldown(int &snake_x, int&snake_y, int &len) //The function turns the left moving snake in downward direction.
 {
  snake_len1=len;
  snake_len2=snake_len1;
  snake_p=snake_y;

     snake_border();
     snake_dispfood();
     snake_displife();
     snake_dispenemy();
     for(snake_i=snake_x+1; snake_len1>0; snake_len1--,snake_y++)
     {
      snake_score();
      snake_check();

      if(snake_y==snake_by2)
      {
       snake_y=snake_by1;
       }

       gotoxy(snake_x,snake_y+1);
       cout<<snake_head;
       gotoxy(snake_x,snake_p);
       cout<<" ";
       gotoxy(snake_i,snake_p);
       for(snake_len2=snake_len1;snake_len2>0; snake_len2--)
       {
	cout<<snake_body;
	}
       gotoxy(snake_x+snake_len1+1,snake_p);
       cout<<" ";

       snake_q=snake_p+1;
       for(snake_len2=len;snake_len2>snake_len1;snake_q++,snake_len2--)
       {
	if(snake_q==snake_by2)
	snake_q=snake_by1;
	gotoxy(snake_x,snake_q);
	cout<<snake_body;
	}

      if(kbhit())
       {
	snake_gogame=getch();
	if(snake_gogame==27)
	{
	 snake_leavegame();
	 clrscr();
	 snake_border();
	 snake_dispfood();
	 snake_displife();
	 snake_dispenemy();
	 }
	}


      delay(snake_tym);
   }
  }




void snake_uright(int &snake_x, int&snake_y, int &len)//The function turns the up moving snake in right direction.
 {
  snake_len1=len;
  snake_len2=snake_len1;
  snake_p=snake_x;

     snake_border();
     snake_dispfood();
     snake_displife();
     snake_dispenemy();
     for(; snake_len1>0;snake_len1--,++snake_x)
     {
      snake_score();
      snake_check();

       if(snake_x==snake_bx2)
       {
	snake_x=snake_bx1;
	}

       gotoxy(snake_x+1,snake_y);
       cout<<snake_head;

       snake_q=snake_y;
       for(snake_len2=snake_len1;snake_len2>0; snake_q++, snake_len2--)
	{
	 gotoxy(snake_p,snake_q) ;
	 cout<<snake_body;
	 }
	gotoxy(snake_p,snake_q);
	cout<<" ";
	snake_q=snake_p;
       for(snake_len2=len;snake_len2>=snake_len1;snake_q++,snake_len2--)
       {
	if(snake_q==snake_bx2)
	snake_q=snake_bx1;
	gotoxy(snake_q,snake_y);
	cout<<snake_body;
	}

      if(kbhit())
       {
	snake_gogame=getch();
	if(snake_gogame==27)
	{
	 snake_leavegame();
	 clrscr();
	 snake_border();
	 snake_dispfood();
	 snake_displife();
	 snake_dispenemy();
	 }
	}


      delay(snake_tym);
   }
  }





 void snake_uleft(int &snake_x, int&snake_y, int &len)//The functions turns the up moving snake in left direction.
 {
  snake_len1=len;
  snake_len2=snake_len1;
  snake_p=snake_x;

     snake_border();
     snake_dispfood();
     snake_displife();
     snake_dispenemy();
     for(; snake_len1>0;snake_i--,snake_len1--,--snake_x)
     {
      snake_score();
      snake_check();

      if(snake_x==snake_bx1)
      {
       snake_x=snake_bx2;
       }
       snake_i=snake_x;
       gotoxy(snake_x-1,snake_y);
       cout<<snake_head;

       snake_q=snake_y;
       for(snake_len2=snake_len1;snake_len2>0; snake_q++, snake_len2--)
	{
	 gotoxy(snake_p,snake_q) ;
	 cout<<snake_body;
	}

       gotoxy(snake_p,snake_q);
       cout<<" ";
       snake_q=snake_i;
       for(snake_len2=len;snake_len2>=snake_len1;snake_q++,snake_len2--)
       {
	if(snake_q==snake_bx2)
	snake_q=snake_bx1;
	gotoxy(snake_q,snake_y);
	 cout<<snake_body;
	}

      if(kbhit())
       {
	snake_gogame=getch();
	if(snake_gogame==27)
	{
	 snake_leavegame();
	 clrscr();
	 snake_border();
	 snake_dispfood();
	 snake_displife();
	 snake_dispenemy();
	 }
	}


      delay(snake_tym);
   }
  }





 void snake_dright(int &snake_x, int&snake_y, int &len)//The function turns the down moving snake in right direction.
 {
  snake_len1=len;
  snake_len2=snake_len1;
  snake_p=snake_x;

     snake_border();
     snake_dispfood();
     snake_displife();
     snake_dispenemy();
     for(; snake_len1>0;snake_len1--,++snake_x)
     {
      snake_score();
      snake_check();

     if(snake_x==snake_bx2)
      {
       snake_x=snake_bx1;
       }

       gotoxy(snake_x+1,snake_y);
       cout<<snake_head;

       snake_q=snake_y;
       for(snake_len2=snake_len1;snake_len2>0; snake_q--, snake_len2--)
	{
	 gotoxy(snake_p,snake_q) ;
	 cout<<snake_body;
	}
       gotoxy(snake_p,snake_q);
       cout<<" ";
       snake_q=snake_p;
       for(snake_len2=len;snake_len2>=snake_len1;snake_q++,snake_len2--)
       {
	 if(snake_q==snake_bx2)
	 snake_q=snake_bx1;
	 gotoxy(snake_q,snake_y);
	 cout<<snake_body;
	}

     if(kbhit())
       {
	snake_gogame=getch();
	if(snake_gogame==27)
	{
	 snake_leavegame();
	 clrscr();
	 snake_border();
	 snake_dispfood();
	 snake_displife();
	 snake_dispenemy();
	 }
	}


      delay(snake_tym);
   }
  }




 void snake_dleft(int &snake_x, int&snake_y, int &len)//The function turns the down moving snake in left direction.
 {
  snake_len1=len;
  snake_len2=snake_len1;
   snake_p=snake_x;

     snake_border();
     snake_dispfood();
     snake_displife();
     snake_dispenemy();
     for(; snake_len1>0;snake_i--,snake_len1--,--snake_x)
     {
      snake_score();
      snake_check();

      if(snake_x==snake_bx1)
      {
       snake_x=snake_bx2;
       }
	 snake_i=snake_x;
       gotoxy(snake_x-1,snake_y);
       cout<<snake_head;

       snake_q=snake_y;
       for(snake_len2=snake_len1;snake_len2>0; snake_q--, snake_len2--)
	{
	 gotoxy(snake_p,snake_q) ;
	 cout<<snake_body;
	}
	gotoxy(snake_p,snake_q);
	cout<<" ";
       snake_q=snake_i;
       for(snake_len2=len;snake_len2>=snake_len1;snake_q++,snake_len2--)
       {
	 if(snake_q==snake_bx2)
	 snake_q=snake_bx1;
	 gotoxy(snake_q,snake_y);
	 cout<<snake_body;
	}

      if(kbhit())
       {
	snake_gogame=getch();
	if(snake_gogame==27)
	{
	 snake_leavegame();
	 clrscr();
	 snake_border();
	 snake_dispfood();
	 snake_displife();
	 snake_dispenemy();
	 }
	}

      delay(snake_tym);
   }
  }




void snake_score()//The function displays the 'Points', 'Score' and 'Life' on their respective position on the console.
{
 gotoxy(snake_bx2/2-8,snake_by1);
 cout<<"\b                \b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
 cout<<"Score: "<<snake_score1;

 gotoxy(snake_bx1+2,snake_by1);
 cout<<"                 \b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
 cout<<" Points: "<<++snake_points;

 gotoxy(snake_bx2/2-3,snake_by2);
 cout<<"\b         \b\b\b\b\b\b\b\b";
 cout<<"Life: "<<snake_life;
 return;
 }


 void snake_genenemy() //The function creates the random position for snake_enemy, keeping in note for free space on console.
 {
  reselect:
  snake_enemyx=random(snake_bx2-snake_bx1-2)+snake_bx1+1;
  snake_enemyy=random(snake_by2-snake_by1-2)+snake_by1+1;

  if(snake_ch=='h'||snake_ch=='H')
  {
   if(snake_enemyy==snake_y)
   {
    if(snake_enemyx<snake_x-snake_size && snake_enemyx>snake_x+1)
    {
     return;
     }
    else
     goto reselect;
     }

   else
   {
    return;
   }
  }



 else if(snake_ch=='f' || snake_ch=='F')
 {
  if(snake_enemyy==snake_y)
  {
   if(snake_enemyx<snake_x-1 && snake_enemyx>snake_x+snake_size)
   {
    return;
    }
   else
    goto reselect;
   }

  else
  {
   return;
   }
 }



 else if(snake_ch=='t' || snake_ch=='T')
 {
  if(snake_enemyx==snake_x)
  {
   if(snake_enemyy<snake_y-1 && snake_enemyy>snake_y+snake_size)
   {
    return;
    }
   else
    goto reselect;
   }

  else
  {
   return;
   }
 }


 else if(snake_ch=='g' || snake_ch=='G')
 {
  if(snake_enemyx==snake_x)
  {
   if(snake_enemyy<snake_y-snake_size && snake_enemyy>snake_y+1)
   {
    return;
    }
   else
    goto reselect;
   }

  else
  {
   return;
   }
 }

else if(snake_enemyx==snake_lifex && snake_enemyy==snake_lifey)
  goto reselect;

else if(snake_enemyx==snake_foodx && snake_enemyy==snake_foody)
 goto reselect;

 else
  return;

 }



void snake_dispenemy()//The function displays the snake_enemy on the console at the position generated.
{
 gotoxy(snake_enemyx,snake_enemyy);
 cout<<snake_enemy;
 return;
}




void snake_genfood()//The function creates the random position for snake_food, keeping in note for free space on console.
{
 reselect:
  snake_foodx=random(snake_bx2-snake_bx1-2)+snake_bx1+1;
  snake_foody=random(snake_by2-snake_by1-2)+snake_by1+1;

 if(snake_ch=='h'||snake_ch=='H')
  {
  if(snake_foody==snake_y)
  {
   if(snake_foodx<snake_x-snake_size && snake_foodx>snake_x+1)
   {
    return;
    }
   else
    goto reselect;
   }

  else
  {
   return;
   }
 }


 else if(snake_ch=='f' || snake_ch=='F')
 {
  if(snake_foody==snake_y)
  {
   if(snake_foodx<snake_x-1 && snake_foodx>snake_x+snake_size)
   {
    return;
    }
   else
    goto reselect;
   }

  else
  {
   return;
   }
 }



 else if(snake_ch=='t' || snake_ch=='T')
 {
  if(snake_foody==snake_x)
  {
   if(snake_foody<snake_y-1 && snake_foody>snake_y+snake_size)
   {
    return;
    }
   else
    goto reselect;
   }

  else
  {
   return;
   }
 }


 else if(snake_ch=='g' || snake_ch=='G')
 {
  if(snake_foodx==snake_x)
  {
   if(snake_foody<snake_y-snake_size && snake_foody>snake_y+1)
   {
    return;
    }
   else
    goto reselect;
   }

  else
  {
   return;
   }
 }

else if(snake_foodx==snake_lifex && snake_foody==snake_lifey)
  goto reselect;

else if(snake_foodx==snake_enemyx && snake_enemyy==snake_lifey)
  goto reselect;


 else
  return;

 }




void snake_dispfood()//The function displays the snake_food on the console at the position genreated.
{
 gotoxy(snake_foodx,snake_foody);
 cout<<snake_food;
 return;
}




void snake_genlife()//The function creates the random position for snake_life snake_food, keeping in note for free space on console.
{
 reselect:
 snake_lifex=random(snake_bx2-snake_bx1-2)+snake_bx1+1;
 snake_lifey=random(snake_by2-snake_by1-2)+snake_by1+1;

 if(snake_ch=='h'||snake_ch=='H')
 {
  if(snake_lifey==snake_y)
  {
   if(snake_lifex<snake_x-snake_size && snake_lifex>snake_x+1)
   {
    return;
    }
   else
    goto reselect;
   }

  else
  {
   return;
   }
 }


 else if(snake_ch=='f' || snake_ch=='F')
 {
  if(snake_lifey==snake_y)
  {
   if(snake_lifex<snake_x-1 && snake_lifex>snake_x+snake_size)
   {
    return;
    }
   else
    goto reselect;
   }

  else
  {
   return;
   }
 }



 else if(snake_ch=='t' || snake_ch=='T')
 {
  if(snake_lifey==snake_x)
  {
   if(snake_lifey<snake_y-1 && snake_lifey>snake_y+snake_size)
   {
    return;
    }
   else
    goto reselect;
   }

  else
  {
   return;
   }
 }


 else if(snake_ch=='g' || snake_ch=='G')
 {
  if(snake_lifex==snake_x)
  {
   if(snake_lifey<snake_y-snake_size && snake_lifey>snake_y+1)
   {
    return;
    }
   else
    goto reselect;
   }

  else
  {
   return;
   }
 }

 else if(snake_lifex==snake_foodx && snake_lifey==snake_foody)
   goto reselect;

 else if(snake_lifex==snake_enemyx && snake_lifey==snake_enemyy)
   goto reselect;

 else
  return;

 }



void snake_displife()//The function displays the snake_life snake_food on the console at the position genreated.
{
  if(snake_lifeflag==1)
  {
   gotoxy(snake_lifex,snake_lifey);
    cout<<snake_lyf;
   }
 else
  return;
}



void snake_check() //The function does the work of collision detection of snake with snake_enemy, snake_food and snake_life snake_food.
 {
  if(snake_foodx==::snake_x && snake_foody==::snake_y)
   {
    ++snake_size;
    snake_score1+=100;
    snake_genfood();
    snake_dispfood();
    }

  if(snake_lifex==::snake_x && snake_lifey==::snake_y)
   {
    ::snake_score1+=500;
    snake_lifecomp=::snake_points+snake_wait;
    snake_lifeflag=0;
    ++snake_life;
    snake_lifex=0;
    snake_lifey=0;
    }

  if(snake_points==snake_lifecomp)
   {
    snake_lifeflag=1;
    snake_genlife();
    snake_displife();
    }

  if(snake_enemyx==::snake_x && snake_enemyy==::snake_y)
   {
    --snake_size;
    snake_score1-=1000;
    snake_genenemy();
    snake_dispenemy();
    --snake_life;
    }

  if(snake_life==0)
   snake_loose();
  return;
}



void snake_leave()//The function works when you want to snake_leave the snake_game in between.
{
 gotoxy(20,12);
 cout<<"Do you really want to exit the game?(y/n) ";
 reselect:
 snake_choice=getch();

 switch(snake_choice)
 {
  case 'Y':exit(0);

   break;
  case 'y':exit(0);
	   NOVA_user_input();
   break;
  case 'n': return;
  case 'N': return;
  default: goto reselect;
  }
 }



void snake_loose()//The function works when you snake_loose the snake_game.
{
 for(int snake_i=0; snake_i<3; snake_i++)
  {
   clrscr();
   gotoxy(40,12);
   delay(500);
   gotoxy(35,12);
   cout<<"You loose";
   delay(500);
   }

  exit(0);
 }

/*xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx*/

 void snake_leavegame()
 {
  char pointer=16,chl;
  int snake_bx1,snake_bx2,snake_by1, snake_by2;
  char xborderstyle=176;
  char yborderstyle=176;
  int snake_i,j;


start:
snake_i=8;j=6;
snake_bx1=32; snake_bx2=46; snake_by1=snake_i-2; snake_by2=snake_i+6;

 for( ; j<=15; j++)
  {
   for(snake_i=32; snake_i<46; snake_i++)
   {
    gotoxy(snake_i,j);
    cout<<" ";
     }
   }

 for(snake_i=snake_bx1; snake_i<=snake_bx2; snake_i++)
 {
  gotoxy(snake_i,snake_by1);
  cout<<xborderstyle;
  }
 for(snake_i=snake_bx1; snake_i<=snake_bx2; snake_i++)
 {
  gotoxy(snake_i,snake_by2);
  cout<<xborderstyle;
  }
 for(snake_i=snake_by1+1; snake_i<=snake_by2; snake_i++)
 {
  gotoxy(snake_bx1,snake_i);
  cout<<yborderstyle;
  }
 for(snake_i=snake_by1+1; snake_i<=snake_by2; snake_i++)
 {
  gotoxy(snake_bx2,snake_i);
  cout<<yborderstyle;
  }

snake_i=8;j=8;
  gotoxy(35,snake_i);
   cout<<" Continue ";
  gotoxy(35,snake_i+2);
   cout<<" New game ";
  gotoxy(35,snake_i+4);
   cout<<" Exit ";
re:
  gotoxy(33,j);
  cout<<" "<<pointer;
reselect:
  chl=getch();
   if(chl==72 && j>snake_i)
    {
     gotoxy(33,j);
     cout<<"  ";
     j-=2;
     goto re;
     }

   else if(chl==80 && j<snake_i+4)
    {
     gotoxy(33,j);
     cout<<"  ";
     j+=2;
     goto re;
     }

   else if(chl==13 && j==snake_i)
   {
     return;
    }

   else if(chl==13 && j==snake_i+2)
   {
    clrscr();
    gotoxy(10,12);
     cout<<"Are you sure you want to leave and start new game? (Y/N)";
    res:
     chl=getch();
    if(chl=='Y'|| chl=='y')
     snake_game();
    if(chl=='N'|| chl=='n')
     clrscr();
     goto start;
    }

   else if(chl==13 && j==snake_i+4)
   {
    clrscr();
    snake_leave();
    clrscr();
    goto start;
    }

   else
    goto reselect;

  }

/*xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx*/
/*xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx*/


void tictacto()
{
 NOVA_startup(30);
 int i,j;

 for(i=0,j=49; i<9; i++,j++)
 tictacto_board[i]=j;

 clrscr();
 cout<<"\n\n\n\t\t\tWelcome to Tic Tack Toe Game.";
 cout<<"\n\t\t\t" ;
 tictacto_choice=126;
 for(i=0; i<=28; i++)
 cout<<tictacto_choice;

 cout<<"\n\n\t\tChoose your mark:";
 tictacto_choice=4;
 cout<<"\n\t\t"<<tictacto_choice<<" Enter 1 for 'X'\n\t\t"<<tictacto_choice<<" Enter 2 for 'O'\n\t";
 tictacto_border();
 gotoxy(35,7);
 retake:
 cin>>tictacto_choice;
     if(tictacto_choice=='1')
     {
      tictacto_pmark='X';
      tictacto_cmark='O';
      }
     else if(tictacto_choice=='2')
     {
      tictacto_pmark='O';
      tictacto_cmark='X';
      }
     else if(tictacto_choice==27)
      exit(0);
     else
      goto retake;
    tictacto_choice=4;
 cout<<"\n\n\n\n\n\n\n\t\tChoose your level:";
 cout<<"\n\t\t"<<tictacto_choice<<" Enter 'E' for easy.";
 cout<<"\n\t\t"<<tictacto_choice<<" Enter 'M' for medium.";
 cout<<"\n\t\t"<<tictacto_choice<<" Enter 'H' for hard.\n\t\t\t";
 tictacto_border();
   gotoxy(36,15);
 reselect:
  cin>>tictacto_choice;
   if(tictacto_choice==27)
    exit(0);
   if(tictacto_choice!='E'&&tictacto_choice!='e'&&tictacto_choice!='M'&&tictacto_choice!='m'&&tictacto_choice!='H'&&tictacto_choice!='h')
    goto reselect;

 tictacto_game();
 }



void tictacto_game()
{
 randomize();
 clrscr();
 tictacto_boardy();
 tictacto_border();
 tictacto_disp();

    for(a=0; a<5; a++)
    {
     tictacto_enterno();
     for(int i=tictacto_bx1+2; i<tictacto_bx2-2; i++)
     {
      gotoxy(i,20);
      cout<<" ";
      }
     gotoxy(tictacto_bx1,tictacto_by1);
     tictacto_check();
     tictacto_win();
     if(a!=4)
     {
       delay(600);
       tictacto_computer();
      }
     tictacto_check();
      tictacto_win();
     }

 }



void tictacto_enterno()
{
 int k;
 retake:
 gotoxy(10,20);
  for(k=tictacto_bx1+2; k<tictacto_bx2-2; k++)
  {
   gotoxy(k,20);
   cout<<" ";
   }
 gotoxy(10,20);
 cout<<"Enter the number(1-9): ";
  cin>>no;

  if(no<1 || no>9)
  {
   gotoxy(35,20);
   cout<<"       Illegal move!";
   delay(800);
   goto retake;
   }

  if(tictacto_board[no-1]==tictacto_pmark || tictacto_board[no-1]==tictacto_cmark)
  {
   gotoxy(35,20);
   cout<<"       Illegal move!";
   delay(800);
   goto retake;
   }

 for(k=1; k<=9; k++)
 {
  if(k==no)
  tictacto_board[no-1]=tictacto_pmark;
  }
tictacto_disp();
 }



void tictacto_check()
{
 if(tictacto_board[0]==tictacto_board[1] && tictacto_board[1]==tictacto_board[2] && tictacto_board[2]==tictacto_pmark)
  flag=1;;

 if(tictacto_board[0]==tictacto_board[1] && tictacto_board[1]==tictacto_board[2] && tictacto_board[2]==tictacto_cmark)
  flag=2;

 if(tictacto_board[3]==tictacto_board[4] && tictacto_board[4]==tictacto_board[5] && tictacto_board[5]==tictacto_pmark)
  flag=1;

 if(tictacto_board[3]==tictacto_board[4] && tictacto_board[4]==tictacto_board[5] && tictacto_board[5]==tictacto_cmark)
  flag=2;

 if(tictacto_board[6]==tictacto_board[7] && tictacto_board[7]==tictacto_board[8] && tictacto_board[8]==tictacto_pmark)
  flag=1;

 if(tictacto_board[6]==tictacto_board[7] && tictacto_board[7]==tictacto_board[8] && tictacto_board[8]==tictacto_cmark)
  flag=2;

 if(tictacto_board[0]==tictacto_board[3] && tictacto_board[3]==tictacto_board[6] && tictacto_board[6]==tictacto_pmark)
  flag=1;

 if(tictacto_board[0]==tictacto_board[3] && tictacto_board[3]==tictacto_board[6] && tictacto_board[6]==tictacto_cmark)
  flag=2;

 if(tictacto_board[1]==tictacto_board[4] && tictacto_board[4]==tictacto_board[7] && tictacto_board[7]==tictacto_pmark)
  flag=1;

 if(tictacto_board[1]==tictacto_board[4] && tictacto_board[4]==tictacto_board[7] && tictacto_board[7]==tictacto_cmark)
  flag=2;

 if(tictacto_board[2]==tictacto_board[5] && tictacto_board[5]==tictacto_board[8] && tictacto_board[8]==tictacto_pmark)
  flag=1;

 if(tictacto_board[2]==tictacto_board[5] && tictacto_board[5]==tictacto_board[8] && tictacto_board[8]==tictacto_cmark)
  flag=2;

 if(tictacto_board[0]==tictacto_board[4] && tictacto_board[4]==tictacto_board[8] && tictacto_board[8]==tictacto_pmark)
  flag=1;

 if(tictacto_board[0]==tictacto_board[4] && tictacto_board[4]==tictacto_board[8] && tictacto_board[8]==tictacto_cmark)
  flag=2;

 if(tictacto_board[2]==tictacto_board[4] && tictacto_board[4]==tictacto_board[6] && tictacto_board[6]==tictacto_pmark)
  flag=1;

 if(tictacto_board[2]==tictacto_board[4] && tictacto_board[4]==tictacto_board[6] && tictacto_board[6]==tictacto_cmark)
  flag=2;

 if (flag==0)
 {
  for(int i=0; i<9; i++)
  {
    if(tictacto_board[i]>=49 && tictacto_board[i]<=57)
     return;

    if(i==8)
     flag=3;
   }
  }
 }




void tictacto_disp()
{
int x=29,y=tictacto_by2/2-4;
  for(int i=1; i<=9; i++)
  {
    gotoxy(x,y);
    cout<<tictacto_board[i-1];
    x+=10;
    if(i%3==0)
    {
     x=29;
     y+=4;
     }
   }
 }


void tictacto_border()
{
 int i;
 for(i=tictacto_bx1; i<=tictacto_bx2; i++)
 {
  gotoxy(i,tictacto_by1);
  cout<<xborderstyle;
  }
 for(i=tictacto_bx1; i<=tictacto_bx2; i++)
 {
  gotoxy(i,tictacto_by2);
  cout<<xborderstyle;
  }
 for(i=tictacto_by1+1; i<=tictacto_by2; i++)
 {
  gotoxy(tictacto_bx1,i);
  cout<<yborderstyle;
  }
 for(i=tictacto_by1+1; i<=tictacto_by2; i++)
 {
  gotoxy(tictacto_bx2,i);
  cout<<yborderstyle;
  }
}


void tictacto_win()
{
 if(flag==1)
  tictacto_pwin();

 if(flag==2)
  tictacto_cwin();

 if(flag==3)
  tictacto_tie();
}


void tictacto_boardy()
{
 gotoxy(1,tictacto_by2/2-6);
 cout<<"\n\t\t\t         |         |";
 cout<<"\n\t\t\t         |         |";
 cout<<"\n\t\t\t         |         |";
 cout<<"\n\t\t\t_________|_________|_________";
 cout<<"\n\t\t\t         |         |";
 cout<<"\n\t\t\t         |         |";
 cout<<"\n\t\t\t         |         |";
 cout<<"\n\t\t\t_________|_________|_________";
 cout<<"\n\t\t\t         |         |";
 cout<<"\n\t\t\t         |         |";
 cout<<"\n\t\t\t         |         |";
 cout<<"\n\t\t\t         |         |";
}



void tictacto_pwin()
{
 delay(1400);
 clrscr();
 tictacto_border();
 gotoxy(35,12);
 cout<<"You win";
 delay(4000);
 exit(0);
 }


void tictacto_cwin()
{
 delay(2000);
 clrscr();
 tictacto_border();
 gotoxy(33,12);
 cout<<"Computer wins";
 delay(4000);
 exit(0);
 }


void tictacto_tie()
{
 delay(1400);
 clrscr();
 tictacto_border();
 gotoxy(32,12);
 cout<<"The tictacto_game is tictacto_tie";
 delay(4000);
 exit(0);
 }


void tictacto_computer1()
{
 revive:
 c=random(9);
 if(tictacto_board[c]==tictacto_pmark|| tictacto_board[c]==tictacto_cmark)
 goto revive;
 tictacto_board[c]=tictacto_cmark;
 tictacto_check();
 tictacto_disp();
 }

void tictacto_computer2()
{
  char temp;
  c=random(9);
 for(; c<9; c++)
 {
  if(tictacto_board[c]!=tictacto_pmark && tictacto_board[c]!=tictacto_cmark)
  {
   temp=tictacto_board[c];
   tictacto_board[c]=tictacto_cmark;
   tictacto_check();
   if(flag==2)
   {
    tictacto_disp();
    return;
    }
   flag=0;
   tictacto_board[c]=temp;
   }
  }

 c=random(9);
 for(; c<9; c++)
 {
  if(tictacto_board[c]!=tictacto_pmark && tictacto_board[c]!=tictacto_cmark)
  {
   temp=tictacto_board[c];
   tictacto_board[c]=tictacto_pmark;
   tictacto_check();
    if(flag==1)
    {
     tictacto_board[c]=tictacto_cmark;
     flag=0;
     tictacto_check();
     tictacto_disp();
     return;
     }

    else
    {
     flag=0;
     tictacto_board[c]=temp;
     }
   }
  }

revive:
c=random(9);
if(tictacto_board[c]==tictacto_pmark|| tictacto_board[c]==tictacto_cmark)
goto revive;
tictacto_board[c]=tictacto_cmark;
tictacto_check();
tictacto_disp();
 }


void tictacto_computer3()
{
 char temp;

 for(c=0; c<9; c++)
 {
  if(tictacto_board[c]!=tictacto_pmark && tictacto_board[c]!=tictacto_cmark)
  {
   temp=tictacto_board[c];
   tictacto_board[c]=tictacto_cmark;
   tictacto_check();
   if(flag==2)
   {
    tictacto_disp();
    return;
    }
   flag=0;
   tictacto_board[c]=temp;
   }
  }


 for(c=0; c<9; c++)
 {
  if(tictacto_board[c]!=tictacto_pmark && tictacto_board[c]!=tictacto_cmark)
  {
   temp=tictacto_board[c];
   tictacto_board[c]=tictacto_pmark;
   tictacto_check();
    if(flag==1)
    {
     tictacto_board[c]=tictacto_cmark;
     flag=0;
     tictacto_check();
     tictacto_disp();
     return;
     }

    else
    {
     flag=0;
     tictacto_board[c]=temp;
     }
   }
  }

revive:
c=random(9);
if(tictacto_board[c]==tictacto_pmark|| tictacto_board[c]==tictacto_cmark)
goto revive;
tictacto_board[c]=tictacto_cmark;
tictacto_check();
tictacto_disp();
}


void tictacto_computer()
{
 if(tictacto_choice=='E' || tictacto_choice=='e')
  tictacto_computer1();
 if(tictacto_choice=='M' || tictacto_choice=='m')
  tictacto_computer2();
 if(tictacto_choice=='H' || tictacto_choice=='h')
  tictacto_computer3();
 }



/*xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx*/
/*xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx*/


void NOVA_contact_border()
{
 int i;
 for(i=1;i<=80; i++)
 {
  gotoxy(i,1);
  cout<<xborderstyle;
  gotoxy(i,3);
  cout<<xborderstyle;
  gotoxy(i,5);
  cout<<xborderstyle;
  gotoxy(i,7);
  cout<<xborderstyle;
  gotoxy(i,11);
  cout<<xborderstyle;
 }


 for(i=2; i<=11; i++)
 {
  gotoxy(1,i);
  cout<<yborderstyle;
  gotoxy(20,i);
  cout<<yborderstyle;
  gotoxy(80,i);
  cout<<yborderstyle;
  }

 gotoxy(3,2);
 cout<<"Phone Number:";
 gotoxy(3,4);
 cout<<"Name: ";
 gotoxy(3,6);
 cout<<"Nick Name: ";
 gotoxy(3,8);
 cout<<"Address:";
 gotoxy(1,12);
 cout<<"\n\n\n\t* Use 'arrow keys' to toggle between records.";
 cout<<"\n\t* Press 'Esc' key to exit.";
 cout<<"\n\t* Press 'Space bar' to search the contacts by their phone number";
 cout<<"\n\t* Press 'Enter' key to modify a record";
 cout<<"\n\t* Press '+' key to Add a record";
 cout<<"\n\t* Press '-' key to Delete a record";
}

/*xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx*/
/*xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx*/

void NOVA_contact_disp_address(char a[])
{
int i,j,k=30;
 for(i=0,j=8; a[i]!='\0'; i++)
 {
  gotoxy(k++,j);
  cout<<a[i];
  if(i==45 || i==100|| i==155)
  {
   k=30;
   j++ ;
   }

  }
}

/*xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx*/
/*xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx*/

void NOVA_contacts_displayall()
{
 ofstream fout,fout1;
 ifstream fin;
 NOVA_contacts NOVA_q,NOVA_q1;
 int NOVA_n, NOVA_pos, NOVA_i,NOVA_j,NOVA_u,NOVA_v;
 char NOVA_ch,NOVA_temp_no[18];
 start:
 fin.open("NOVA3333.dat",ios::in|ios::binary);
 if(!fin)
 goto add;
 fin.seekg(0,ios::end);
 NOVA_n=fin.tellg()/sizeof(NOVA_q);
 fin.seekg(0,ios::beg);
 NOVA_i=0;
 show:
  fin.read((char*)&NOVA_q,sizeof(NOVA_q));
  NOVA_q.NOVA_contact_output();

  reselect:
   NOVA_ch=getch();
   if(NOVA_ch==75 && NOVA_i>0)
   {
    NOVA_pos=fin.tellg();
    NOVA_pos-=2*sizeof(NOVA_q);
    fin.seekg(NOVA_pos);
    NOVA_i--;
    goto show;
    }

   else if(NOVA_ch==77 && NOVA_i<NOVA_n-1)
   {
    NOVA_i++;
    goto show;
    }

   else if(NOVA_ch==27)
   {
    fin.close();
    return;
    }


   else if(NOVA_ch=='+')
   {
    fin.close();
    add:
    NOVA_q.NOVA_contact_input();
    fout.open("NOVA3333.dat",ios::app|ios::binary);
    fout.write((char*)&NOVA_q,sizeof(NOVA_q));
    fout.close();
    goto start;
    }

   else if(NOVA_ch=='-')
   {
    strcpy(NOVA_temp_no, NOVA_q.NOVA_contact_number);
    fin.seekg(0,ios::beg);
    fout1.open("NOVA0000.dat",ios::binary);
    for(NOVA_u=0; NOVA_u<NOVA_n; NOVA_u++)
    {
     fin.read((char*)&NOVA_q,sizeof(NOVA_q));
     if(strcmpi(NOVA_q.NOVA_contact_number,NOVA_temp_no))
     fout1.write((char*)&NOVA_q,sizeof(NOVA_q));
     }
    fout1.close();
    fin.close();
    remove("NOVA3333.dat");
    rename("NOVA0000.dat","NOVA3333.dat");
    goto start;
   }

   else if(NOVA_ch==13)
   {
    gotoxy(2,22);
    cout<<"Are you sure you want to modify the record?(y/n)";
    re:
    NOVA_ch=getch();
    if(NOVA_ch=='n'||NOVA_ch=='N')
     {
      NOVA_pos=fin.tellg();
      NOVA_pos-=sizeof(NOVA_q);
      fin.seekg(NOVA_pos);
      goto show;
      }
     else if(NOVA_ch=='y'||NOVA_ch=='Y')
     {
      NOVA_pos=fin.tellg();
      NOVA_pos-=sizeof(NOVA_q);
      fin.close();
      NOVA_q.NOVA_contact_input();
      fout.open("NOVA3333.dat",ios::ate|ios::binary);
      fout.seekp(NOVA_pos);
      fout.write((char*)&NOVA_q,sizeof(NOVA_q));
      fout.close();
      goto start;
      }
     else goto re;
    }

   else if(NOVA_ch==32)
   {
    gotoxy(2,22);
    cout<<"Enter the Sr.no you are searching for: ";
    strcpy(NOVA_temp_no,NOVA_correct_space());
    fin.seekg(0,ios::beg);
    for(NOVA_j=0; NOVA_j<NOVA_n; NOVA_j++)
    {
     fin.read((char*)&NOVA_q,sizeof(NOVA_q));
     if(!strcmpi(NOVA_temp_no,NOVA_q.NOVA_contact_number))
     {
      NOVA_pos=fin.tellg();
      NOVA_pos-=sizeof(NOVA_q);
      fin.seekg(NOVA_pos);
      NOVA_i=NOVA_j;
      goto show;
      }
     }
   }
   else goto reselect;
 }


/*xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx*/
/*xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx*/


void NOVA_creator()
{
 cout<<"\nVaibhav: Hello everyone.";
 cout<<"\n         This is Vaibhav Gupta of class XII-B, a student of computer science,\n         a learner, a painter and the creator of NOVA.";
 cout<<"\n\n         I am a student of Mrs. Venkatalakshmi Mohan.";
 cout<<"\n\n         After the hard work of months, I am presenting you the beta version\n         of NOVA.";
 cout<<"\n\n         It is still in development mode, dont forget to give me your reviews.";
 cout<<"\n\n         Hope you will love it";
return;
}

/*xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx*/
/*xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx*/



void NOVA_diary_border()
{
 int i;
 for(i=1;i<=80; i++)
 {
  gotoxy(i,1);
  cout<<xborderstyle;
  gotoxy(i,3);
  cout<<xborderstyle;
  gotoxy(i,19);
  cout<<xborderstyle;
 }


 for(i=2; i<=19; i++)
 {
  gotoxy(1,i);
  cout<<yborderstyle;
  gotoxy(80,i);
  cout<<yborderstyle;
  }

 gotoxy(3,2);
 cout<<"Date:";
 gotoxy(60,2);
 cout<<"Personal Diary";
 gotoxy(1,20);
 cout<<"\t* Use 'arrow keys' to toggle between records.";
 cout<<"\n\t* Press 'Esc' key to exit.";
 cout<<"\n\t* Press 'Space bar' to search the contacts by their phone number";
 cout<<"\n\t* Press 'Enter' key to modify a record";
 cout<<"\n\t* Press '+' key to Add a record";
 cout<<"\n\t* Press '-' key to Delete a record";
}

/*xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx*/
/*xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx*/

void NOVA_diary_disp_content(char a[])
{
int i,j,k=3;
 for(i=0,j=4; a[i]!='\0'; i++)
 {
  gotoxy(k++,j);
  cout<<a[i];
  if(i%76==0 && j<18 && i!=0)
  {
   k=3;
   j++ ;
   }

  }
}

/*xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx*/
/*xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx*/

void NOVA_diary_displayall()
{
 clrscr();
 ofstream fout,fout1;
 ifstream fin;
 NOVA_diary NOVA_q,NOVA_q1;
 int NOVA_n, NOVA_pos, NOVA_i,NOVA_j,NOVA_u,NOVA_v;
 char NOVA_ch,NOVA_temp_no[18];
 start:
 fin.open("NOVA4444.dat",ios::in|ios::binary);
 if(!fin)
 goto add;
 fin.seekg(0,ios::end);
 NOVA_n=fin.tellg()/sizeof(NOVA_q);
 fin.seekg(0,ios::beg);
 NOVA_i=0;
 show:
  fin.read((char*)&NOVA_q,sizeof(NOVA_q));
  NOVA_q.NOVA_diary_output();

  reselect:
   NOVA_ch=getch();
   if(NOVA_ch==75 && NOVA_i>0)
   {
    NOVA_pos=fin.tellg();
    NOVA_pos-=2*sizeof(NOVA_q);
    fin.seekg(NOVA_pos);
    NOVA_i--;
    goto show;
    }

   else if(NOVA_ch==77 && NOVA_i<NOVA_n-1)
   {
    NOVA_i++;
    goto show;
    }

   else if(NOVA_ch==27)
   {
    fin.close();
    return;
    }


   else if(NOVA_ch=='+')
   {
    fin.close();
    add:
    NOVA_q.NOVA_diary_input();
    fout.open("NOVA4444.dat",ios::app|ios::binary);
    fout.write((char*)&NOVA_q,sizeof(NOVA_q));
    fout.close();
    goto start;
    }

   else if(NOVA_ch=='-')
   {
    strcpy(NOVA_temp_no, NOVA_q.NOVA_diary_date);
    fin.seekg(0,ios::beg);
    fout1.open("NOVA0000.dat",ios::binary);
    for(NOVA_u=0; NOVA_u<NOVA_n; NOVA_u++)
    {
     fin.read((char*)&NOVA_q,sizeof(NOVA_q));
     if(strcmpi(NOVA_q.NOVA_diary_date,NOVA_temp_no))
     fout1.write((char*)&NOVA_q,sizeof(NOVA_q));
     }
    fout1.close();
    fin.close();
    remove("NOVA4444.dat");
    rename("NOVA0000.dat","NOVA4444.dat");
    clrscr();
    goto start;
   }

   else if(NOVA_ch==13)
   {
    for(NOVA_u=1;NOVA_u<80; NOVA_u++)
    {
     for(NOVA_v=20;NOVA_v<26;NOVA_v++)
     {
      gotoxy(NOVA_u,NOVA_v);
      cout<<" ";
      }
     }
    gotoxy(2,22);
    cout<<"Are you sure you want to modify the record?(y/n)";
    re:
    NOVA_ch=getch();
    if(NOVA_ch=='n'||NOVA_ch=='N')
     {
      NOVA_pos=fin.tellg();
      NOVA_pos-=sizeof(NOVA_q);
      fin.seekg(NOVA_pos);
      goto show;
      }
     else if(NOVA_ch=='y'||NOVA_ch=='Y')
     {
      NOVA_pos=fin.tellg();
      NOVA_pos-=sizeof(NOVA_q);
      fin.close();
      NOVA_q.NOVA_diary_input();
      fout.open("NOVA4444.dat",ios::ate|ios::binary);
      fout.seekp(NOVA_pos);
      fout.write((char*)&NOVA_q,sizeof(NOVA_q));
      fout.close();
      goto start;
      }
     else goto re;
    }

   else if(NOVA_ch==32)
   {
    gotoxy(2,22);
    cout<<"Enter the date you are searching for: (dd-mm-yyyy)";
    cin.getline(NOVA_temp_no,20,'\n');
    fin.seekg(0,ios::beg);
    for(NOVA_j=0; NOVA_j<NOVA_n; NOVA_j++)
    {
     fin.read((char*)&NOVA_q,sizeof(NOVA_q));
     if(!strcmpi(NOVA_temp_no,NOVA_q.NOVA_diary_date))
     {
      NOVA_pos=fin.tellg();
      NOVA_pos-=sizeof(NOVA_q);
      fin.seekg(NOVA_pos);
      NOVA_i=NOVA_j;
      goto show;
      }
     }
   }
   else goto reselect;
 }

/*xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx*/
/*xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx*/



void NOVA_can_do()
{
clrscr();
cout<<"\nNOVA: I am having inbuilt calculator. If you want to calculate anything\n      just write it.";
cout<<"\n       for exapmle:";
cout<<"\n\n        * type,   solve: a+b  (+ or - or * or /)";
cout<<"\n               Being in development mode i can do only binary operations.";
cout<<"\n\n        * type,   solve: log(a) or ln(b)";
cout<<"\n\n        * type,   solve: sin(a)";
cout<<"\n\n        * type,   solve: a^b  or e^x";
cout<<"\n\n        * you can even type-   'find:'  or  'calculate:'  or  'deduce:'";
cout<<"\n\n\n        * but for quadratic, type,   solve for x: ax^2 + bx+ c=0";
cout<<"\n\n          solve for <variable name>: a<variable name>^2 + b<variable name> + c=0";
getch();
clrscr();
NOVA_games();
cout<<"\n\nNOVA: I have a diary for you to write notes and also a contact book";
cout<<"\n      Just order me to open them.\n";
getch();
return;
}

/*xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx*/
/*xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx*/

void NOVA_intro()
{
cout<<"\n\nNOVA: I am NOVA";
cout<<"\n\n       Number One Virtual Assistant";
cout<<"\n\n       I am the dream project of Master Vaibahv Gupta who has now become \n       his creation.";
cout<<"\n\n       To know about my features, type, What you can do NOVA?";
return;
}
/*xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx*/
/*xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx*/


void NOVA_games()
{
cout<<"\n\nNOVA: I have two games for you, Snake game and tictacto.";
cout<<"\n      Just type: 'I want to play snake game'";
cout<<"\n      Or 'Start snake game'";
cout<<"\n      or anything to command me, same commands for tictacto";
return;

}








