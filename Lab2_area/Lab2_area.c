/*
Lab Work for calculating Volume and Surface Area
Saul Hennessy
Sept 30 2019
*/

#include <stdio.h>
int main()
{
	float H=10,L=11.5,W=2.5,SA,V,S1,S2,S3;
	
	V=H*L*W ;
	printf("Volume=%.2fcm3\n", V);
	
	S1= 2*(H*L);
	S2= 2*(H*W);
	S3= 2*(L*W);
	
	SA= S1+S2+S3;
	
	printf("Surface Area=%.2fcm2", SA);
	
	getchar();
	
	
	return 0;
}