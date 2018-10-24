//***********************************
//Author: Maurice Robert
//Program: TMA2 Q4, Quiz
//***********************************
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <signal.h>
#include <time.h>
#include <sys/time.h>
#include <setjmp.h>

//int time, n;
//int s;

/* define an alarm signal handling routine. */
void func(int sig_num)
{
printf("\nSorry out of time. Better luck next time!\n\n");
//return;
//exit(0);
}

/*int question_1() {
    int b = 0;
      printf("Question 1: How many SST MBA courses are offered in WOU?\n"); //Answer: 2
      alarm(5);
      scanf("%d",&b);
      alarm(0);
      printf("You have answered: '%d'\n", b);
      return b;
}*/

int main()
{ 
//jump: 
//char s[20];
int s = 0,a = 0;
int program_done = 0;
int i = 0;
//jump: 
signal(SIGALRM, func);

//question_1();
printf("OK First participant! You have 30 seconds to answer the following:\n");
sleep(2);
printf("Question 1: How many SST MBA courses are offered in WOU?\n"); //Answer: 2
alarm(30);

/*  while(alarm(5)){
    if (i < 5) {

        i++;
        printf ("countdown: %d\n", i);       
        sleep(1);

    }else {
        program_done = 1;
        
    }
    if (program_done == 1) break;
  }
*/

scanf("%d",&s);
alarm(0);
printf("You have answered: '%d'\n", s);
sleep(1);
//int result = strcmp(s, "two");
//if (result == 0)
        if (2 == s)
        {
            printf("'%d' is the correct answer!\n\n", s);
            } else {
            printf("Sorry wrong answer!\n\n");
            sleep(2);
                printf("Next participant! Try your luck!\n");
                sleep(2);
                printf("OK Second participant! You have 10 seconds to answer the following:\n");
                sleep(2);
                signal(SIGALRM, func);
                printf("Question 1: How many SST MBA courses are offered in WOU?\n"); //Answer: 2
                alarm(10);
                scanf("%d",&a);
                alarm(0);
                printf("You have answered: '%d'\n", a);
                sleep(1);
                    if (2 == a)
                    {
                        printf("'%d' is the correct answer!\n\n", a);
                        } else {
                        printf("Sorry wrong answer!\n\n");
                    }
                        printf("OK Second participant, you may continue! You have 30 seconds to answer the following:\n");
                        sleep(2);
                        signal(SIGALRM, func);
                        printf("Question 2: What is the meaning of life?\n");//Answer: 42
                        alarm(30);
                        scanf("%d",&a);
                        alarm(0);
                        printf("You have answered: '%d'\n", a);
                        sleep(1);
                            if (42 == a)
                            {
                                printf("'%d' is the correct answer!\n\n", a);
                                sleep(2);
                                printf("End of program. Thanks for playing!\n");
                                exit(0);
                                } else {
                                printf("Sorry wrong answer!\n\n");
                                sleep(2);
                                printf("End of program. Thanks for playing!\n");
                                exit(0);
                            }
        }
            printf("OK First participant, you may continue! You have 30 seconds to answer the following:\n");
            signal(SIGALRM, func);
            sleep(2);
            printf("Question 2: What is the meaning of life?\n");//Answer: 42
            alarm(30);
            scanf("%d",&a);
            alarm(0);
            printf("You have answered: '%d'\n", a);
            sleep(1);
                if (42 == a)
                {
                    printf("'%d' is the correct answer!\n\n", a);
                    sleep(2);
                    printf("End of program. Thanks for playing!\n");
                    } else {
                    printf("Sorry wrong answer!\n\n");
                    sleep(2);
                    printf("Next participant! Try your luck!\n");
                    printf("OK Second participant! You have 10 seconds to answer the following:\n");
                    sleep(2);
                    signal(SIGALRM, func);
                    printf("Question 2: What is the meaning of life?\n");//Answer: 42
                    alarm(10);
                    scanf("%d",&a);
                    alarm(0);
                    printf("You have answered: '%d'\n", a);
                        if (42 == a)
                        {
                            printf("'%d' is the correct answer!\n\n", a);
                            sleep(2);
                            printf("End of program. Thanks for playing!\n");
                            exit(0);
                            } else {
                            printf("Sorry wrong answer!\n\n");
                            sleep(2);
                            printf("End of program. Thanks for playing!\n");
                            exit(0);
                        }
                    }
}

