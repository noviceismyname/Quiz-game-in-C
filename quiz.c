#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>


void showrecord();
void help();
void editscore(float , char []);

int main()
{
	int countr,r,r1,count,i,n;
	float score;
	char choice;
	char playername[30];
	mainhome:
		printf("\n\n\t ________________________________________________________\t\n\n");
		printf("\n\n\t                      QUIZ PROGRAM                        \t\n\n");
		printf("\n\n\t ________________________________________________________ \t\n\n");
		printf("\n\n\t                   WELCOME TO THE QUIZ                    \t\n\n");
		printf("\n\n\t ________________________________________________________\t\n\n");
		printf("\n\n\t PRESS 'S' TO PLAY THE QUIZ\t\n\n");
		printf("\n\n\t PRESS 'H' FOR HELP\t\n\n");
		printf("\n\n\t PRESS 'V' TO VIEW THE SCORE \t\n\n");
		printf("\n\n\t PRESS 'Q' TO QUIT THE QUIZ \t\n\n");
		choice=toupper(getch());
		 if(choice == 'V')
		 {
		 	showrecord();
		 	goto mainhome;
		 }
		 else if(choice == 'H')
		 {
		 	help();
		 	getch();
		 	goto mainhome;
		 }
		 else if(choice == 'Q')
		 {
		 	exit(1);	
		 }
		 else if(choice == 'S')
		 {
		 	system("cls");
		 	printf("\n\n\n\n\n\n\t\t REGISTER YOUR NAME : ");
		 	  scanf("%s",&playername);
		 	system("cls");
		 	printf("\n\n\tWELCOME %s TO THE QUIZ PROGRAM\t\n\n",playername);
		 	printf("\n\n\t1. You will be asked 10 questions of MATHEMATICS. \t\n\n");
		 	printf("\n\n\t2. You will be given 4 options . \t\n\n");
		 	printf("\n\n\t PRESS Y IF YOU ARE READY TO PLAY \t\n\n");
		 	printf("\n\n\t PRESS ANY OTHER KEY TO RETURN TO MAIN MENU\t\n\n");
		 	if(toupper(getch())=='Y')
		 	{
		 		goto game;
			}
			else 
			{
				goto mainhome;
				system("cls");
			}
			game:
				system("cls");
				countr=0;
				for(i=1;i<=7;i++)
				{
					system("cls");
					r=i;
					
					switch(r)
					{
						case 1:
								printf("\n\n\n The average of first 50 natural numbers is ?");
	 		                    printf("\n\n A. 25.30 \t B. 25.5 \n\n C. 25.00 \t D.12.25");
	 		                    
	 		                    if(toupper(getch())=='B')
                    	 		{printf("\n\nCorrect !!..");countr++;break;}
			                    else{printf("\n\nWRONG !! The correct answer is B");break;}
			            
			            case  2:
			            	   printf("\n\n\n A fraction which bears the same ratio to 1/27 as 3/11 bear to 5/9 is equal to ?");
				               printf("\n\n A. 1/55 \t B. 55 \n\n C. 3/11 \t D.1/11");
				               
				               if(toupper(getch())=='A')
				               {printf("\n\nCORRECT!!");countr++;break;}
				               else{printf("\n\nWrong!! The correct answer is A");break;}
				               
				        case 3:
				    
				               printf("\n\n\n The number of 3-digit numbers divisible by 6, is?");
				               printf("\n\n A.149 \t B. 166 \n\n C. 150 \t D. 151"); 
		 		               
				               if(toupper(getch())=='C')
				               {printf("\n\nC is correct.");countr++;break;}
				               else{printf("\n\nThe correct answer is C");break;}
				
			            case 4:
			                   printf("\n\n\n  What is 1004 divided by 2?");
				               printf("\n\n A. 502 \t B. 52 \n\n C. 550 \t D. 514");
				               
				               if(toupper(getch())=='A')
				               {printf("\nCorrect");countr++;break;}
				               else{printf("Wrong!! The correct answer is A.");break;}
				
			            case 5:
				               printf("\n\n\n A clock strikes once at 1 o’clock, twice at 2 o’clock, thrice at 3 o’clock and so on."); 
				               printf("\n\n\n How many times will it strike in 24 hours?");
				               printf("\n\n A. 78 \t B. 136 \n\n C. 156 \t D. 196");
				               
				               if(toupper(getch())=='C')
				               {printf("C is Correct.");countr++;break;}
				               else{printf("Wrong! C is the correct answer. ");break;}
			
			            case 6:
				               printf("\n\n\n 125 gallons of a mixture contains 20 perecent of water. What amount of additional water"); 
				               printf("\n\n\nshould be added such that water content be raised to 25 percent?");
				               printf("\n\n A.15/2 gallons \t B. 17/2 gallons \n\n C. 19/2 gallons \t D. 25/3");
				               
				               if(toupper(getch())=='D')
				               {printf("Correct . Well Done .");countr++;break;}
				               else{printf("Wrong . The correct answer is D");break;}
				
			            case 7:
				               printf("\n\n\n 106^2 - 96^2 = ?");
				               printf("\n\n A. 2004 \t B. 2400 \n\n C. 1904 \t D. 1906");
				               
				               if(toupper(getch())=='B')
				               {printf("Correct");countr++;break;}
				               else{printf("Wronng! Correct answer is B");break;}
				
			            case 8:
				               printf("\n\n\n  Which of the following numbers gives 240 when added to its own square?");
				               printf("\n\n A. 15 \t B. 16 \n\n C. 18 \t D. 20");
				               
				               if(toupper(getch())=='A')
				               {printf("Correct");countr++;break;}
				               else{printf("Wrong . The correct answer is A");break;}
				
			            case 9:
				               printf("Evaluation of 8^3 × 8^2 × 8^-5 is …………. ");
				               printf("\n\nA. 1\t B. 0 \n\n C. 8 \t D. None of these ");
				               
				               if(toupper(getch())=='A')
				               {printf("Well done ");countr++;break;}
				               else{printf("The correct answer is A");break;}
				        
				        case 10:
				        	    printf("What is result of 15*0+1= ");
				        	    printf("\n\nA.1  \t B.2 \n\n C. 15 \t D. 24");
				        	    if(toupper(getch())=='A')
				        	    {printf("Correct");countr++;break;}
								else{printf("Wrong the correct answer is A");break;}
						case 11:
							   printf("What is the sum of first 100 natural number :");
							   printf("\n\nA. 10100\tB. 101002 \n\n C. 19223 \t D.120392");
							   if(toupper(getch())=='A')
							   {printf("Correct!");countr++;break;}
							   else
							   {printf("Wrong the correct answer is A");break;}
							   
					}}
					system("cls");
					score=(float)countr*100;
					printf("Your score is %.2f",score);
					printf("Do you want to play again (Y/N)");
					if(toupper(getch())=='Y')
					{
						goto game;
					}
					else 
					{
						editscore(score,playername);
						goto mainhome;
					}
				}
			}
	
	
	
void showrecord()
	{
		system("cls");
		char name[20];
		float scr;
		FILE *f;
		f=fopen("score.txt","r");
		fscanf(f,"%s%f",&name,&scr);
		printf("\n*****************************************************************");
		printf("\n\n\t%s has the highest score %.2f\t\n\n");
		printf("\n*****************************************************************");
		fclose(f);
		getch();
	}
	
void help()
{
	system("cls");
    printf("\n\n                              HELP");
    printf("\n -------------------------------------------------------------------------");
    printf("\n This game is a mathematics quiz game.");
	printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n    right option");
    printf("\n >> You will be asked questions continuously if you keep giving the right answers.");
    printf("\n >> No negative marking for wrong answers");

	printf("\n\n\t*********************BEST OF LUCK*********************************");
}




void editscore(float score, char plynm[])
{
system("cls");
	float sc;
	char nm[20];
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",&nm,&sc);
	if (score>=sc)
	  { sc=score;
	    fclose(f);
	    f=fopen("score.txt","w");
	    fprintf(f,"%s\n%.2f",plynm,sc);
	    fclose(f);

      }
}
