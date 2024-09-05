#include <unistd.h>

void unionw(char *str, char *str2) {
    char *ps1 = str;
    char *ps2 = str2;

    while (*ps1) 
    {
        char *ips1 = str;
        int f = 0;
        
        while (ips1 < ps1)
	{
            if (*ips1 == *ps1) 
	    {
                f = 1;
                break;  // Exit the loop if a match is found
            }
            ips1++;
        }

        if (f != 1)
		ps1++;
    }
    
    while (*ps2)
    {
        char *ips2 = str2;
        int f = 0;

        while (ips2 < ps2)
	{
            if (*ips2 == *ps2) 
	    {
                f = 1;
                break;  // Exit the loop if a match is found
            }
            ips2++;
        }
        
        if (f != 1)
		ps2++;
    }
    while (*ps1 && *ps2)
    {
	    int f = 0;
	    while(ps1 < ps2)
	    {
		    if (ps1 == ps2)
		    {

		    	f = 1;
		    	break;
		    }
		    ps1++;
		    ps2++;
	    }
	    if (f != 1)
	    {
		    write(1,ps1,1);
		    write(1,ps2,1);
	    }
	    ps1++;
	    ps2++;
    }
    write(1, "\n", 1);
}

int main(int argc, char **argv) {
    if (argc == 3) {
        unionw(argv[1], argv[2]);
    }
    return 0;
}
