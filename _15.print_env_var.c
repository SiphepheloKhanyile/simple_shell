#include "shell.h"
/**
 * Print_Environment- Function Program to print enviroment var
 *@env: pointer to array enviroment var
 * Return: void
 **/
void Print_Environment(char **env)
{
	char **Env_;


	for (Env_ = env; *env != NULL; env++)
	{
		*Env_ = *env;
		Puts_(*Env_);
	}
}
