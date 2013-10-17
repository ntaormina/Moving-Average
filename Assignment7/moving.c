/*
 * moving.c
 *
 *  Created on: Oct 16, 2013
 *      Author: C15Nikolas.Taormina
 */
#include "moving.h"

int getAverage(int array[], unsigned int arrayLength) {
	int i , sum = 0;

	for (i = 0; i < arrayLength; i++){
		sum += array[i];
	}

	return sum / arrayLength;

	//int avgArray[10];
	//for(i = 0; i < arrayLength; i++){
		//for(j = 0; j < N_AVG_SAMPLES; j++){
		//	avgArray[i] += array[i +j];
		//}
		//avgArray[i] = avgArray[i]  / N_AVG_SAMPLES;
	//}
}

void addSample(int sample, int array[], unsigned int arrayLength) {
	int i;

	for(i = 0; i < arrayLength; i++){
		array[i] = array[i + 1];
	}

	array[arrayLength - 1] = sample;
}

int max(int array[], unsigned int arrayLength) {
	int j;
	int maxValue = array[0];
	while( j < arrayLength){
		if(array[j] > maxValue){
			maxValue = array[j];
		}
		j++;
	}
	return maxValue;
}

int min(int array[], unsigned int arrayLength) {
	int k;
		int minValue = array[0];
		while( k < arrayLength){
			if(array[k] < minValue){
				minValue = array[k];
			}
			k++;
		}
		return minValue;
}

unsigned int range(int array[], unsigned int arrayLength) {
	return max(array, arrayLength) - min(array, arrayLength);
}
