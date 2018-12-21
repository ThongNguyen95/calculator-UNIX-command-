#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char *argv[]) {
	//Check for the number of command-arguments and if the last two arguments are digits
	if ((argc == 4) && digitCheck(argv[2]) == 1 && digitCheck(argv[3]) == 1) {
		if (strcmp(argv[1], "+") == 0) {
			printf("%.6f\n", atof(argv[2]) + atof(argv[3]));
		}
		else if (strcmp(argv[1],"-") == 0) {
			printf("%.6f\n", atof(argv[2]) - atof(argv[3]));
		}
		else if (strcmp(argv[1],"*") == 0) {
			printf("%.6f\n", atof(argv[2]) * atof(argv[3]));
		} 
		else if (strcmp(argv[1],"/") == 0) {
			printf("%.6f\n", atof(argv[2]) / atof(argv[3]));
		} 
		else {
			printf("SYNOPSIS:\n\t"
			"./calc OPERATOR  OPERAND1  OPERAND2\n");
		} 
	} else {
		printf("SYNOPSIS:\n\t"
		"./calc OPERATOR OPERAND1 OPERAND2\n");
	}
	return 0;
}

//Check if the last two command-arguments are digits
int digitCheck(const char * string) {
	int i = 0;
	int digit_check = 1;
        for (i = 0; i < strlen(string); i++) {
                if(!isdigit(string[i])) {
                        digit_check = 0;
                        i = strlen(string);
                }
        }
        return digit_check;
}
