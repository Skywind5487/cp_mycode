#include<stdio.h>
char encrypt(char c);
char decrypt(char c);
void processText(int mode);
int main(){
	int mode;
	printf("Select mode (1: Encrypt, 2: Decrypt): ");
	scanf("%d", &mode);
	getchar();
	processText(mode);
	return 0;
}

char encrypt(char c){
	if ('A'<=c && c<='Z'){
		return (char)((c-'A'+3)%26+'A');
	}
	else if('a'<=c && c<='z'){
		return (char)((c-'a'+3)%26+'a');
	}
	else{
		return c;
	}
}
char decrypt(char c){
	if ('A'<=c && c<='Z'){
		return (char)((c-'A'+26-3)%26+'A');
	}
	else if('a'<=c && c<='z'){
		return (char)((c-'a'+26-3)%26+'a');
	}
	else{
		return c;
	}
}
void processText(int mode){
	printf("Enter text to encrypt: ");
	char (*fp)(char);
	
	switch(mode){
		case 1:{
			fp=encrypt;
			break;
		}
		case 2:{
			fp=decrypt;
			break;
		}
		default:{
			break;
		}
	}
	char inputChar;
	
    // Read until newline and print processed characters immediately
    while ((inputChar = getchar()) != '\n') {
        char processedChar;
        processedChar = fp(inputChar);
        printf("%c", processedChar);
    }
    return;
}