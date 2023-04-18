#include "main.h"

/**
 * binary_to_uint = convert binary to unsigned int
 * @b: point to string of 0 and 1 char
 * retuen: 0
*/

unsigned int binary_to_decimal(char *binary_string) {
	unsigned int decimal = 0;
	
	if (binary_string == NULL) {
		return 0;
	}
	
	int i = 0;
	while (binary_string[i] != '\0') {
		if (binary_string[i] != '0' && binary_string[i] != '1') {
			return 0;
		}
		decimal = (decimal << 1) | (binary_string[i] - '0');
		i++;
	}
	
	return decimal;
}
