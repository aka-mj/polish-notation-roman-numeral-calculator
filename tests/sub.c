#include <stdlib.h>
#include "unity.h"
#include "roman.h"
#include "sub.h"

void test_sub_I_II(void)
{
	roman_t r; //final roman numeral
	int a = roman_to_arabic("I");
	int b = roman_to_arabic("II");
	TEST_ASSERT_EQUAL_INT(0, arabic_to_roman(b-a, &r));
	TEST_ASSERT_EQUAL_STRING("I", (char*)r);
}

void test_sub_I_V(void)
{
	roman_t r; //final roman numeral
	int a = roman_to_arabic("I");
	int b = roman_to_arabic("V");
	TEST_ASSERT_EQUAL_INT(0, arabic_to_roman(b-a, &r));
	TEST_ASSERT_EQUAL_STRING("IV", (char*)r);
}

void test_sub_I_VI(void)
{
	roman_t r; //final roman numeral
	int a = roman_to_arabic("I");
	int b = roman_to_arabic("VI");
	TEST_ASSERT_EQUAL_INT(0, arabic_to_roman(b-a, &r));
	TEST_ASSERT_EQUAL_STRING("V", (char*)r);
}

void test_sub_failure_zero(void)
{
	roman_t r; //final roman numeral
	int a = roman_to_arabic("I");
	int b = roman_to_arabic("I");
	TEST_ASSERT_EQUAL_INT(-1, arabic_to_roman(b-a, &r));
}

void test_sub_failure_negative(void)
{
	roman_t r; //final roman numeral
	int a = roman_to_arabic("V");
	int b = roman_to_arabic("I");
	TEST_ASSERT_EQUAL_INT(-1, arabic_to_roman(b-a, &r));
}

void run_tests_subtraction(void)
{
	RUN_TEST(test_sub_I_II);
	RUN_TEST(test_sub_I_V);
	RUN_TEST(test_sub_I_VI);
	RUN_TEST(test_sub_failure_zero);
	RUN_TEST(test_sub_failure_negative);
}
