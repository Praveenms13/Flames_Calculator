#include <stdio.h>
#include <string.h>
int i = 0, j = 0;
void lowerCheck(char name1[], char name2[]){
	for (i = 0; name1[i] != '\0'; i++)
    {
        if (name1[i] >= 'a' && name1[i] <= 'z')
        {
            name1[i] = name1[i] - 32;
        }
    }

    for (i = 0; name2[i] != '\0'; i++)
    {
        if (name2[i] >= 'a' && name2[i] <= 'z')
        {
            name2[i] = name2[i] - 32;
        }
    }
    validate_Flames(name1, name2);
}
void validate_Flames(char name1[], char name2[]){
	printf("Your Name is %s and Your Crush Name is %s", name1, name2);
	int name1_len = strlen(name1);
	int name2_len = strlen(name2);
	int count = 0; 
    for(i=0;i<name1_len;i++){    //small and big
		for(j=0;j<name2_len;j++){
			if(name2[j] == name1[i]){
			    count++;
			    break;
			}
		}
    } 
    int total_letters_flames = (name1_len+name2_len) - count;
    char flame[6] = "FLAMES";
    char F = "Friends";
    char L = "Lovers";
    char A = "Affectionate";
    char M = "Marriage";
    char E = "Enemy";
    char S = "Siblings/Soulmate";
    printf("\nTotal count is %d and name 1 : %d and name 2 : %d and the total flame count is %d", count, name1_len, name2_len, total_letters_flames); //Reference Check
    //Yet to complete flames traversing Part
    //start from here 
    for(i=0;i<total_letters_flames;i++){
	    for(j=0;j<total_letters_flames-1;j++){
	    	printf("%c", flame[total_letters_flames]);
	    }	
	}
	//between here to update 
	//end here
	printf("\nProgram Successfully Executed....");
}
int main()
{
	int n = 100;
	char name1[n], name2[n];
	printf("Enter Your Name : ");scanf("%99[^\n]%*c",name1);
	printf("Enter Crush Your Name : ");scanf("%99[^\n]%*c",name2);
	lowerCheck(name1, name2);
    return 0;
}
