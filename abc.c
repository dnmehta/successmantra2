#include <stdio.h>
#include<string.h>
int main() {
	int n;
	scanf("%d\n",&n);
	int i,k=0;
	char* s[1001];
	char str[1001];
	for(i=0;i<n;i++){
	    
	    scanf("%s",str);
	    int n=strlen(str);
	    if(str[n-2]=='k' && (str[n-1]=='i' || str[n-1]=='a')){
	        //printf("%d\n",k);
	        *(s+k)=str;
	        k=k+1;
	        //printf("%d\n",k);
	    }
	    printf("%s\n",s[0]);
	}
	//printf("%s\n",s[0]);
	int count=0,j;
	for(i=0;i<k;i++){
	    for(j=i+1;j<k;j++){
	        int m=strlen(s[i]);
	        int n=strlen(s[j]);
	        
	        if(m!=n){
	            continue;
	        }
	        else{
	            printf("%c %c\n",s[i][n-1],s[j][n-1]);
	            if(s[i][n-1]=='i' && s[j][n-1]=='a'){
	               printf("ho");
	                s[i][n-1]=='a';
	                int check=strcmp(s[i],s[j]);
	                if(check==0){
	                    count++;
	                    continue;
	                }
	                else{
	                    s[i][n-1]='i';
	                }
	                
	            }
	             else if((s[i][n-1]=='a' && s[j][n-1]=='i')){
	                s[i][n-1]=='i';
	                int check=strcmp(s[i],s[j]);
	                if(check==0){
	                    count++;
	                }
	                else{
	                    s[i][n-1]='a';
	                }
	                
	            }
	            else{
	                continue;
	            }
	        }
	    }
	}
	printf("%d\n",count);
	return 0;
}
