#include "shell.h"
/**
 * _Errors- Function to print error to stderr
 *@program : pointer to program
 *@param: char pointer to the Passed command
 *@message: Description erorr to be printed
 *@Q_Exe: No of executions Executions
 **/
void _Errors(char *program, char *param, char *message, int Q_Exe)
{

	char buffer[256];
	char s_int[11];

	IntegerToString(Q_Exe, s_int);

	_String_copy(buffer, program);
	_String_Conc(buffer, ": ");
	_String_Conc(buffer, s_int);
	_String_Conc(buffer, ": ");
	_String_Conc(buffer, param);
	_String_Conc(buffer, ": ");
	_String_Conc(buffer, message);
	_String_Conc(buffer, "\n");

	write(STDERR_FILENO, &buffer, _String_Length(buffer));

}
