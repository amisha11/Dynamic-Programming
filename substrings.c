#include <stdio.h>
#include <string.h>

//total substrings so far
#define TOTAL 0

//substrings added at this step
#define STR_ADDED 1 

int substr(char str[]){
	int len = strlen(str);
	int i, dp[100][2];
	memset(dp, 0, sizeof(dp));
	for(i = 1; i <= len; i++){
		dp[i][STR_ADDED] = dp[i-1][STR_ADDED] + 1;
		dp[i][TOTAL] = dp[i-1][TOTAL] + dp[i][STR_ADDED];
	}
	return dp[len][TOTAL];
}

int main(){
	char str[100];
	scanf("%s", str);
	int subs = substr(str);
	printf("%d", subs);
	return 0;
}