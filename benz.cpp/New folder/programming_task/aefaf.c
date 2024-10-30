#include <stdio.h>
int main(){
	int number[3];
	char letter[3];
	for(int i=0;i<3;++i){
		scanf("%d",&number[i]);
	}
	int max=number[0],min=number[0],mid=number[0];
	for(int j=0;j<3;++j){
		if(max<number[j]) max=number[j];
		else if(min>number[j]) min=number[j];
	}
	scanf(" %s",&letter);
	for(int k=0;k<3;++k){
		if(letter[k]=='A') printf("%d ",min);
		else if(letter[k]=='C') printf("%d ",max);
		else printf("%d ",number[0]+number[1]+number[2]-max-min);
	}
}