#include<iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "y.tab.h"
void count(void);
using namespace std;
string analysis(char *yytext,int n)
{
	int state = 0;
	int N = n + 1;//N表示串长加1,为与状态数保持一致。
	for (int i = 0; i < N; i++)
	{
		switch (state)
		{
			case 0:
			{
				if (yytext[i] == '/')
				{
					state=1;
					break;
				}
				else if (yytext[i] == 'a')
				{
					state=2;
					break;
				}
				else if (yytext[i] == '_')
				{
					state=3;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=4;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=5;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=6;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=7;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=8;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=9;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=10;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=11;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=12;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=13;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=14;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=15;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=16;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=17;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=18;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=19;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=20;
					break;
				}
				else if (yytext[i] == '.')
				{
					state=21;
					break;
				}
				else if (yytext[i] == '>')
				{
					state=22;
					break;
				}
				else if (yytext[i] == '<')
				{
					state=23;
					break;
				}
				else if (yytext[i] == '+')
				{
					state=24;
					break;
				}
				else if (yytext[i] == '-')
				{
					state=25;
					break;
				}
				else if (yytext[i] == '*')
				{
					state=26;
					break;
				}
				else if (yytext[i] == '%')
				{
					state=27;
					break;
				}
				else if (yytext[i] == '&')
				{
					state=28;
					break;
				}
				else if (yytext[i] == '^')
				{
					state=29;
					break;
				}
				else if (yytext[i] == '|')
				{
					state=30;
					break;
				}
				else if (yytext[i] == '=')
				{
					state=31;
					break;
				}
				else if (yytext[i] == '!')
				{
					state=32;
					break;
				}
				else if (yytext[i] == ';')
				{
					state=33;
					break;
				}
				else if (yytext[i] == ',')
				{
					state=34;
					break;
				}
				else if (yytext[i] == ':')
				{
					state=35;
					break;
				}
				else if (yytext[i] == '(')
				{
					state=36;
					break;
				}
				else if (yytext[i] == ')')
				{
					state=37;
					break;
				}
				else if (yytext[i] == '~')
				{
					state=38;
					break;
				}
				else if (yytext[i] == '\?')
				{
					state=39;
					break;
				}
				else if (yytext[i] == ' ')
				{
					state=40;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=18;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=18;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=18;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=18;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=18;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=18;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=18;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=18;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=18;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=18;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=18;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=18;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=18;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=18;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=18;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=18;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=18;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=18;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=18;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=18;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=18;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=18;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=18;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=18;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=18;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=18;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=18;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=18;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=18;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=18;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=18;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=18;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=18;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=18;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=18;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=18;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=20;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=20;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=20;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=20;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=20;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=20;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=20;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=20;
					break;
				}
				else if (yytext[i] == '{')
				{
					state=41;
					break;
				}
				else if (yytext[i] == '}')
				{
					state=42;
					break;
				}
				else if (yytext[i] == '[')
				{
					state=43;
					break;
				}
				else if (yytext[i] == ']')
				{
					state=44;
					break;
				}
				else if (yytext[i] == '\"')
				{
					state=45;
					break;
				}
				else if (yytext[i] == '#')
				{
					state=46;
					break;
				}
				else if (yytext[i] == '$')
				{
					state=46;
					break;
				}
				else if (yytext[i] == '\'')
				{
					state=47;
					break;
				}
				else if (yytext[i] == '@')
				{
					state=46;
					break;
				}
				else if (yytext[i] == '\\')
				{
					state=46;
					break;
				}
				else if (yytext[i] == '`')
				{
					state=46;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 1:
			{
				if(i==N-1)
				{
					 count(); return('/'); 
					break;
				}
				if (yytext[i] == '/')
				{
					state=48;
					break;
				}
				else if (yytext[i] == '*')
				{
					state=49;
					break;
				}
				else if (yytext[i] == '=')
				{
					state=50;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 2:
			{
				if(i==N-1)
				{
					 count(); return(check_type()); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=52;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '\"')
				{
					state=53;
					break;
				}
				else if (yytext[i] == '\'')
				{
					state=54;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 3:
			{
				if(i==N-1)
				{
					 /* Add code to complain about unmatched characters */ 
					break;
				}
				if (yytext[i] == 'B')
				{
					state=55;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=56;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=57;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 4:
			{
				if(i==N-1)
				{
					 count(); return(check_type()); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=58;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '\"')
				{
					state=53;
					break;
				}
				else if (yytext[i] == '\'')
				{
					state=54;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 5:
			{
				if(i==N-1)
				{
					 count(); return(check_type()); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=59;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=60;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=61;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '\"')
				{
					state=53;
					break;
				}
				else if (yytext[i] == '\'')
				{
					state=54;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 6:
			{
				if(i==N-1)
				{
					 count(); return(check_type()); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=62;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=63;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '\"')
				{
					state=53;
					break;
				}
				else if (yytext[i] == '\'')
				{
					state=54;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 7:
			{
				if(i==N-1)
				{
					 count(); return(check_type()); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=64;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=65;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=66;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '\"')
				{
					state=53;
					break;
				}
				else if (yytext[i] == '\'')
				{
					state=54;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 8:
			{
				if(i==N-1)
				{
					 count(); return(check_type()); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=67;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=68;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '\"')
				{
					state=53;
					break;
				}
				else if (yytext[i] == '\'')
				{
					state=54;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 9:
			{
				if(i==N-1)
				{
					 count(); return(check_type()); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=69;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '\"')
				{
					state=53;
					break;
				}
				else if (yytext[i] == '\'')
				{
					state=54;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 10:
			{
				if(i==N-1)
				{
					 count(); return(check_type()); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=70;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=71;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '\"')
				{
					state=53;
					break;
				}
				else if (yytext[i] == '\'')
				{
					state=54;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 11:
			{
				if(i==N-1)
				{
					 count(); return(check_type()); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=72;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '\"')
				{
					state=53;
					break;
				}
				else if (yytext[i] == '\'')
				{
					state=54;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 12:
			{
				if(i==N-1)
				{
					 count(); return(check_type()); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=73;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '\"')
				{
					state=53;
					break;
				}
				else if (yytext[i] == '\'')
				{
					state=54;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 13:
			{
				if(i==N-1)
				{
					 count(); return(check_type()); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=74;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=75;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=76;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=77;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '\"')
				{
					state=53;
					break;
				}
				else if (yytext[i] == '\'')
				{
					state=54;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 14:
			{
				if(i==N-1)
				{
					 count(); return(check_type()); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=78;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '\"')
				{
					state=53;
					break;
				}
				else if (yytext[i] == '\'')
				{
					state=54;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 15:
			{
				if(i==N-1)
				{
					 count(); return(check_type()); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=79;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '\"')
				{
					state=53;
					break;
				}
				else if (yytext[i] == '\'')
				{
					state=54;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 16:
			{
				if(i==N-1)
				{
					 count(); return(check_type()); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=80;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '\"')
				{
					state=53;
					break;
				}
				else if (yytext[i] == '\'')
				{
					state=54;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 17:
			{
				if(i==N-1)
				{
					 count(); return(check_type()); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=81;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '\"')
				{
					state=53;
					break;
				}
				else if (yytext[i] == '\'')
				{
					state=54;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 18:
			{
				if(i==N-1)
				{
					 count(); return(check_type()); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '\"')
				{
					state=53;
					break;
				}
				else if (yytext[i] == '\'')
				{
					state=54;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 19:
			{
				if(i==N-1)
				{
					 count(); return(CONSTANT); 
					break;
				}
				if (yytext[i] == 'e')
				{
					state=82;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=83;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=84;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=85;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=85;
					break;
				}
				else if (yytext[i] == '.')
				{
					state=86;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=82;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=87;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=84;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=88;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=88;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=85;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=85;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=85;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=85;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=85;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=85;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=89;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=89;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 20:
			{
				if(i==N-1)
				{
					 count(); return(CONSTANT); 
					break;
				}
				if (yytext[i] == 'e')
				{
					state=82;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=90;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=91;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=92;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=92;
					break;
				}
				else if (yytext[i] == '.')
				{
					state=86;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=82;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=93;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=91;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=92;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=92;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=92;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=92;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=92;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=92;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=92;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=92;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 21:
			{
				if(i==N-1)
				{
					 count(); return('.'); 
					break;
				}
				if (yytext[i] == '0')
				{
					state=94;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=94;
					break;
				}
				else if (yytext[i] == '.')
				{
					state=95;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=94;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=94;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=94;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=94;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=94;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=94;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=94;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=94;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 22:
			{
				if(i==N-1)
				{
					 count(); return('>'); 
					break;
				}
				if (yytext[i] == '>')
				{
					state=96;
					break;
				}
				else if (yytext[i] == '=')
				{
					state=97;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 23:
			{
				if(i==N-1)
				{
					 count(); return('<'); 
					break;
				}
				if (yytext[i] == '<')
				{
					state=98;
					break;
				}
				else if (yytext[i] == '%')
				{
					state=99;
					break;
				}
				else if (yytext[i] == '=')
				{
					state=100;
					break;
				}
				else if (yytext[i] == ':')
				{
					state=101;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 24:
			{
				if(i==N-1)
				{
					 count(); return('+'); 
					break;
				}
				if (yytext[i] == '+')
				{
					state=102;
					break;
				}
				else if (yytext[i] == '=')
				{
					state=103;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 25:
			{
				if(i==N-1)
				{
					 count(); return('-'); 
					break;
				}
				if (yytext[i] == '>')
				{
					state=104;
					break;
				}
				else if (yytext[i] == '-')
				{
					state=105;
					break;
				}
				else if (yytext[i] == '=')
				{
					state=106;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 26:
			{
				if(i==N-1)
				{
					 count(); return('*'); 
					break;
				}
				if (yytext[i] == '=')
				{
					state=107;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 27:
			{
				if(i==N-1)
				{
					 count(); return('%'); 
					break;
				}
				if (yytext[i] == '>')
				{
					state=108;
					break;
				}
				else if (yytext[i] == '=')
				{
					state=109;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 28:
			{
				if(i==N-1)
				{
					 count(); return('&'); 
					break;
				}
				if (yytext[i] == '&')
				{
					state=110;
					break;
				}
				else if (yytext[i] == '=')
				{
					state=111;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 29:
			{
				if(i==N-1)
				{
					 count(); return('^'); 
					break;
				}
				if (yytext[i] == '=')
				{
					state=112;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 30:
			{
				if(i==N-1)
				{
					 count(); return('|'); 
					break;
				}
				if (yytext[i] == '|')
				{
					state=113;
					break;
				}
				else if (yytext[i] == '=')
				{
					state=114;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 31:
			{
				if(i==N-1)
				{
					 count(); return('='); 
					break;
				}
				if (yytext[i] == '=')
				{
					state=115;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 32:
			{
				if(i==N-1)
				{
					 count(); return('!'); 
					break;
				}
				if (yytext[i] == '=')
				{
					state=116;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 33:
			{
				if(i==N-1)
				{
					 count(); return(';'); 
					break;
				}
				return "ERROR";
			}
			case 34:
			{
				if(i==N-1)
				{
					 count(); return(','); 
					break;
				}
				return "ERROR";
			}
			case 35:
			{
				if(i==N-1)
				{
					 count(); return(':'); 
					break;
				}
				if (yytext[i] == '>')
				{
					state=117;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 36:
			{
				if(i==N-1)
				{
					 count(); return('('); 
					break;
				}
				return "ERROR";
			}
			case 37:
			{
				if(i==N-1)
				{
					 count(); return(')'); 
					break;
				}
				return "ERROR";
			}
			case 38:
			{
				if(i==N-1)
				{
					 count(); return('~'); 
					break;
				}
				return "ERROR";
			}
			case 39:
			{
				if(i==N-1)
				{
					 count(); return('?'); 
					break;
				}
				return "ERROR";
			}
			case 40:
			{
				if(i==N-1)
				{
					 count(); 
					break;
				}
				return "ERROR";
			}
			case 41:
			{
				if(i==N-1)
				{
					 count(); return('{'); 
					break;
				}
				return "ERROR";
			}
			case 42:
			{
				if(i==N-1)
				{
					 count(); return('}'); 
					break;
				}
				return "ERROR";
			}
			case 43:
			{
				if(i==N-1)
				{
					 count(); return('['); 
					break;
				}
				return "ERROR";
			}
			case 44:
			{
				if(i==N-1)
				{
					 count(); return(']'); 
					break;
				}
				return "ERROR";
			}
			case 45:
			{
				if(i==N-1)
				{
					 /* Add code to complain about unmatched characters */ 
					break;
				}
				if (yytext[i] == '\"')
				{
					state=118;
					break;
				}
				else if (yytext[i] == '\\')
				{
					state=119;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 46:
			{
				if(i==N-1)
				{
					 /* Add code to complain about unmatched characters */ 
					break;
				}
				return "ERROR";
			}
			case 47:
			{
				if(i==N-1)
				{
					 /* Add code to complain about unmatched characters */ 
					break;
				}
				if (yytext[i] == '\\')
				{
					state=120;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 48:
			{
				if(i==N-1)
				{
					 /* consume //-comment */ 
					break;
				}
				if (yytext[i] == '/')
				{
					state=121;
					break;
				}
				else if (yytext[i] == 'a')
				{
					state=121;
					break;
				}
				else if (yytext[i] == '_')
				{
					state=121;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=121;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=121;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=121;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=121;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=121;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=121;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=121;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=121;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=121;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=121;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=121;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=121;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=121;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=121;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=121;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=121;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=121;
					break;
				}
				else if (yytext[i] == '.')
				{
					state=121;
					break;
				}
				else if (yytext[i] == '>')
				{
					state=121;
					break;
				}
				else if (yytext[i] == '<')
				{
					state=121;
					break;
				}
				else if (yytext[i] == '+')
				{
					state=121;
					break;
				}
				else if (yytext[i] == '-')
				{
					state=121;
					break;
				}
				else if (yytext[i] == '*')
				{
					state=121;
					break;
				}
				else if (yytext[i] == '%')
				{
					state=121;
					break;
				}
				else if (yytext[i] == '&')
				{
					state=121;
					break;
				}
				else if (yytext[i] == '^')
				{
					state=121;
					break;
				}
				else if (yytext[i] == '|')
				{
					state=121;
					break;
				}
				else if (yytext[i] == '=')
				{
					state=121;
					break;
				}
				else if (yytext[i] == '!')
				{
					state=121;
					break;
				}
				else if (yytext[i] == ';')
				{
					state=121;
					break;
				}
				else if (yytext[i] == ',')
				{
					state=121;
					break;
				}
				else if (yytext[i] == ':')
				{
					state=121;
					break;
				}
				else if (yytext[i] == '(')
				{
					state=121;
					break;
				}
				else if (yytext[i] == ')')
				{
					state=121;
					break;
				}
				else if (yytext[i] == '~')
				{
					state=121;
					break;
				}
				else if (yytext[i] == '\?')
				{
					state=121;
					break;
				}
				else if (yytext[i] == ' ')
				{
					state=121;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=121;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=121;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=121;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=121;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=121;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=121;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=121;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=121;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=121;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=121;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=121;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=121;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=121;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=121;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=121;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=121;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=121;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=121;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=121;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=121;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=121;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=121;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=121;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=121;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=121;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=121;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=121;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=121;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=121;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=121;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=121;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=121;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=121;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=121;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=121;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=121;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=121;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=121;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=121;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=121;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=121;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=121;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=121;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=121;
					break;
				}
				else if (yytext[i] == '{')
				{
					state=121;
					break;
				}
				else if (yytext[i] == '}')
				{
					state=121;
					break;
				}
				else if (yytext[i] == '[')
				{
					state=121;
					break;
				}
				else if (yytext[i] == ']')
				{
					state=121;
					break;
				}
				else if (yytext[i] == '\"')
				{
					state=121;
					break;
				}
				else if (yytext[i] == '#')
				{
					state=121;
					break;
				}
				else if (yytext[i] == '$')
				{
					state=121;
					break;
				}
				else if (yytext[i] == '\'')
				{
					state=121;
					break;
				}
				else if (yytext[i] == '@')
				{
					state=121;
					break;
				}
				else if (yytext[i] == '\\')
				{
					state=121;
					break;
				}
				else if (yytext[i] == '`')
				{
					state=121;
					break;
				}
				else if (yytext[i] == '')
				{
					state=121;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 49:
			{
				if(i==N-1)
				{
					 comment(); 
					break;
				}
				return "ERROR";
			}
			case 50:
			{
				if(i==N-1)
				{
					 count(); return(DIV_ASSIGN); 
					break;
				}
				return "ERROR";
			}
			case 51:
			{
				if(i==N-1)
				{
					 count(); return(check_type()); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 52:
			{
				if(i==N-1)
				{
					 count(); return(check_type()); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=122;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 53:
			{
				if (yytext[i] == '\"')
				{
					state=118;
					break;
				}
				else if (yytext[i] == '\\')
				{
					state=119;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 54:
			{
				if (yytext[i] == '\\')
				{
					state=120;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 55:
			{
				if (yytext[i] == 'o')
				{
					state=123;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 56:
			{
				if (yytext[i] == 'o')
				{
					state=124;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 57:
			{
				if (yytext[i] == 'm')
				{
					state=125;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 58:
			{
				if(i==N-1)
				{
					 count(); return(check_type()); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=126;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 59:
			{
				if(i==N-1)
				{
					 count(); return(check_type()); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=127;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 60:
			{
				if(i==N-1)
				{
					 count(); return(check_type()); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=128;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 61:
			{
				if(i==N-1)
				{
					 count(); return(check_type()); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=129;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 62:
			{
				if(i==N-1)
				{
					 count(); return(check_type()); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=130;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 63:
			{
				if(i==N-1)
				{
					 count(); return(DO); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=131;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 64:
			{
				if(i==N-1)
				{
					 count(); return(check_type()); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=132;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 65:
			{
				if(i==N-1)
				{
					 count(); return(check_type()); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=133;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 66:
			{
				if(i==N-1)
				{
					 count(); return(check_type()); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=134;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 67:
			{
				if(i==N-1)
				{
					 count(); return(check_type()); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=135;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 68:
			{
				if(i==N-1)
				{
					 count(); return(check_type()); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=136;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 69:
			{
				if(i==N-1)
				{
					 count(); return(check_type()); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=137;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 70:
			{
				if(i==N-1)
				{
					 count(); return(IF); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 71:
			{
				if(i==N-1)
				{
					 count(); return(check_type()); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=138;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=139;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 72:
			{
				if(i==N-1)
				{
					 count(); return(check_type()); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=140;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 73:
			{
				if(i==N-1)
				{
					 count(); return(check_type()); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=141;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=142;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=143;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 74:
			{
				if(i==N-1)
				{
					 count(); return(check_type()); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=144;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=145;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 75:
			{
				if(i==N-1)
				{
					 count(); return(check_type()); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=146;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=147;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 76:
			{
				if(i==N-1)
				{
					 count(); return(check_type()); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=148;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 77:
			{
				if(i==N-1)
				{
					 count(); return(check_type()); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=149;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 78:
			{
				if(i==N-1)
				{
					 count(); return(check_type()); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=150;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 79:
			{
				if(i==N-1)
				{
					 count(); return(check_type()); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=151;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=152;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 80:
			{
				if(i==N-1)
				{
					 count(); return(check_type()); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=153;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=154;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 81:
			{
				if(i==N-1)
				{
					 count(); return(check_type()); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=155;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 82:
			{
				if (yytext[i] == '0')
				{
					state=156;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=156;
					break;
				}
				else if (yytext[i] == '+')
				{
					state=157;
					break;
				}
				else if (yytext[i] == '-')
				{
					state=157;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=156;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=156;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=156;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=156;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=156;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=156;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=156;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=156;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 83:
			{
				if(i==N-1)
				{
					 count(); return(CONSTANT); 
					break;
				}
				if (yytext[i] == 'l')
				{
					state=87;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=158;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=159;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=158;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 84:
			{
				if(i==N-1)
				{
					 count(); return(CONSTANT); 
					break;
				}
				if (yytext[i] == 'l')
				{
					state=83;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=87;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 85:
			{
				if(i==N-1)
				{
					 count(); return(CONSTANT); 
					break;
				}
				if (yytext[i] == 'e')
				{
					state=82;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=83;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=84;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=85;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=85;
					break;
				}
				else if (yytext[i] == '.')
				{
					state=86;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=82;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=87;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=84;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=85;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=85;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=85;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=85;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=85;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=85;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=89;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=89;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 86:
			{
				if(i==N-1)
				{
					 count(); return(CONSTANT); 
					break;
				}
				if (yytext[i] == 'e')
				{
					state=160;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=161;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=161;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=162;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=162;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=160;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=161;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=161;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=162;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=162;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=162;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=162;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=162;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=162;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=162;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=162;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 87:
			{
				if(i==N-1)
				{
					 count(); return(CONSTANT); 
					break;
				}
				if (yytext[i] == 'u')
				{
					state=158;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=158;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 88:
			{
				if (yytext[i] == 'a')
				{
					state=163;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=163;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=163;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=163;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=163;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=163;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=163;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=163;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=163;
					break;
				}
				else if (yytext[i] == '.')
				{
					state=164;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=163;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=163;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=163;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=163;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=163;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=163;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=163;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=163;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=163;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=163;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=163;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=163;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=163;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 89:
			{
				if (yytext[i] == 'e')
				{
					state=82;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=89;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=89;
					break;
				}
				else if (yytext[i] == '.')
				{
					state=86;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=82;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=89;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=89;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=89;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=89;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=89;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=89;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=89;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=89;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 90:
			{
				if(i==N-1)
				{
					 count(); return(CONSTANT); 
					break;
				}
				if (yytext[i] == 'l')
				{
					state=93;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=165;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=166;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=165;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 91:
			{
				if(i==N-1)
				{
					 count(); return(CONSTANT); 
					break;
				}
				if (yytext[i] == 'l')
				{
					state=90;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=93;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 92:
			{
				if(i==N-1)
				{
					 count(); return(CONSTANT); 
					break;
				}
				if (yytext[i] == 'e')
				{
					state=82;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=90;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=91;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=92;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=92;
					break;
				}
				else if (yytext[i] == '.')
				{
					state=86;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=82;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=93;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=91;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=92;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=92;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=92;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=92;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=92;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=92;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=92;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=92;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 93:
			{
				if(i==N-1)
				{
					 count(); return(CONSTANT); 
					break;
				}
				if (yytext[i] == 'u')
				{
					state=165;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=165;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 94:
			{
				if(i==N-1)
				{
					 count(); return(CONSTANT); 
					break;
				}
				if (yytext[i] == 'e')
				{
					state=167;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=168;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=168;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=94;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=94;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=167;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=168;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=168;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=94;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=94;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=94;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=94;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=94;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=94;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=94;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=94;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 95:
			{
				if (yytext[i] == '.')
				{
					state=169;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 96:
			{
				if(i==N-1)
				{
					 count(); return(RIGHT_OP); 
					break;
				}
				if (yytext[i] == '=')
				{
					state=170;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 97:
			{
				if(i==N-1)
				{
					 count(); return(GE_OP); 
					break;
				}
				return "ERROR";
			}
			case 98:
			{
				if(i==N-1)
				{
					 count(); return(LEFT_OP); 
					break;
				}
				if (yytext[i] == '=')
				{
					state=171;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 99:
			{
				if(i==N-1)
				{
					 count(); return('{'); 
					break;
				}
				return "ERROR";
			}
			case 100:
			{
				if(i==N-1)
				{
					 count(); return(LE_OP); 
					break;
				}
				return "ERROR";
			}
			case 101:
			{
				if(i==N-1)
				{
					 count(); return('['); 
					break;
				}
				return "ERROR";
			}
			case 102:
			{
				if(i==N-1)
				{
					 count(); return(INC_OP); 
					break;
				}
				return "ERROR";
			}
			case 103:
			{
				if(i==N-1)
				{
					 count(); return(ADD_ASSIGN); 
					break;
				}
				return "ERROR";
			}
			case 104:
			{
				if(i==N-1)
				{
					 count(); return(PTR_OP); 
					break;
				}
				return "ERROR";
			}
			case 105:
			{
				if(i==N-1)
				{
					 count(); return(DEC_OP); 
					break;
				}
				return "ERROR";
			}
			case 106:
			{
				if(i==N-1)
				{
					 count(); return(SUB_ASSIGN); 
					break;
				}
				return "ERROR";
			}
			case 107:
			{
				if(i==N-1)
				{
					 count(); return(MUL_ASSIGN); 
					break;
				}
				return "ERROR";
			}
			case 108:
			{
				if(i==N-1)
				{
					 count(); return('}'); 
					break;
				}
				return "ERROR";
			}
			case 109:
			{
				if(i==N-1)
				{
					 count(); return(MOD_ASSIGN); 
					break;
				}
				return "ERROR";
			}
			case 110:
			{
				if(i==N-1)
				{
					 count(); return(AND_OP); 
					break;
				}
				return "ERROR";
			}
			case 111:
			{
				if(i==N-1)
				{
					 count(); return(AND_ASSIGN); 
					break;
				}
				return "ERROR";
			}
			case 112:
			{
				if(i==N-1)
				{
					 count(); return(XOR_ASSIGN); 
					break;
				}
				return "ERROR";
			}
			case 113:
			{
				if(i==N-1)
				{
					 count(); return(OR_OP); 
					break;
				}
				return "ERROR";
			}
			case 114:
			{
				if(i==N-1)
				{
					 count(); return(OR_ASSIGN); 
					break;
				}
				return "ERROR";
			}
			case 115:
			{
				if(i==N-1)
				{
					 count(); return(EQ_OP); 
					break;
				}
				return "ERROR";
			}
			case 116:
			{
				if(i==N-1)
				{
					 count(); return(NE_OP); 
					break;
				}
				return "ERROR";
			}
			case 117:
			{
				if(i==N-1)
				{
					 count(); return(']'); 
					break;
				}
				return "ERROR";
			}
			case 118:
			{
				if(i==N-1)
				{
					 count(); return(STRING_LITERAL); 
					break;
				}
				return "ERROR";
			}
			case 119:
			{
				if (yytext[i] == '/')
				{
					state=172;
					break;
				}
				else if (yytext[i] == 'a')
				{
					state=172;
					break;
				}
				else if (yytext[i] == '_')
				{
					state=172;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=172;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=172;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=172;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=172;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=172;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=172;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=172;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=172;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=172;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=172;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=172;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=172;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=172;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=172;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=172;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=172;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=172;
					break;
				}
				else if (yytext[i] == '.')
				{
					state=172;
					break;
				}
				else if (yytext[i] == '>')
				{
					state=172;
					break;
				}
				else if (yytext[i] == '<')
				{
					state=172;
					break;
				}
				else if (yytext[i] == '+')
				{
					state=172;
					break;
				}
				else if (yytext[i] == '-')
				{
					state=172;
					break;
				}
				else if (yytext[i] == '*')
				{
					state=172;
					break;
				}
				else if (yytext[i] == '%')
				{
					state=172;
					break;
				}
				else if (yytext[i] == '&')
				{
					state=172;
					break;
				}
				else if (yytext[i] == '^')
				{
					state=172;
					break;
				}
				else if (yytext[i] == '|')
				{
					state=172;
					break;
				}
				else if (yytext[i] == '=')
				{
					state=172;
					break;
				}
				else if (yytext[i] == '!')
				{
					state=172;
					break;
				}
				else if (yytext[i] == ';')
				{
					state=172;
					break;
				}
				else if (yytext[i] == ',')
				{
					state=172;
					break;
				}
				else if (yytext[i] == ':')
				{
					state=172;
					break;
				}
				else if (yytext[i] == '(')
				{
					state=172;
					break;
				}
				else if (yytext[i] == ')')
				{
					state=172;
					break;
				}
				else if (yytext[i] == '~')
				{
					state=172;
					break;
				}
				else if (yytext[i] == '\?')
				{
					state=172;
					break;
				}
				else if (yytext[i] == ' ')
				{
					state=172;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=172;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=172;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=172;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=172;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=172;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=172;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=172;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=172;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=172;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=172;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=172;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=172;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=172;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=172;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=172;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=172;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=172;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=172;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=172;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=172;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=172;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=172;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=172;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=172;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=172;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=172;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=172;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=172;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=172;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=172;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=172;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=172;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=172;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=172;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=172;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=172;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=172;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=172;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=172;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=172;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=172;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=172;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=172;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=172;
					break;
				}
				else if (yytext[i] == '{')
				{
					state=172;
					break;
				}
				else if (yytext[i] == '}')
				{
					state=172;
					break;
				}
				else if (yytext[i] == '[')
				{
					state=172;
					break;
				}
				else if (yytext[i] == ']')
				{
					state=172;
					break;
				}
				else if (yytext[i] == '\"')
				{
					state=172;
					break;
				}
				else if (yytext[i] == '#')
				{
					state=172;
					break;
				}
				else if (yytext[i] == '$')
				{
					state=172;
					break;
				}
				else if (yytext[i] == '\'')
				{
					state=172;
					break;
				}
				else if (yytext[i] == '@')
				{
					state=172;
					break;
				}
				else if (yytext[i] == '\\')
				{
					state=172;
					break;
				}
				else if (yytext[i] == '`')
				{
					state=172;
					break;
				}
				else if (yytext[i] == '')
				{
					state=172;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 120:
			{
				if (yytext[i] == '/')
				{
					state=173;
					break;
				}
				else if (yytext[i] == 'a')
				{
					state=173;
					break;
				}
				else if (yytext[i] == '_')
				{
					state=173;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=173;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=173;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=173;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=173;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=173;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=173;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=173;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=173;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=173;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=173;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=173;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=173;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=173;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=173;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=173;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=173;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=173;
					break;
				}
				else if (yytext[i] == '.')
				{
					state=173;
					break;
				}
				else if (yytext[i] == '>')
				{
					state=173;
					break;
				}
				else if (yytext[i] == '<')
				{
					state=173;
					break;
				}
				else if (yytext[i] == '+')
				{
					state=173;
					break;
				}
				else if (yytext[i] == '-')
				{
					state=173;
					break;
				}
				else if (yytext[i] == '*')
				{
					state=173;
					break;
				}
				else if (yytext[i] == '%')
				{
					state=173;
					break;
				}
				else if (yytext[i] == '&')
				{
					state=173;
					break;
				}
				else if (yytext[i] == '^')
				{
					state=173;
					break;
				}
				else if (yytext[i] == '|')
				{
					state=173;
					break;
				}
				else if (yytext[i] == '=')
				{
					state=173;
					break;
				}
				else if (yytext[i] == '!')
				{
					state=173;
					break;
				}
				else if (yytext[i] == ';')
				{
					state=173;
					break;
				}
				else if (yytext[i] == ',')
				{
					state=173;
					break;
				}
				else if (yytext[i] == ':')
				{
					state=173;
					break;
				}
				else if (yytext[i] == '(')
				{
					state=173;
					break;
				}
				else if (yytext[i] == ')')
				{
					state=173;
					break;
				}
				else if (yytext[i] == '~')
				{
					state=173;
					break;
				}
				else if (yytext[i] == '\?')
				{
					state=173;
					break;
				}
				else if (yytext[i] == ' ')
				{
					state=173;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=173;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=173;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=173;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=173;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=173;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=173;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=173;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=173;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=173;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=173;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=173;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=173;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=173;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=173;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=173;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=173;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=173;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=173;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=173;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=173;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=173;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=173;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=173;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=173;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=173;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=173;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=173;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=173;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=173;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=173;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=173;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=173;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=173;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=173;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=173;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=173;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=173;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=173;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=173;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=173;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=173;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=173;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=173;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=173;
					break;
				}
				else if (yytext[i] == '{')
				{
					state=173;
					break;
				}
				else if (yytext[i] == '}')
				{
					state=173;
					break;
				}
				else if (yytext[i] == '[')
				{
					state=173;
					break;
				}
				else if (yytext[i] == ']')
				{
					state=173;
					break;
				}
				else if (yytext[i] == '\"')
				{
					state=173;
					break;
				}
				else if (yytext[i] == '#')
				{
					state=173;
					break;
				}
				else if (yytext[i] == '$')
				{
					state=173;
					break;
				}
				else if (yytext[i] == '\'')
				{
					state=173;
					break;
				}
				else if (yytext[i] == '@')
				{
					state=173;
					break;
				}
				else if (yytext[i] == '\\')
				{
					state=173;
					break;
				}
				else if (yytext[i] == '`')
				{
					state=173;
					break;
				}
				else if (yytext[i] == '')
				{
					state=173;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 121:
			{
				if(i==N-1)
				{
					 /* consume //-comment */ 
					break;
				}
				if (yytext[i] == '/')
				{
					state=121;
					break;
				}
				else if (yytext[i] == 'a')
				{
					state=121;
					break;
				}
				else if (yytext[i] == '_')
				{
					state=121;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=121;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=121;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=121;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=121;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=121;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=121;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=121;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=121;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=121;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=121;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=121;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=121;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=121;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=121;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=121;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=121;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=121;
					break;
				}
				else if (yytext[i] == '.')
				{
					state=121;
					break;
				}
				else if (yytext[i] == '>')
				{
					state=121;
					break;
				}
				else if (yytext[i] == '<')
				{
					state=121;
					break;
				}
				else if (yytext[i] == '+')
				{
					state=121;
					break;
				}
				else if (yytext[i] == '-')
				{
					state=121;
					break;
				}
				else if (yytext[i] == '*')
				{
					state=121;
					break;
				}
				else if (yytext[i] == '%')
				{
					state=121;
					break;
				}
				else if (yytext[i] == '&')
				{
					state=121;
					break;
				}
				else if (yytext[i] == '^')
				{
					state=121;
					break;
				}
				else if (yytext[i] == '|')
				{
					state=121;
					break;
				}
				else if (yytext[i] == '=')
				{
					state=121;
					break;
				}
				else if (yytext[i] == '!')
				{
					state=121;
					break;
				}
				else if (yytext[i] == ';')
				{
					state=121;
					break;
				}
				else if (yytext[i] == ',')
				{
					state=121;
					break;
				}
				else if (yytext[i] == ':')
				{
					state=121;
					break;
				}
				else if (yytext[i] == '(')
				{
					state=121;
					break;
				}
				else if (yytext[i] == ')')
				{
					state=121;
					break;
				}
				else if (yytext[i] == '~')
				{
					state=121;
					break;
				}
				else if (yytext[i] == '\?')
				{
					state=121;
					break;
				}
				else if (yytext[i] == ' ')
				{
					state=121;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=121;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=121;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=121;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=121;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=121;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=121;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=121;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=121;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=121;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=121;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=121;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=121;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=121;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=121;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=121;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=121;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=121;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=121;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=121;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=121;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=121;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=121;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=121;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=121;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=121;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=121;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=121;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=121;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=121;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=121;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=121;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=121;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=121;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=121;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=121;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=121;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=121;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=121;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=121;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=121;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=121;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=121;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=121;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=121;
					break;
				}
				else if (yytext[i] == '{')
				{
					state=121;
					break;
				}
				else if (yytext[i] == '}')
				{
					state=121;
					break;
				}
				else if (yytext[i] == '[')
				{
					state=121;
					break;
				}
				else if (yytext[i] == ']')
				{
					state=121;
					break;
				}
				else if (yytext[i] == '\"')
				{
					state=121;
					break;
				}
				else if (yytext[i] == '#')
				{
					state=121;
					break;
				}
				else if (yytext[i] == '$')
				{
					state=121;
					break;
				}
				else if (yytext[i] == '\'')
				{
					state=121;
					break;
				}
				else if (yytext[i] == '@')
				{
					state=121;
					break;
				}
				else if (yytext[i] == '\\')
				{
					state=121;
					break;
				}
				else if (yytext[i] == '`')
				{
					state=121;
					break;
				}
				else if (yytext[i] == '')
				{
					state=121;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 122:
			{
				if(i==N-1)
				{
					 count(); return(check_type()); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=174;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 123:
			{
				if (yytext[i] == 'o')
				{
					state=175;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 124:
			{
				if (yytext[i] == 'm')
				{
					state=176;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 125:
			{
				if (yytext[i] == 'a')
				{
					state=177;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 126:
			{
				if(i==N-1)
				{
					 count(); return(check_type()); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=178;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 127:
			{
				if(i==N-1)
				{
					 count(); return(check_type()); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=179;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 128:
			{
				if(i==N-1)
				{
					 count(); return(check_type()); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=180;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 129:
			{
				if(i==N-1)
				{
					 count(); return(check_type()); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=181;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=182;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 130:
			{
				if(i==N-1)
				{
					 count(); return(check_type()); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=183;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 131:
			{
				if(i==N-1)
				{
					 count(); return(check_type()); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=184;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 132:
			{
				if(i==N-1)
				{
					 count(); return(check_type()); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=185;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 133:
			{
				if(i==N-1)
				{
					 count(); return(check_type()); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=186;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 134:
			{
				if(i==N-1)
				{
					 count(); return(check_type()); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=187;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 135:
			{
				if(i==N-1)
				{
					 count(); return(check_type()); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=188;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 136:
			{
				if(i==N-1)
				{
					 count(); return(FOR); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 137:
			{
				if(i==N-1)
				{
					 count(); return(check_type()); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=189;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 138:
			{
				if(i==N-1)
				{
					 count(); return(check_type()); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=190;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 139:
			{
				if(i==N-1)
				{
					 count(); return(INT); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 140:
			{
				if(i==N-1)
				{
					 count(); return(check_type()); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=191;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 141:
			{
				if(i==N-1)
				{
					 count(); return(check_type()); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=192;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 142:
			{
				if(i==N-1)
				{
					 count(); return(check_type()); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=193;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 143:
			{
				if(i==N-1)
				{
					 count(); return(check_type()); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=194;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 144:
			{
				if(i==N-1)
				{
					 count(); return(check_type()); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=195;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 145:
			{
				if(i==N-1)
				{
					 count(); return(check_type()); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=196;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 146:
			{
				if(i==N-1)
				{
					 count(); return(check_type()); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=197;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 147:
			{
				if(i==N-1)
				{
					 count(); return(check_type()); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=198;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 148:
			{
				if(i==N-1)
				{
					 count(); return(check_type()); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=199;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 149:
			{
				if(i==N-1)
				{
					 count(); return(check_type()); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=200;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 150:
			{
				if(i==N-1)
				{
					 count(); return(check_type()); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=201;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 151:
			{
				if(i==N-1)
				{
					 count(); return(check_type()); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=202;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 152:
			{
				if(i==N-1)
				{
					 count(); return(check_type()); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=203;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 153:
			{
				if(i==N-1)
				{
					 count(); return(check_type()); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=204;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 154:
			{
				if(i==N-1)
				{
					 count(); return(check_type()); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=205;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 155:
			{
				if(i==N-1)
				{
					 count(); return(check_type()); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=206;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 156:
			{
				if(i==N-1)
				{
					 count(); return(CONSTANT); 
					break;
				}
				if (yytext[i] == 'f')
				{
					state=207;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=207;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=156;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=156;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=207;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=207;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=156;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=156;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=156;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=156;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=156;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=156;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=156;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=156;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 157:
			{
				if (yytext[i] == '0')
				{
					state=156;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=156;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=156;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=156;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=156;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=156;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=156;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=156;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=156;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=156;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 158:
			{
				if(i==N-1)
				{
					 count(); return(CONSTANT); 
					break;
				}
				return "ERROR";
			}
			case 159:
			{
				if (yytext[i] == 'L')
				{
					state=87;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 160:
			{
				if (yytext[i] == '0')
				{
					state=208;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=208;
					break;
				}
				else if (yytext[i] == '+')
				{
					state=209;
					break;
				}
				else if (yytext[i] == '-')
				{
					state=209;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=208;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=208;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=208;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=208;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=208;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=208;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=208;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=208;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 161:
			{
				if(i==N-1)
				{
					 count(); return(CONSTANT); 
					break;
				}
				return "ERROR";
			}
			case 162:
			{
				if(i==N-1)
				{
					 count(); return(CONSTANT); 
					break;
				}
				if (yytext[i] == 'e')
				{
					state=210;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=211;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=211;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=162;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=162;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=210;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=211;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=211;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=162;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=162;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=162;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=162;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=162;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=162;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=162;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=162;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 163:
			{
				if(i==N-1)
				{
					 count(); return(CONSTANT); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=163;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=163;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=163;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=163;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=163;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=163;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=212;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=213;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=163;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=163;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=163;
					break;
				}
				else if (yytext[i] == '.')
				{
					state=214;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=163;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=163;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=163;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=163;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=163;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=215;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=216;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=213;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=216;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=163;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=163;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=163;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=163;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=163;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=163;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=163;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=163;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 164:
			{
				if (yytext[i] == 'a')
				{
					state=217;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=217;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=217;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=217;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=217;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=217;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=217;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=217;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=217;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=217;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=217;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=217;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=217;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=217;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=217;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=217;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=217;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=217;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=217;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=217;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=217;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=217;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 165:
			{
				if(i==N-1)
				{
					 count(); return(CONSTANT); 
					break;
				}
				return "ERROR";
			}
			case 166:
			{
				if (yytext[i] == 'L')
				{
					state=93;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 167:
			{
				if (yytext[i] == '0')
				{
					state=218;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=218;
					break;
				}
				else if (yytext[i] == '+')
				{
					state=219;
					break;
				}
				else if (yytext[i] == '-')
				{
					state=219;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=218;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=218;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=218;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=218;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=218;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=218;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=218;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=218;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 168:
			{
				if(i==N-1)
				{
					 count(); return(CONSTANT); 
					break;
				}
				return "ERROR";
			}
			case 169:
			{
				if(i==N-1)
				{
					 count(); return(ELLIPSIS); 
					break;
				}
				return "ERROR";
			}
			case 170:
			{
				if(i==N-1)
				{
					 count(); return(RIGHT_ASSIGN); 
					break;
				}
				return "ERROR";
			}
			case 171:
			{
				if(i==N-1)
				{
					 count(); return(LEFT_ASSIGN); 
					break;
				}
				return "ERROR";
			}
			case 172:
			{
				if (yytext[i] == '\"')
				{
					state=118;
					break;
				}
				else if (yytext[i] == '\\')
				{
					state=119;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 173:
			{
				if (yytext[i] == '\'')
				{
					state=220;
					break;
				}
				else if (yytext[i] == '\\')
				{
					state=221;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 174:
			{
				if(i==N-1)
				{
					 count(); return(AUTO); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 175:
			{
				if (yytext[i] == 'l')
				{
					state=222;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 176:
			{
				if (yytext[i] == 'p')
				{
					state=223;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 177:
			{
				if (yytext[i] == 'g')
				{
					state=224;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 178:
			{
				if(i==N-1)
				{
					 count(); return(check_type()); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=225;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 179:
			{
				if(i==N-1)
				{
					 count(); return(CASE); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 180:
			{
				if(i==N-1)
				{
					 count(); return(CHAR); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 181:
			{
				if(i==N-1)
				{
					 count(); return(check_type()); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=226;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 182:
			{
				if(i==N-1)
				{
					 count(); return(check_type()); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=227;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 183:
			{
				if(i==N-1)
				{
					 count(); return(check_type()); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=228;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 184:
			{
				if(i==N-1)
				{
					 count(); return(check_type()); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=229;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 185:
			{
				if(i==N-1)
				{
					 count(); return(ELSE); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 186:
			{
				if(i==N-1)
				{
					 count(); return(ENUM); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 187:
			{
				if(i==N-1)
				{
					 count(); return(check_type()); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=230;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 188:
			{
				if(i==N-1)
				{
					 count(); return(check_type()); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=231;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 189:
			{
				if(i==N-1)
				{
					 count(); return(GOTO); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 190:
			{
				if(i==N-1)
				{
					 count(); return(check_type()); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=232;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 191:
			{
				if(i==N-1)
				{
					 count(); return(LONG); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 192:
			{
				if(i==N-1)
				{
					 count(); return(check_type()); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=233;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 193:
			{
				if(i==N-1)
				{
					 count(); return(check_type()); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=234;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 194:
			{
				if(i==N-1)
				{
					 count(); return(check_type()); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=235;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 195:
			{
				if(i==N-1)
				{
					 count(); return(check_type()); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=236;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 196:
			{
				if(i==N-1)
				{
					 count(); return(check_type()); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=237;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 197:
			{
				if(i==N-1)
				{
					 count(); return(check_type()); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=238;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 198:
			{
				if(i==N-1)
				{
					 count(); return(check_type()); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=239;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 199:
			{
				if(i==N-1)
				{
					 count(); return(check_type()); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=240;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 200:
			{
				if(i==N-1)
				{
					 count(); return(check_type()); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=241;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 201:
			{
				if(i==N-1)
				{
					 count(); return(check_type()); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=242;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 202:
			{
				if(i==N-1)
				{
					 count(); return(check_type()); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=243;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 203:
			{
				if(i==N-1)
				{
					 count(); return(check_type()); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=244;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 204:
			{
				if(i==N-1)
				{
					 count(); return(VOID); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 205:
			{
				if(i==N-1)
				{
					 count(); return(check_type()); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=245;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 206:
			{
				if(i==N-1)
				{
					 count(); return(check_type()); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=246;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 207:
			{
				if(i==N-1)
				{
					 count(); return(CONSTANT); 
					break;
				}
				return "ERROR";
			}
			case 208:
			{
				if(i==N-1)
				{
					 count(); return(CONSTANT); 
					break;
				}
				if (yytext[i] == 'f')
				{
					state=161;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=161;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=208;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=208;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=161;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=161;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=208;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=208;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=208;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=208;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=208;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=208;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=208;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=208;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 209:
			{
				if (yytext[i] == '0')
				{
					state=208;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=208;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=208;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=208;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=208;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=208;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=208;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=208;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=208;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=208;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 210:
			{
				if (yytext[i] == '0')
				{
					state=247;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=247;
					break;
				}
				else if (yytext[i] == '+')
				{
					state=248;
					break;
				}
				else if (yytext[i] == '-')
				{
					state=248;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=247;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=247;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=247;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=247;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=247;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=247;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=247;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=247;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 211:
			{
				if(i==N-1)
				{
					 count(); return(CONSTANT); 
					break;
				}
				return "ERROR";
			}
			case 212:
			{
				if(i==N-1)
				{
					 count(); return(CONSTANT); 
					break;
				}
				if (yytext[i] == 'l')
				{
					state=215;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=249;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=250;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=249;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 213:
			{
				if(i==N-1)
				{
					 count(); return(CONSTANT); 
					break;
				}
				if (yytext[i] == 'l')
				{
					state=212;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=215;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 214:
			{
				if(i==N-1)
				{
					 count(); return(CONSTANT); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=251;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=251;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=251;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=251;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=251;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=251;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=252;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=251;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=251;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=251;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=251;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=251;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=251;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=251;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=251;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=252;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=253;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=253;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=251;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=251;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=251;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=251;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=251;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=251;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=251;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=251;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 215:
			{
				if(i==N-1)
				{
					 count(); return(CONSTANT); 
					break;
				}
				if (yytext[i] == 'u')
				{
					state=249;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=249;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 216:
			{
				if (yytext[i] == '0')
				{
					state=254;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=254;
					break;
				}
				else if (yytext[i] == '+')
				{
					state=255;
					break;
				}
				else if (yytext[i] == '-')
				{
					state=255;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=254;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=254;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=254;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=254;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=254;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=254;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=254;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=254;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 217:
			{
				if(i==N-1)
				{
					 count(); return(CONSTANT); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=217;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=217;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=217;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=217;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=217;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=217;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=256;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=217;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=217;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=217;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=217;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=217;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=217;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=217;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=217;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=256;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=257;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=257;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=217;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=217;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=217;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=217;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=217;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=217;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=217;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=217;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 218:
			{
				if(i==N-1)
				{
					 count(); return(CONSTANT); 
					break;
				}
				if (yytext[i] == 'f')
				{
					state=168;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=168;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=218;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=218;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=168;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=168;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=218;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=218;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=218;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=218;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=218;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=218;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=218;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=218;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 219:
			{
				if (yytext[i] == '0')
				{
					state=218;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=218;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=218;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=218;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=218;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=218;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=218;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=218;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=218;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=218;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 220:
			{
				if(i==N-1)
				{
					 count(); return(CONSTANT); 
					break;
				}
				return "ERROR";
			}
			case 221:
			{
				if (yytext[i] == '/')
				{
					state=173;
					break;
				}
				else if (yytext[i] == 'a')
				{
					state=173;
					break;
				}
				else if (yytext[i] == '_')
				{
					state=173;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=173;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=173;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=173;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=173;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=173;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=173;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=173;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=173;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=173;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=173;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=173;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=173;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=173;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=173;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=173;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=173;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=173;
					break;
				}
				else if (yytext[i] == '.')
				{
					state=173;
					break;
				}
				else if (yytext[i] == '>')
				{
					state=173;
					break;
				}
				else if (yytext[i] == '<')
				{
					state=173;
					break;
				}
				else if (yytext[i] == '+')
				{
					state=173;
					break;
				}
				else if (yytext[i] == '-')
				{
					state=173;
					break;
				}
				else if (yytext[i] == '*')
				{
					state=173;
					break;
				}
				else if (yytext[i] == '%')
				{
					state=173;
					break;
				}
				else if (yytext[i] == '&')
				{
					state=173;
					break;
				}
				else if (yytext[i] == '^')
				{
					state=173;
					break;
				}
				else if (yytext[i] == '|')
				{
					state=173;
					break;
				}
				else if (yytext[i] == '=')
				{
					state=173;
					break;
				}
				else if (yytext[i] == '!')
				{
					state=173;
					break;
				}
				else if (yytext[i] == ';')
				{
					state=173;
					break;
				}
				else if (yytext[i] == ',')
				{
					state=173;
					break;
				}
				else if (yytext[i] == ':')
				{
					state=173;
					break;
				}
				else if (yytext[i] == '(')
				{
					state=173;
					break;
				}
				else if (yytext[i] == ')')
				{
					state=173;
					break;
				}
				else if (yytext[i] == '~')
				{
					state=173;
					break;
				}
				else if (yytext[i] == '\?')
				{
					state=173;
					break;
				}
				else if (yytext[i] == ' ')
				{
					state=173;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=173;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=173;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=173;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=173;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=173;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=173;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=173;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=173;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=173;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=173;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=173;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=173;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=173;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=173;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=173;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=173;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=173;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=173;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=173;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=173;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=173;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=173;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=173;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=173;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=173;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=173;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=173;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=173;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=173;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=173;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=173;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=173;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=173;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=173;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=173;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=173;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=173;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=173;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=173;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=173;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=173;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=173;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=173;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=173;
					break;
				}
				else if (yytext[i] == '{')
				{
					state=173;
					break;
				}
				else if (yytext[i] == '}')
				{
					state=173;
					break;
				}
				else if (yytext[i] == '[')
				{
					state=173;
					break;
				}
				else if (yytext[i] == ']')
				{
					state=173;
					break;
				}
				else if (yytext[i] == '\"')
				{
					state=173;
					break;
				}
				else if (yytext[i] == '#')
				{
					state=173;
					break;
				}
				else if (yytext[i] == '$')
				{
					state=173;
					break;
				}
				else if (yytext[i] == '\'')
				{
					state=173;
					break;
				}
				else if (yytext[i] == '@')
				{
					state=173;
					break;
				}
				else if (yytext[i] == '\\')
				{
					state=173;
					break;
				}
				else if (yytext[i] == '`')
				{
					state=173;
					break;
				}
				else if (yytext[i] == '')
				{
					state=173;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 222:
			{
				if(i==N-1)
				{
					 count(); return(BOOL); 
					break;
				}
				return "ERROR";
			}
			case 223:
			{
				if (yytext[i] == 'l')
				{
					state=258;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 224:
			{
				if (yytext[i] == 'i')
				{
					state=259;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 225:
			{
				if(i==N-1)
				{
					 count(); return(BREAK); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 226:
			{
				if(i==N-1)
				{
					 count(); return(CONST); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 227:
			{
				if(i==N-1)
				{
					 count(); return(check_type()); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=260;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 228:
			{
				if(i==N-1)
				{
					 count(); return(check_type()); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=261;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 229:
			{
				if(i==N-1)
				{
					 count(); return(check_type()); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=262;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 230:
			{
				if(i==N-1)
				{
					 count(); return(check_type()); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=263;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 231:
			{
				if(i==N-1)
				{
					 count(); return(FLOAT); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 232:
			{
				if(i==N-1)
				{
					 count(); return(check_type()); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=264;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 233:
			{
				if(i==N-1)
				{
					 count(); return(check_type()); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=265;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 234:
			{
				if(i==N-1)
				{
					 count(); return(check_type()); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=266;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 235:
			{
				if(i==N-1)
				{
					 count(); return(check_type()); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=267;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 236:
			{
				if(i==N-1)
				{
					 count(); return(check_type()); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=268;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 237:
			{
				if(i==N-1)
				{
					 count(); return(check_type()); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=269;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 238:
			{
				if(i==N-1)
				{
					 count(); return(check_type()); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=270;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 239:
			{
				if(i==N-1)
				{
					 count(); return(check_type()); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=271;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 240:
			{
				if(i==N-1)
				{
					 count(); return(check_type()); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=272;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 241:
			{
				if(i==N-1)
				{
					 count(); return(SHORT); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 242:
			{
				if(i==N-1)
				{
					 count(); return(check_type()); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=273;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 243:
			{
				if(i==N-1)
				{
					 count(); return(UNION); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 244:
			{
				if(i==N-1)
				{
					 count(); return(check_type()); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=274;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 245:
			{
				if(i==N-1)
				{
					 count(); return(check_type()); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=275;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 246:
			{
				if(i==N-1)
				{
					 count(); return(WHILE); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 247:
			{
				if(i==N-1)
				{
					 count(); return(CONSTANT); 
					break;
				}
				if (yytext[i] == 'f')
				{
					state=211;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=211;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=247;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=247;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=211;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=211;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=247;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=247;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=247;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=247;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=247;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=247;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=247;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=247;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 248:
			{
				if (yytext[i] == '0')
				{
					state=247;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=247;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=247;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=247;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=247;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=247;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=247;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=247;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=247;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=247;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 249:
			{
				if(i==N-1)
				{
					 count(); return(CONSTANT); 
					break;
				}
				return "ERROR";
			}
			case 250:
			{
				if (yytext[i] == 'L')
				{
					state=215;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 251:
			{
				if(i==N-1)
				{
					 count(); return(CONSTANT); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=251;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=251;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=251;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=251;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=251;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=251;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=276;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=251;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=251;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=251;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=251;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=251;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=251;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=251;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=251;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=276;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=277;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=277;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=251;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=251;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=251;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=251;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=251;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=251;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=251;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=251;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 252:
			{
				if(i==N-1)
				{
					 count(); return(CONSTANT); 
					break;
				}
				return "ERROR";
			}
			case 253:
			{
				if (yytext[i] == '0')
				{
					state=278;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=278;
					break;
				}
				else if (yytext[i] == '+')
				{
					state=279;
					break;
				}
				else if (yytext[i] == '-')
				{
					state=279;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=278;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=278;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=278;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=278;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=278;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=278;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=278;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=278;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 254:
			{
				if(i==N-1)
				{
					 count(); return(CONSTANT); 
					break;
				}
				if (yytext[i] == 'f')
				{
					state=280;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=280;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=254;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=254;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=280;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=280;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=254;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=254;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=254;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=254;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=254;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=254;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=254;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=254;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 255:
			{
				if (yytext[i] == '0')
				{
					state=254;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=254;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=254;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=254;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=254;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=254;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=254;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=254;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=254;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=254;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 256:
			{
				if(i==N-1)
				{
					 count(); return(CONSTANT); 
					break;
				}
				return "ERROR";
			}
			case 257:
			{
				if (yytext[i] == '0')
				{
					state=281;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=281;
					break;
				}
				else if (yytext[i] == '+')
				{
					state=282;
					break;
				}
				else if (yytext[i] == '-')
				{
					state=282;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=281;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=281;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=281;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=281;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=281;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=281;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=281;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=281;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 258:
			{
				if (yytext[i] == 'e')
				{
					state=283;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 259:
			{
				if (yytext[i] == 'n')
				{
					state=284;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 260:
			{
				if(i==N-1)
				{
					 count(); return(check_type()); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=285;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 261:
			{
				if(i==N-1)
				{
					 count(); return(check_type()); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=286;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 262:
			{
				if(i==N-1)
				{
					 count(); return(DOUBLE); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 263:
			{
				if(i==N-1)
				{
					 count(); return(EXTERN); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 264:
			{
				if(i==N-1)
				{
					 count(); return(INLINE); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 265:
			{
				if(i==N-1)
				{
					 count(); return(check_type()); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=287;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 266:
			{
				if(i==N-1)
				{
					 count(); return(check_type()); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=288;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 267:
			{
				if(i==N-1)
				{
					 count(); return(RETURN); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 268:
			{
				if(i==N-1)
				{
					 count(); return(SIGNED); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 269:
			{
				if(i==N-1)
				{
					 count(); return(SIZEOF); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 270:
			{
				if(i==N-1)
				{
					 count(); return(STATIC); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 271:
			{
				if(i==N-1)
				{
					 count(); return(STRUCT); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 272:
			{
				if(i==N-1)
				{
					 count(); return(SWITCH); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 273:
			{
				if(i==N-1)
				{
					 count(); return(check_type()); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=289;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 274:
			{
				if(i==N-1)
				{
					 count(); return(check_type()); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=290;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 275:
			{
				if(i==N-1)
				{
					 count(); return(check_type()); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=291;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 276:
			{
				if(i==N-1)
				{
					 count(); return(CONSTANT); 
					break;
				}
				return "ERROR";
			}
			case 277:
			{
				if (yytext[i] == '0')
				{
					state=292;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=292;
					break;
				}
				else if (yytext[i] == '+')
				{
					state=293;
					break;
				}
				else if (yytext[i] == '-')
				{
					state=293;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=292;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=292;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=292;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=292;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=292;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=292;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=292;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=292;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 278:
			{
				if(i==N-1)
				{
					 count(); return(CONSTANT); 
					break;
				}
				if (yytext[i] == 'f')
				{
					state=252;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=252;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=278;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=278;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=252;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=252;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=278;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=278;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=278;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=278;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=278;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=278;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=278;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=278;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 279:
			{
				if (yytext[i] == '0')
				{
					state=278;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=278;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=278;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=278;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=278;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=278;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=278;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=278;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=278;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=278;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 280:
			{
				if(i==N-1)
				{
					 count(); return(CONSTANT); 
					break;
				}
				return "ERROR";
			}
			case 281:
			{
				if(i==N-1)
				{
					 count(); return(CONSTANT); 
					break;
				}
				if (yytext[i] == 'f')
				{
					state=256;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=256;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=281;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=281;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=256;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=256;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=281;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=281;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=281;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=281;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=281;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=281;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=281;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=281;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 282:
			{
				if (yytext[i] == '0')
				{
					state=281;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=281;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=281;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=281;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=281;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=281;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=281;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=281;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=281;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=281;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 283:
			{
				if (yytext[i] == 'x')
				{
					state=294;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 284:
			{
				if (yytext[i] == 'a')
				{
					state=295;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 285:
			{
				if(i==N-1)
				{
					 count(); return(check_type()); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=296;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 286:
			{
				if(i==N-1)
				{
					 count(); return(DEFAULT); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 287:
			{
				if(i==N-1)
				{
					 count(); return(check_type()); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=297;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 288:
			{
				if(i==N-1)
				{
					 count(); return(check_type()); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=298;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 289:
			{
				if(i==N-1)
				{
					 count(); return(TYPEDEF); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 290:
			{
				if(i==N-1)
				{
					 count(); return(check_type()); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=299;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 291:
			{
				if(i==N-1)
				{
					 count(); return(check_type()); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=300;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 292:
			{
				if(i==N-1)
				{
					 count(); return(CONSTANT); 
					break;
				}
				if (yytext[i] == 'f')
				{
					state=276;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=276;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=292;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=292;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=276;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=276;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=292;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=292;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=292;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=292;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=292;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=292;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=292;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=292;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 293:
			{
				if (yytext[i] == '0')
				{
					state=292;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=292;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=292;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=292;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=292;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=292;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=292;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=292;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=292;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=292;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 294:
			{
				if(i==N-1)
				{
					 count(); return(COMPLEX); 
					break;
				}
				return "ERROR";
			}
			case 295:
			{
				if (yytext[i] == 'r')
				{
					state=301;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 296:
			{
				if(i==N-1)
				{
					 count(); return(CONTINUE); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 297:
			{
				if(i==N-1)
				{
					 count(); return(REGISTER); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 298:
			{
				if(i==N-1)
				{
					 count(); return(RESTRICT); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 299:
			{
				if(i==N-1)
				{
					 count(); return(UNSIGNED); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 300:
			{
				if(i==N-1)
				{
					 count(); return(VOLATILE); 
					break;
				}
				if (yytext[i] == 'a')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'b')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'c')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'd')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'e')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'f')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'g')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'i')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'l')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'r')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 's')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 't')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'u')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'v')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'w')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'A')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '0')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '1')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'B')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'C')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'D')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'E')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'F')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'G')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'H')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'I')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'J')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'K')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'L')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'M')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'N')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'O')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'P')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'R')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'S')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'T')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'U')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'V')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'W')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'X')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'Z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'h')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'j')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'k')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'm')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'n')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'o')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'p')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'q')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'x')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'y')
				{
					state=51;
					break;
				}
				else if (yytext[i] == 'z')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '2')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '3')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '4')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '5')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '6')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '7')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '8')
				{
					state=51;
					break;
				}
				else if (yytext[i] == '9')
				{
					state=51;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 301:
			{
				if (yytext[i] == 'y')
				{
					state=302;
					break;
				}
				else
				{
					return "ERROR";
				}
				break;
			}
			case 302:
			{
				if(i==N-1)
				{
					 count(); return(IMAGINARY); 
					break;
				}
				return "ERROR";
			}
		}
	}
}


int yywrap(void)
{
	return 1;
}


void comment(void)
{
	char c, prev = 0;
  
	while ((c = input()) != 0)      /* (EOF maps to 0) */
	{
		if (c == '/' && prev == '*')
			return;
		prev = c;
	}
	error("unterminated comment");
}


int column = 0;

void count(void)
{
	int i;

	for (i = 0; yytext[i] != '\0'; i++)
		if (yytext[i] == '\n')
			column = 0;
		else if (yytext[i] == '\t')
			column += 8 - (column % 8);
		else
			column++;

	ECHO;
}


int check_type(void)
{
/*
* pseudo code --- this is what it should check
*
*	if (yytext == type_name)
*		return TYPE_NAME;
*
*	return IDENTIFIER;
*/

/*
*	it actually will only return IDENTIFIER
*/

	return IDENTIFIER;
}