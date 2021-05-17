#include <stdio.h>
#include <stdlib.h>

int main ()
{
    FILE * fptr;
    int i, j;
    char str[100], filename[50], str1, answer;
    
    system("clear"); // CLEAR CONSOLE
    
    do // RERUN (do-while)
    {
        printf("\n[Write a program that append multiple lines in a text file]");
	    printf("\n\nInput the file location: ");
	
	    scanf("%s",filename);		
        fptr = fopen(filename, "a");
    
        printf("\nInput the number of lines to be appended: ");
        scanf("%d", &j);
    
        printf("\nThe lines are: \n");  
    
        for(i = 0; i < j + 1; i++)
        {
            fgets(str, sizeof str, stdin);
            fputs(str, fptr);
        }
        fclose (fptr);

        // READ FILE
    	fptr = fopen (filename, "r");
	    printf("\nInside of the '%s' is: ",filename);
    	str1 = fgetc(fptr);
	    while (str1 != EOF)
	    {
		   	printf ("%c", str1);
		   	str1 = fgetc(fptr);
		}
		
        fclose (fptr);
        // EOF

        printf("\nPress Y to continue. Press any key to exit: ");
        scanf("%c", &answer);
    }
    
    while(answer == 'y' || answer == 'Y');

    return 0;
}