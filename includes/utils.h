/*
 * utils.h
 *
 *  Created on: Sep 15, 2021
 *      Author: deer
 */

#ifndef INCLUDES_UTILS_H_
#define INCLUDES_UTILS_H_
#include <vector>
#include "constants.h"

//sorts vector inplace based on mySortOrder (inplace means the vector is modified)
//returns nothing
void sort(const SORT_ORDER &mySortOrder,std::vector<process> &myProcesses);

//gets the next process from the vector, then removes it from the vector
//returns removed process
process getNext(std::vector<process> &myProcesses);

//returns the number of entries in the vector
int getSize(std::vector<process> &myProcesses);

//attempt to correct missing data
//if cannot correct, then drop row
//return number of rows in myProcesses
int handleMissingData(std::vector<process> &myProcesses);

#endif /* INCLUDES_UTILS_H_ */
