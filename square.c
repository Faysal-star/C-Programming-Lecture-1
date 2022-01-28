#include<stdio.h>
#include<math.h>
int main(){
	float a , sqrit ;
	scanf("%f",&a);
	sqrit = sqrt(a);
	
	if(floor(sqrit) == ceil(sqrit)){
		printf("Yes it is square number");
	}
	else if(floor(sqrit) != ceil(sqrit)){
		printf("No it is not a square number");
	}
	
}
