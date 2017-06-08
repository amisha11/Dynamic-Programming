//Count all possible subsequences that can be generated from a given string. Two subsequences are different if the indices of the string elements used to generate them are different

#include<stdio.h>
#include<string.h>

int subseq(char str[]){
	int dp[100];
	dp[0] = 0;
	int len = strlen(str);
	int i;
	for(i = 1; i <= len; i++){
		dp[i] = (dp[i-1] * 2) + 1;
	}
	return dp[len];
}

int main(){
	char str[100];
	scanf("%s", str);
	int subs = subseq(str);
	printf("%d", subs);
	return 0;
}