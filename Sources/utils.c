/*
 * utils.c
 *
 *  Created on: Oct 20, 2022
 *      Author: bonnee
 */
#include "utils.h"
#include "mcu_sel.h"

static board_t board_type = BOARD_TEST;

void utils_init(){
	switch(mcu_sel_GetVal())
	{
	case 0b00:
		board_type = BOARD_2_GAUGE;
		break;
	case 0b10:
		board_type = BOARD_3_GAUGE;
		break;
	case 0b11:
		board_type = BOARD_4_GAUGE;
		break;
	default:
		board_type = BOARD_TEST;
	}
}

board_t utils_get_board_type(){
	return board_type;
}
