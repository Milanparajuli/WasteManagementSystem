#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void addwaste();
void view();
void cancel();
void wms();
struct waste{
	char date[10];
	char type[100];
	int qty;
};

int main()
{
	system("cls");
	
	int ch;
	char c;
	printf("\n\n---------------------------------");
	while(1)
	
	{
		printf("\n\n\t menu:");
		printf("\n********************************");
		printf("\npress 1 for Add Waste ");
		printf("\npress 2 for View Waste");
		printf("\npress 3 for cancel Waste");
		printf("\npress 4 for Exit");
		printf("\n--------------------------------");
		printf("\nEnter your choice:");
		scanf("%d",&ch);
		fflush(stdin);
		
		switch(ch)
		{
			case 1:
				wms();
				break;
			case 2:
				view();
				break;
			case 3:
				{
					printf("Are you sure cancel?(Y/N)");
					scanf("%c",&c);
					if(c=='Y'||c=='y')
					{
						cancel();
						break;
					}
					else
					{
					main();
					break;
					}
				}
			case 4:
			{
				printf("-----------------------------------\n");
				printf("Are you sure exit?(Y/N)");
				fflush(stdin);
				scanf("%C",&c);
				if(c=='Y'||c=='y')
				{

           			 printf("\n\n\t\tVisit Again");
           			 getch();
           			 exit(0);
           		}
           		else if(c=='N'||c=='n')
           		{
           			main();
				   }
				else
				{
					printf("-------------------------------------\n");
					printf("You enter wrong choice");
					exit(0);
				}
				
			default:
			printf("\n**********************************\n");
			printf("\tYou Enter wrong choice:");
			printf("\n***********************************");
			printf("\n\tPress any key to try again");
			getch();
			break;
			}
		}
		
		system("cls");
		
	}
	
	return 0;
	
}

void wms()
{
	system("cls");
	int num;
	char ch,n;
	printf("Type of waste:\n");
	printf("**********************\n");
	printf("\tMenu");
	printf("\n--------------------------\n");
	printf("\n\t1 Municipal");
	printf("\n\t2 Industrial");
	printf("\n\t3 Medical");
	printf("\n\t4 construction");
	printf("\n\t5 Exit");
	printf("\nEnter your choice: ");
	fflush(stdin);
	scanf("%d",&num);
	switch(num)
	{
		case 1:
			{
				printf("\n Rotting Garbage(R)");
				printf("\n Non rotting Garbage(N)");
				printf("\nEnter your choice:");
				fflush(stdin);
				scanf("%c",&n);
				
				if(n=='R'||n=='r')
				{
					addwaste();
				}
				else if(n=='n'||n=='N')
				{
					addwaste();
				}
				else 
				{
				printf("\n--------------------------------");
				printf("\n Invalid");
				exit(0);
				}
				break;
			}
		case 2:
				printf("\n Rotting Garbage(R)");
				printf("\n Non rotting Garbage(N)");
				printf("\nEnter your choice:");
				fflush(stdin);
				scanf("%c",&n);
				
				if(n=='R'||n=='r')
				{
					addwaste();
				}
				else if(n=='n'||n=='N')
				{
					addwaste();
				}
				else 
				{
				printf("\n---------------------------------------");
				printf("\nInvalid");
				exit(0);
				}
			break;	
		case 3:
				printf("\n Rotting Garbage(R)");
				printf("\n Non rotting Garbage(N)");
				printf("\nEnter your choice:");
				fflush(stdin);
				scanf("%c",&n);
				
				if(n=='R'||n=='r')
				{
					addwaste();
				}
				else if(n=='n'||n=='N')
				{
					addwaste();
				}
				else 
				{
				printf("\n---------------------------------------");
				printf("\nInvalid");
				exit(0);
				}
			break;
		case 4:
				printf("\n Rotting Garbage(R)");
				printf("\n Non rotting Garbage(N)");
				printf("\nEnter your choice:");
				fflush(stdin);
				scanf("%c",&n);
				
				if(n=='R'||n=='r')
				{
					addwaste();
				}
				else if(n=='n'||n=='N')
				{
					addwaste();
				}
				else 
				{
				printf("Invalid");
				}
			break;
		case 5:
			printf("--------------------------------------\n");
			printf("\nAre you sure exit?(Y/N)");
			scanf("%c",&ch);
			if(ch=='Y'||ch=='y')
			{
			printf("\nvisit again");
			exit(0);
			}
			else if(ch=='N'||ch=='n')
			{
				wms();
			}
			else
			{
				printf("\n--------------------------------------");
				printf("\nYou enter wrong choice");
			}
		default:
			printf("\n**********************************\n");
			printf("\tYou Enter wrong choice:");
			printf("\n***********************************");
			printf("\n\tPress any key to try again");
			getch();
			break;
	}
	
}
void addwaste()
{
	system("cls");
	
	printf("\t\t\t\tWelcome to Add menu");
	printf("\n");
	printf("\t\t\t-----------------------------------------\n");
	FILE *fps;
	char n,c,ch;
	struct waste ws;
	fps=fopen("file.txt","a+");
	if(fps==NULL)
	{
	printf("File not found");
	}
	printf("\n\nDate[YYYY-MM-DD]:");
	fflush(stdin);
	gets(ws.date);
	printf("How much waste in kg:");
	scanf("%d",ws.qty);
	fclose(fps);
	printf("\n");
	printf("-----------------------------");
	printf("\nsucessfully added waste");
	printf("\n+++++++++++++++++++++++++++++++\n\n");
	printf("\nDo you want to add another?(Y/N)");
	fflush(stdin);
	scanf("%c",&c);
	if(c=='y'||c=='Y')
	{
		printf("\n--------------------------------------------\n");
		printf("Do you want to add same or another?(S/A)");
		fflush(stdin);
		scanf("%c",&ch);
		printf("\nEnter your choice:");
		if(ch=='s'||ch=='S')
		{
		addwaste();
		}
		else if(ch=='a'||ch=='A')
		{
			wms();
		}
		else 
		{
			printf("\nYou enter wrong choice\n");
			printf("---------------------------------\n");
			printf("Visit again");
			exit(0);
		}
		
	}
	
	else 
	{
		printf("\n-----------------------------------");
		printf("\n Visit again\n");
		exit(0);
	}
}


void view()
{
	system("cls");
	
	FILE *fpe;
	printf("\n\tWelcome view Menu");
	printf("\n  ---------------------------------");
	
	int n,c;
	struct waste was;
	
	fpe=fopen("file.txt","r+");
	n=getw(fpe);
	if(fpe==NULL)
	{
		printf("File not found");
	}
	printf("\nDate:%s",was.date); 
	printf("\n");
	printf("Quantity:%d",was.qty);
	
	fclose(fpe);
	printf("\n\npress 1 for Back Menu: ");
	fflush(stdin);
	scanf("%d",&c);
	if(c==1)
	{
		main();
	}
	exit(0);
	
}

void cancel()
{
	system("cls");
	
	printf("Cancelled sucessfully\n");
	exit(0);
}
