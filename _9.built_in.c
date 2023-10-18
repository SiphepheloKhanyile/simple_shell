#include "shell.h"
/**
 * built_in - Evaluate Buitins
 * @command:  line of command
 * @env: var enviroments
 * @status: status process
 * Return: 1 CD if DONE else return 2 EXIT DONE else 0 fo NO ONE
 **/
int built_in(char *command, char **env, int status)
{
	char **commandCD = NULL;
	size_t DirSizeBuffer = 512;
	static char currDirector[512];
	static char *currDir;
	static int CounterForAlloc;

	if (_strncmp(command, "cd", 2) == 0)
	{	commandCD = parse_command(command, " ");
		if (_strncmp(commandCD[0], "cd", 2) == 0)
		{
			if ((commandCD[1] == NULL) || (_strncmp(commandCD[1], "-", 1) == 0))
			{
				if (commandCD[1] == NULL)
					commandCD[1] = Get_Environment("HOME", env);
				else
				{
					if (_strncmp(commandCD[1], "-", 1) == 0)
					{
					if (chdir(currDirector))
						perror("Error:<chdir>");
					free(commandCD);
					Prompt_();
					return (1);
					}
				}
			}
			currDir = getcwd(currDirector, DirSizeBuffer);
			if (currDir == NULL)
				perror("Error <getcwd>");
			else
				CounterForAlloc++;
			if (chdir(commandCD[1]))
				perror("Error:<chdir>");
		}
		free(commandCD);
		Prompt_();
		return (1);
	} /*"cd" Logic*/
return (built_exit(command, status));
}
