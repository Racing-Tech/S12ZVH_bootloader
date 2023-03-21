/*
 * utils.h
 *
 *  Created on: Oct 20, 2022
 *      Author: bonnee
 */

#ifndef UTILS_H_
#define UTILS_H_

#include "PE_Types.h"

typedef enum board_type {
	BOARD_2_GAUGE=0,
	BOARD_3_GAUGE,
	BOARD_4_GAUGE,
	BOARD_TEST
} board_t;

void utils_init();
board_t utils_get_board_type();

#endif /* UTILS_H_ */
