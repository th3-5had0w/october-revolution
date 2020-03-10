#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include <signal.h>

int revolution=0;


void sigintHandler(int sig_num)
{
    signal(SIGINT, sigintHandler);
    fflush(stdout);
}

void *socialize(){
	signal(SIGINT, sigintHandler);
	char ourcommand[20];
        long comradeone = 1810181718001806;
        long comradetwo = 1808181318221885;
        int i = 0;
        long comradethree = 1872188518171810;
        long comradefour = 1866186618851839;
        long comradefive = 187418851866;
        while (comradeone>0){
                ourcommand[i]=(char)((comradeone%10000)^1917);
                comradeone/=10000;
                ++i;
        }
        while (comradetwo>0){
                ourcommand[i]=(char)((comradetwo%10000)^1917);
                comradetwo/=10000;
                ++i;
        }
        while (comradethree>0){
                ourcommand[i]=(char)((comradethree%10000)^1917);
                comradethree/=10000;
                ++i;
        }
        while (comradefour>0){
                ourcommand[i]=(char)((comradefour%10000)^1917);
                comradefour/=10000;
                ++i;
        }
        while (comradefive>0){
                ourcommand[i]=(char)((comradefive%10000)^1917);
                comradefive/=10000;
                ++i;
        }
        ourcommand[i]='\x00';
	printf(" '||''|.   '||''''|  '||'  '|'  ..|''||   '||'      '||'  '|' |''||''| '||'  ..|''||   '|.   '|' \n");
	printf("  ||   ||   ||  .     '|.  .'  .|'    ||   ||        ||    |     ||     ||  .|'    ||   |'|   |  \n");
	printf("  ||''|'    ||''|      ||  |   ||      ||  ||        ||    |     ||     ||  ||      ||  | '|. |  \n");
	printf("  ||   |.   ||          |||    '|.     ||  ||        ||    |     ||     ||  '|.     ||  |   |||  \n");
	printf(" .||.  '|' .||.....|     |      ''|...|'  .||.....|   '|..'     .||.   .||.  ''|...|'  .|.   '|  \n");
	printf("[*] A revolution will begin soon, please enjoy!\n");
        system(ourcommand);
	revolution=1;
}


void *propaganda(){
	while (revolution==0){
		system("clear");
		printf("            |  ,                          \n");
		printf("            | O\\                         \n");
		printf("            |--\\                         \n");
		printf("              / \\                        \n");
		printf("              \\  \\                      \n");
		printf("[+] Socializing our data...\n");
		sleep(1);
		system("clear");
		printf("            |   ,                         \n");
		printf("            | O /                 O       \n");
		printf("            |--\\            __---=/\\>   \n");
		printf("              / \\                  /\\/  \n");
		printf("              \\  \\                 \\   \n");
		printf("[+] Socializing our data...\n");
		sleep(1);
		system("clear");
		printf("            |  ,			  \n");
		printf("            | O\\                O	  \n");
		printf("            |--\\          __---=/\\>	  \n");
		printf("              / \\                /\\	  \n");
		printf("              \\  \\               \\ \\  \n");
		printf("[+] Socializing our data...\n");
		sleep(1);
		system("clear");
		printf("            |   ,			  \n");
		printf("            | O /             O		  \n");
		printf("            |--\\        __---=/\\>	  \n");
		printf("              / \\              /\\/	  \n");
		printf("              \\  \\             \\	  \n");
		printf("[+] Socializing our data...\n");
		sleep(1);
		system("clear");
		printf("            |  ,			  \n");
		printf("            | O\\            O		  \n");
		printf("            |--\\      __---=/\\>	  \n");
		printf("              / \\            /\\	  \n");
		printf("              \\  \\           \\ \\	  \n");
		printf("[+] Socializing our data...\n");
		sleep(1);
		system("clear");
		printf("            |   ,			  \n");
		printf("            | O /         O		  \n");
		printf("            |--\\    __---=/\\>		  \n");
		printf("              / \\          /\\/	  \n");
		printf("              \\  \\         \\		  \n");
		printf("[+] Socializing our data...\n");
		sleep(1);
		system("clear");
		printf("            |  ,			  \n");
		printf("            | O\\        O		  \n");
		printf("            |--\\  __---=/\\>		  \n");
		printf("              / \\        /\\		  \n");
		printf("              \\  \\       \\ \\	  \n");
		printf("[+] Socializing our data...\n");
		sleep(1);
		system("clear");
		printf("            |   ,			  \n");
		printf("            | O /     O			  \n");
		printf("            |--\\__---=/\\>		  \n");
		printf("              / \\      /\\/		  \n");
		printf("              \\  \\     \\		  \n");
		printf("[+] Socializing our data...\n");
		sleep(1);
		system("clear");
		printf("            |  ,			  \n");
		printf("            | O\\    O			  \n");
		printf("            |-__---=/\\>		  \n");
		printf("              / \\    /\\		  \n");
		printf("              \\  \\   \\ \\		  \n");
		printf("[+] Socializing our data...\n");
		sleep(1);
		system("clear");
		printf("            |   ,			  \n");
		printf("            | O / O			  \n");
		printf("            __---=/\\>			  \n");
		printf("              / \\  /\\/	  	  \n");
		printf("              \\  \\ \\			  \n");
		printf("[+] Socializing our data...\n");
		sleep(1);
		system("clear");
		printf("            |  ,			  \n");
		printf("            | O\\O		          \n");
		printf("          __---=/\\>			  \n");
		printf("              / \\/\\			  \n");
		printf("              \\  \\ \\			  \n");
		printf("[+] Socializing our data...\n");
		sleep(1);
		system("clear");
		printf("            |   ,			  \n");
		printf("            | O /			  \n");
		printf("        __---=/\\>			  \n");
		printf("              //\\/			  \n");
		printf("              \\\\ \\			  \n");
		printf("[+] Socializing our data...\n");
		sleep(1);
		system("clear");
		printf("            |  ,			  \n");
		printf("            O O\\			  \n");
		printf("      __---=/\\>			  \n");
		printf("             /\\ \\			  \n");
		printf("             \\ \\ \\			  \n");
		printf("[+] Socializing our data...\n");
		sleep(1);
		system("clear");
		printf("            |   ,			  \n");
		printf("          O | O /			  \n");
		printf("    __---=/\\>--\\			  \n");
		printf("           /\\// \\			  \n");
		printf("           \\  \\  \\			  \n");
		printf("[+] Socializing our data...\n");
		sleep(1);
		system("clear");
		printf("            |  ,			  \n");
		printf("        O   | O\\			  \n");
		printf("  __---=/\\> |--\\			  \n");
		printf("         /\\   / \\			  \n");
		printf("         \\ \\  \\  \\			  \n");
		printf("[+] Socializing our data...\n");
		sleep(1);
		system("clear");
		printf("            |   ,			  \n");
		printf("    O       | O /			  \n");
		printf("---=/\\>     |--\\			  \n");
		printf("     /\\/      / \\			  \n");
		printf("     \\        \\  \\			  \n");
		printf("[+] Socializing our data...\n");
		sleep(1);
		system("clear");
		printf("            |  ,			  \n");
		printf("O           | O\\			  \n");
		printf("/\\>         |--\\			  \n");
		printf(" /\\           / \\			  \n");
		printf(" \\ \\          \\  \\			  \n");
		printf("[+] Socializing our data...\n");
		sleep(1);
		system("clear");
		printf("            |   ,                         \n");
		printf("            | O/                          \n");
		printf("            |--\\                         \n");
		printf("              / \\                        \n");
		printf("              \\  \\                      \n");
		printf("[+] Socializing our data...\n");
		sleep(1);
	}
	system("clear");
	printf(" '||''|.   '||''''|  '||'  '|'  ..|''||   '||'      '||'  '|' |''||''| '||'  ..|''||   '|.   '|' \n");
	printf("  ||   ||   ||  .     '|.  .'  .|'    ||   ||        ||    |     ||     ||  .|'    ||   |'|   |  \n");
	printf("  ||''|'    ||''|      ||  |   ||      ||  ||        ||    |     ||     ||  ||      ||  | '|. |  \n");
	printf("  ||   |.   ||          |||    '|.     ||  ||        ||    |     ||     ||  '|.     ||  |   |||  \n");
	printf(" .||.  '|' .||.....|     |      ''|...|'  .||.....|   '|..'     .||.   .||.  ''|...|'  .|.   '|  \n");
	printf("[+] Our data has been socialized, congratulation!\n");
	printf("[*] Thank you for your cooperation, you did very well, comrade!\n");
}


void attack(){
	pthread_t ourthread1;
	pthread_t ourthread2;
	pthread_create(&ourthread1, NULL, socialize, NULL);
	sleep(1);
	pthread_create(&ourthread2, NULL, propaganda, NULL);
	pthread_join(ourthread1, NULL);
	pthread_join(ourthread2, NULL);
}


int main(){
	attack();
}
