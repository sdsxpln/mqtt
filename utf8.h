/*
 * utf8.h
 *
 *  Created on: 2015��7��27��
 *      Author: Administrator
 */

#ifndef UTF8_H_
#define UTF8_H_

#include <stdint.h>

struct utf8 {
	uint16_t len;
	uint8_t *data;
};

#endif /* UTF8_H_ */
