/*

 * main.c
 *
 *  Created on: Jan 28, 2023
 *      Author: mohamed
 */


#include "stdio.h"

void main (){

	float Array [100] , Sum =0 , Average=0 ;
	int Input_Count;
	printf("Enter Number of element to get average of them : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&Input_Count);

	for(int i =0 ; i<Input_Count;i++){
		printf("Enter Element no %d : ",i);
		fflush(stdin);
		fflush(stdout);
		scanf("%f",&Array[i]);
	}
	for(int i =0 ; i<=Input_Count;i++){
			if(i==Input_Count){
				Average = Sum / Input_Count;
				printf("the Average = %f",Average);
			}
			else {
				Sum = Array[i]+Sum;
			}
		}

}

