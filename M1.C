#include<stdio.h>
#include<conio.h>

main()
{

   int p;
   clrscr();
   printf("press 1 to january");
   printf("\npress 2 to february");
   printf("\npress 3 to march");
   printf("\npress 4 to april");
   printf("\npress 5 to may");
   printf("\npress 6 to June");
   printf("\npress 7 to july");
   printf("\npress 8 to august");
   printf("\npress 9 to september");
   printf("\npress 10 to october");
   printf("\npress 11 to novmber");
   printf("\npress 12 to december");
   printf("\nenteer your choice");
   scanf("%d",&p);
   switch(p)
   {
       case 1 :
	      printf("january");
	      break;
       case 2 :
	      printf("feberuary");
	      break;
       case 3 :
	      printf("march");
	      break;
       case 4 :
	      printf("april");
	      break;
       case 5 :
	      printf("may");
	      break;
       case 6 :
	      printf("June");
	      break;
       case 7 :
	      printf("juiy");
	      break;
       case 8 :
	      printf("august");
	      break;
       case 9 :
	      printf("september");
	      break;
       case 10 :
	      printf("october");
	      break;
       case 11 :
	      printf("november");
	      break;
       case 12 :
	      printf("december");
	      break;
       default :
	       printf("plz enter voild choice !");
       }
getch();

}