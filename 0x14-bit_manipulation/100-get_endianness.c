#include "main.h"
#include <stdint.h>
/**
 * get_endianness - functions that determines the endiannes of a system
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	uint16_t num = 0x0001;
	uint8_t *m = (uint8_t *)&num;

	if (*m == 0x01)
		return (1);
	return (0);
}
