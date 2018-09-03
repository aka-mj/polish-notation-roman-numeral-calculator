#include <stdlib.h>
#include "unity.h"
#include "add.h"
#include "sub.h"
#include "roman2arabic.h"
#include "arabic2roman.h"

int main(void)
{
	UNITY_BEGIN();
	run_tests_addition();
	run_tests_subtraction();
	run_tests_roman_to_arabic();
	run_tests_arabic_to_roman();
	return UNITY_END();
}