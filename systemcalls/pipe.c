#include <sys/wait.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main()
{
	int pipefd[2];
	pid_t cpid;
	char buf[100];
	char buf1[100];

	if (pipe(pipefd) == -1) 
	{
		perror("pipe");
		exit(EXIT_FAILURE);
	}
	else
	{
		cpid = fork();
		if (cpid == -1)
		{
			perror("fork");
			exit(EXIT_FAILURE);
		}

		if (cpid == 0) 
		{ 
			close(pipefd[1]);    
			read(pipefd[0],buf,sizeof(buf));
			printf("%s\n",buf);
			exit(EXIT_SUCCESS);


		}
		else 
		{ 
			close(pipefd[0]);      
			fgets(buf1,sizeof(buf1),stdin);
			write(pipefd[1], buf1, strlen(buf1));
			close(pipefd[1]);          
			wait(NULL);                
			exit(EXIT_SUCCESS);
		}
	}
}

