# GDB tool for debugging
- `gdb` is the acronym for `GNU` Debugger. This tool is helps to debug the program writeen in c,c++,.etc.It has the two interfaces 
-- CLI (command line interface)
-- TUI (text user interface)
### Some command line  options :
| option | description |
|--------|-------------|
| b main | Puts the breakpoint at starting of the program. |
| b | Puts the breakpoint at current line. |
| b N | puts the breakpoint at Nth line. |
| b +N | Puts the breakpoint N lines from the current line. |
| b fn 'fn means name of the function` | Puts the breakpoint at starting of function |
| r | Run the program untill the current function is finished |
| c | Continues running the program until the next breakpoint or error |
| f | Runs until the current function is finished |
| s | Runs the next line of the program |
| s N | Runs the next N lines of the program |
| n | Like s, but it does not step into functions |
| u N | Runs until you get N lines in front of the current line |
| p var `var means name of the variable`| Prints the current value of the variable var |
| bt | Prints a stack trace |
| u | Goes up a level in the stack |
| d | Goes down a level in the stack |
| q | Quits gdb |
| list | shows the source code. By default it will shows 10 lines |
| list 1,N | shows the source code from 1st line to Nth line |
| info b | shows the breakpoint information |
| info reg general | shows the general purpose register information |
| info reg float | shows the floating point register information |
| disassemble | shows assembly level code |
| file or exec-file | add the file into gdb tool |
### gdbtest.c 
```
#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE *fp;
	char ch,str[200];
	int c=0,n=0;
	fp=fopen("sample.txt","r");
	if(fp==NULL)
	{
		printf("file is not created");
		exit(1);
	}
	while((ch=(fgetc(fp)))!=EOF)
	{
		if(ch==' ')
			c++;
		if(ch=='\n')
			n++;
		printf("%c",ch);
		ch++;
	}
	printf("no of spaces in file=%d\n",c);
	printf("no of lines=%d\n",n);
	fclose(fp);
}
```
### GDB Procedure
-  Compile the source code with `-g` flag
```
$ gcc -g gdbtest.c -o gdbtest
```
- Run the executable file with gdb.If want TUI interface add the `--tui` flag
```
$ gdb gdbtest
```
 *or* 
```
$ gdb --tui gdbtest
```
> Use the gdb options based on requirement

