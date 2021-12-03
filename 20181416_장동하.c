#include <stdio.h>
#include <string.h>

#define MAXLINE 100
void copy(char from[], char to[]);
char line[MAXLINE];
char longest[MAXLINE];
char lower[MAXLINE];

int main(){
	int len, index=1, max=0, low=MAXLINE;
	
	printf("[%d] ", index++);
	fgets(line, MAXLINE, stdin);
	
	while (strlen(line) > 1) {
		len = strlen(line);
		
		if (len > max) {
			max = len;
			copy(line, longest);
		}
		if (len < low && len != 0) {
			low = len;
			copy(line, lower);
		}
		printf("[%d] ", index++);
		fgets(line, MAXLINE, stdin);
	}
	
	
	if (max > 0 && low > 0){
		printf("longest: %s (length : %d)\n", longest, max-1); // minus null
		printf("lower: %s (length : %d)\n", lower, low-1);	// minus null
	}
		
		
	return 0;
}

void copy(char from[], char to[])
{
	int i = 0;
	while ((to[i] = from[i]) != '\0')
		i++;
}
