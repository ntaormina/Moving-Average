/*
 * moving.h
 *
 *  Created on: Oct 16, 2013
 *      Author: C15Nikolas.Taormina
 */

#ifndef MOVING_H_
#define MOVING_H_
#define N_AVG_SAMPLES 2

// Moving average functions
int getAverage(int array[], unsigned int arrayLength);

void addSample(int sample, int array[], unsigned int arrayLength);

// Array functions
int max(int array[], unsigned int arrayLength);

int min(int array[], unsigned int arrayLength);

unsigned int range(int array[], unsigned int arrayLength);

#endif /* MOVING_H_ */
