#include<stdio.h>
#include<string.h>
typedef long long int ll;
typedef unsigned char uchar;

char input[1000];
bool oper[300]={false};
bool too_much_parenthesis=false;



ll to_int(ll left, ll right){
	ll sum;
	sum = 0;
	ll i;
	for(i=left;i<right;i++){
		sum *= 0;
		sum += *(input+i)  - '0';
	}
	//printf("sum: %d\n", sum);
	return sum;
}

bool is_digit(char n){
	return (n - '0' >= 0 && '9' - n >= 0);
}
bool is_oper(char n){
	return oper[(uchar)n];
}


int cal(int left, int right){
	ll i;
	int left_part, right_part;
	left_part = 0;
	right_part = 0;
	int parenthesis;
	parenthesis = 0;
	for(i=right - 1;i>=left;i--){
		if(input[i] == ')' ){
			parenthesis++;
			if(parenthesis>1){
				too_much_parenthesis = true;
				//printf("here: %d\n", i);
			}
		}
		if(parenthesis>0){
			if(input[i] == '(' ){
				parenthesis--;
				if(i == left){//parenthesis should be 0 or not valid
					//fwrite(input+left, 1, right - left, stdout);
					//printf("\n");
					return cal(left+1, right-1);
				}
			}
			else{
				continue;
			}
		}
		if(input[i]=='+'){
			left_part = cal(left, i);
			right_part = cal(i + 1, right);
			//fwrite(input+left, 1, right - left, stdout);
			//printf("\n");
			return left_part + right_part;
		}
		if(input[i]=='-'){
			left_part = cal(left, i);
			right_part = cal(i + 1, right);
			//fwrite(input+left, 1, right - left, stdout);
			//printf("\n");
			return left_part - right_part;
		}

	}
	for(i=right - 1;i>=left;i--){
		if(input[i] == ')' ){
			parenthesis++;
			
			if(parenthesis>1){
				too_much_parenthesis = true;
				printf("p: %d %d\n",parenthesis,too_much_parenthesis);
				//printf("here: %d\n", i);
			}
		}
		if(parenthesis>0){
			if(input[i] == '(' ){
				parenthesis--;
				if(i == left){//parenthesis should be 0 or not valid
					//fwrite(input+left, 1, right - left, stdout);
					//printf("\n");
					return cal(left+1, right-1);
				}
			}
			else{
				continue;
			}
		}
		if(input[i]=='*'){
			left_part = cal(left, i);
			right_part = cal(i + 1, right);
			//fwrite(input+left, 1, right - left, stdout);
			//printf("\n");
			return left_part * right_part;
		}
		if(input[i]=='/'){
			left_part = cal(left, i);
			right_part = cal(i + 1, right);
			//fwrite(input+left, 1, right - left, stdout);
			//printf("\n");
			return left_part / right_part;
		}
	}
	return to_int(left, right);
}	
int main(){
	oper[(uchar)'+'] = true;
	oper[(uchar)'-'] = true;
	oper[(uchar)'*'] = true;
	oper[(uchar)'/'] = true;
	oper[(uchar)'('] = true;
	oper[(uchar)')'] = true;
	scanf("%s", input);
	ll i;
	char prev;
	prev=';';
	for(i=0;i<(ll)strlen(input);i++){
		if(prev == ';'&&oper[(uchar)input[i]]){
			prev = input[i];
		}
		else{
			if((input[i]=='*'||input[i]=='/')&&(prev == '*'||prev == '/')){
				printf("Invalid\n");
				return 0;
			}
		}
		if(oper[(uchar)input[i]]){
			prev = input[i];
		}
	}
	int ans;
	ans = cal(0,strlen(input));
	if (too_much_parenthesis){
		printf("Invalid\n");
		return 0;
	}
	printf("%d\n",ans);
	
	return 0;
}