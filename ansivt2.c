#include <string.h>
#include "ansivt2.h"

	char ansivt;
	
	char FG_BLACK[8];
	char FG_RED[8];
	char FG_GREEN[8];
	char FG_YELLOW[8];
	char FG_BLUE[8];
	char FG_MAGENTA[8];
	char FG_CYAN[8];
	char FG_WHITE[8];

	char FG_BRIGHT_BLACK[8];
	char FG_BRIGHT_RED[8];
	char FG_BRIGHT_GREEN[8];
	char FG_BRIGHT_YELLOW[8];
	char FG_BRIGHT_BLUE[8];
	char FG_BRIGHT_MAGENTA[8];
	char FG_BRIGHT_CYAN[8];
	char FG_BRIGHT_WHITE[8];

	char BG_BLACK[8];
	char BG_RED[8];
	char BG_GREEN[8];
	char BG_YELLOW[8];
	char BG_BLUE[8];
	char BG_MAGENTA[8];
	char BG_CYAN[8];
	char BG_WHITE[8];

	char BG_BRIGHT_BLACK[8];
	char BG_BRIGHT_RED[8];
	char BG_BRIGHT_GREEN[8];
	char BG_BRIGHT_YELLOW[8];
	char BG_BRIGHT_BLUE[8];
	char BG_BRIGHT_MAGENTA[8];
	char BG_BRIGHT_CYAN[8];
	char BG_BRIGHT_WHITE[8];

	char NORMAL[8];

char resetAnsiVtCodes(char f)	{
	
	if(f == 0)	{

		strcpy((char *)FG_BLACK, "");
		strcpy((char *)FG_RED, "");
		strcpy((char *)FG_GREEN, "");
		strcpy((char *)FG_YELLOW, "");
		strcpy((char *)FG_BLUE, "");
		strcpy((char *)FG_MAGENTA, "");
		strcpy((char *)FG_CYAN, "");
		strcpy((char *)FG_WHITE, "");

		strcpy((char *)FG_BRIGHT_BLACK, "");
		strcpy((char *)FG_BRIGHT_RED, "");
		strcpy((char *)FG_BRIGHT_GREEN, "");
		strcpy((char *)FG_BRIGHT_YELLOW, "");
		strcpy((char *)FG_BRIGHT_BLUE, "");
		strcpy((char *)FG_BRIGHT_MAGENTA, "");
		strcpy((char *)FG_BRIGHT_CYAN, "");
		strcpy((char *)FG_BRIGHT_WHITE, "");

		strcpy((char *)BG_BLACK, "");
		strcpy((char *)BG_RED, "");
		strcpy((char *)BG_GREEN, "");
		strcpy((char *)BG_YELLOW, "");
		strcpy((char *)BG_BLUE, "");
		strcpy((char *)BG_MAGENTA, "");
		strcpy((char *)BG_CYAN, "");
		strcpy((char *)BG_WHITE, "");

		strcpy((char *)BG_BRIGHT_BLACK, "");
		strcpy((char *)BG_BRIGHT_RED, "");
		strcpy((char *)BG_BRIGHT_GREEN, "");
		strcpy((char *)BG_BRIGHT_YELLOW, "");
		strcpy((char *)BG_BRIGHT_BLUE, "");
		strcpy((char *)BG_BRIGHT_MAGENTA, "");
		strcpy((char *)BG_BRIGHT_CYAN, "");
		strcpy((char *)BG_BRIGHT_WHITE, "");

		strcpy((char *)NORMAL, "");
	}
	
	else if(f == 1)	{
		
		strcpy((char *)FG_BLACK, "[30m");
		strcpy((char *)FG_RED, "[31m");
		strcpy((char *)FG_GREEN, "[32m");
		strcpy((char *)FG_YELLOW, "[33m");
		strcpy((char *)FG_BLUE, "[34m");
		strcpy((char *)FG_MAGENTA, "[35m");
		strcpy((char *)FG_CYAN, "[36m");
		strcpy((char *)FG_WHITE, "[37m");

		strcpy((char *)FG_BRIGHT_BLACK, "[90m");
		strcpy((char *)FG_BRIGHT_RED, "[91m");
		strcpy((char *)FG_BRIGHT_GREEN, "[92m");
		strcpy((char *)FG_BRIGHT_YELLOW, "[93m");
		strcpy((char *)FG_BRIGHT_BLUE, "[94m");
		strcpy((char *)FG_BRIGHT_MAGENTA, "[95m");
		strcpy((char *)FG_BRIGHT_CYAN, "[96m");
		strcpy((char *)FG_BRIGHT_WHITE, "[97m");

		strcpy((char *)BG_BLACK, "[40m");
		strcpy((char *)BG_RED, "[41m");
		strcpy((char *)BG_GREEN, "[42m");
		strcpy((char *)BG_YELLOW, "[43m");
		strcpy((char *)BG_BLUE, "[44m");
		strcpy((char *)BG_MAGENTA, "[45m");
		strcpy((char *)BG_CYAN, "[46m");
		strcpy((char *)BG_WHITE, "[47m");

		strcpy((char *)BG_BRIGHT_BLACK, "[100m");
		strcpy((char *)BG_BRIGHT_RED, "[101m");
		strcpy((char *)BG_BRIGHT_GREEN, "[102m");
		strcpy((char *)BG_BRIGHT_YELLOW, "[103m");
		strcpy((char *)BG_BRIGHT_BLUE, "[104m");
		strcpy((char *)BG_BRIGHT_MAGENTA, "[105m");
		strcpy((char *)BG_BRIGHT_CYAN, "[106m");
		strcpy((char *)BG_BRIGHT_WHITE, "[107m");

		strcpy((char *)NORMAL, "[0m");
	}
	
	return (ansivt = f);
}

void swap4color( char * fg, char * bg )	{
	
	if( strlen(fg)==0 || !strcmp(fg,"0") )
		goto _bg;
	
	if( !strcmp( fg, "black" ) )	{
		strcpy( fg, "[30m" );
		goto _bg;
	}
	if( !strcmp( fg, "red" ) )	{
		strcpy( fg, "[31m" );
		goto _bg;
	}
	if( !strcmp( fg, "green" ) )	{
		strcpy( fg, "[32m" );
		goto _bg;
	}
	if( !strcmp( fg, "yellow" ) )	{
		strcpy( fg, "[33m" );
		goto _bg;
	}
	if( !strcmp( fg, "blue" ) )	{
		strcpy( fg, "[34m" );
		goto _bg;
	}
	if( !strcmp( fg, "magenta" ) )	{
		strcpy( fg, "[35m" );
		goto _bg;
	}
	if( !strcmp( fg, "cyan" ) )	{
		strcpy( fg, "[36m" );
		goto _bg;
	}
	if( !strcmp( fg, "white" ) )	{
		strcpy( fg, "[37m" );
		goto _bg;
	}
	if( !strcmp( fg, "bright_black" ) )	{
		strcpy( fg, "[90m" );
		goto _bg;
	}
	if( !strcmp( fg, "bright_red" ) )	{
		strcpy( fg, "[91m" );
		goto _bg;
	}
	if( !strcmp( fg, "bright_green" ) )	{
		strcpy( fg, "[92m" );
		goto _bg;
	}
	if( !strcmp( fg, "bright_yellow" ) )	{
		strcpy( fg, "[93m" );
		goto _bg;
	}
	if( !strcmp( fg, "bright_blue" ) )	{
		strcpy( fg, "[94m" );
		goto _bg;
	}
	if( !strcmp( fg, "bright_magenta" ) )	{
		strcpy( fg, "[95m" );
		goto _bg;
	}
	if( !strcmp( fg, "bright_cyan" ) )	{
		strcpy( fg, "[96m" );
		goto _bg;
	}
	if( !strcmp( fg, "bright_white" ) )	{
		strcpy( fg, "[97m" );
		goto _bg;
	}

		return; // non-null invalid entry
	
	_bg:
	
	if( strlen(bg)==0 )	{
	
		return;
	}
	
	if( !strcmp( bg, "black" ) )	{
		strcpy( bg, "[40m" );

	}
	if( !strcmp( bg, "red" ) )	{
		strcpy( bg, "[41m" );
		
	}
	if( !strcmp( bg, "green" ) )	{
		strcpy( bg, "[42m" );
		
	}
	if( !strcmp( bg, "yellow" ) )	{
		strcpy( bg, "[44m" );
		
	}
	if( !strcmp( bg, "blue" ) )	{
		strcpy( bg, "[44m" );
		
	}
	if( !strcmp( bg, "magenta" ) )	{
		strcpy( bg, "[45m" );
		
	}
	if( !strcmp( bg, "cyan" ) )	{
		strcpy( bg, "[46m" );
		
	}
	if( !strcmp( bg, "white" ) )	{
		strcpy( bg, "[47m" );
		
	}
	if( !strcmp( bg, "bright_black" ) )	{
		strcpy( bg, "[100m" );
		
	}
	if( !strcmp( bg, "bright_red" ) )	{
		strcpy( bg, "[101m" );
		
	}
	if( !strcmp( bg, "bright_green" ) )	{
		strcpy( bg, "[102m" );
	
	}
	if( !strcmp( bg, "bright_yellow" ) )	{
		strcpy( bg, "[103m" );
	
	}
	if( !strcmp( bg, "bright_blue" ) )	{
		strcpy( bg, "[104m" );
		
	}
	if( !strcmp( bg, "bright_magenta" ) )	{
		strcpy( bg, "[105m" );
		
	}
	if( !strcmp( bg, "bright_cyan" ) )	{
		strcpy( bg, "[106m" );
		
	}
	if( !strcmp( bg, "bright_white" ) )	{
		strcpy( bg, "[107m" );
		
	}
	
	return;
}

