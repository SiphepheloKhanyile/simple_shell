#include "shell.h"
/**
 * built_exit - Function to Evaluat Buitin Exit
 * @TheCommandand: input TheCommandand_line
 * @status: storing the status process
 * Return: we return 2 if EXIT DONE else on 0 NOT EXIT
 **/

int built_exit(char *TheCommandand, int status)
{
	char **StatusOfExit;
	int CodeExit;
	char *TheCommand;

	TheCommand = _String_Dupl(TheCommandand);
	rmvSpaces(TheCommand);

	if (_String_Length(TheCommand) > 1)
	{
		if (_strncmp(TheCommand, "exit", 4) == 0)
		{
			StatusOfExit = parse_command(TheCommandand, " ");
			if (StatusOfExit[1] == NULL)
			{
				CodeExit = status;
				free(TheCommandand);
				free(StatusOfExit);
				free(TheCommand);
				exit(CodeExit);
			}
			rmvSpaces(StatusOfExit[1]);
			CodeExit = Atoi_(StatusOfExit[1]);
			free(TheCommandand);
			free(StatusOfExit);
			free(TheCommand);
			exit(CodeExit);
			return (2);
		}
	}
	free(TheCommand);
return (0);
}
