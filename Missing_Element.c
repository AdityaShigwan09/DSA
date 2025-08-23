//Find the Missing Number

#include<stdio.h>

int main(){
 int a[]={1,2,3,5,7,4};
int n=sizeof(a)/sizeof(a[0]);
int sum_a=0,sum_o=0;
int max=a[0];
for(int i=1;i<n;i++){
if(max<a[i]){
max=a[i];
}
}

for(int i=1;i<=max;i++){
sum_o+=i;
}

for(int i=0 ;i<n;i++){
	sum_a+=a[i];

}


printf("%d",sum_o-sum_a);	
}