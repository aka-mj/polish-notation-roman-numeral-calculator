#include <stdlib.h>
#include "unity.h"
#include "roman.h"
#include "add.h"

void test_add_I_I(void)
{
	roman_t r; //final roman numeral
	int a = roman_to_arabic("I");
	int b = roman_to_arabic("I");
	TEST_ASSERT_EQUAL_INT(0, arabic_to_roman(a+b, &r));
	TEST_ASSERT_EQUAL_STRING("II", (char*)r);
}

void test_add_I_II(void)
{
	roman_t r; //final roman numeral
	int a = roman_to_arabic("I");
	int b = roman_to_arabic("II");
	TEST_ASSERT_EQUAL_INT(0, arabic_to_roman(a+b, &r));
	TEST_ASSERT_EQUAL_STRING("III", (char*)r);
}

void test_add_I_III(void)
{
	roman_t r; //final roman numeral
	int a = roman_to_arabic("I");
	int b = roman_to_arabic("III");
	TEST_ASSERT_EQUAL_INT(0, arabic_to_roman(a+b, &r));
	TEST_ASSERT_EQUAL_STRING("IV", (char*)r);
}

void test_add_I_IV(void)
{
	roman_t r; //final roman numeral
	int a = roman_to_arabic("I");
	int b = roman_to_arabic("IV");
	TEST_ASSERT_EQUAL_INT(0, arabic_to_roman(a+b, &r));
	TEST_ASSERT_EQUAL_STRING("V", (char*)r);
}

void test_add_I_V(void)
{
	roman_t r; //final roman numeral
	int a = roman_to_arabic("I");
	int b = roman_to_arabic("V");
	TEST_ASSERT_EQUAL_INT(0, arabic_to_roman(a+b, &r));
	TEST_ASSERT_EQUAL_STRING("VI", (char*)r);
}

void test_add_IV_I(void)
{
	roman_t r; //final roman numeral
	int a = roman_to_arabic("IV");
	int b = roman_to_arabic("I");
	TEST_ASSERT_EQUAL_INT(0, arabic_to_roman(a+b, &r));
	TEST_ASSERT_EQUAL_STRING("V", (char*)r);
}

void test_add_IV_V(void)
{
	roman_t r; //final roman numeral
	int a = roman_to_arabic("IV");
	int b = roman_to_arabic("V");
	TEST_ASSERT_EQUAL_INT(0, arabic_to_roman(a+b, &r));
	TEST_ASSERT_EQUAL_STRING("IX", (char*)r);
}

void test_add_X_XXX(void)
{
	roman_t r; //final roman numeral
	int a = roman_to_arabic("X");
	int b = roman_to_arabic("XXX");
	TEST_ASSERT_EQUAL_INT(0, arabic_to_roman(a+b, &r));
	TEST_ASSERT_EQUAL_STRING("XL", (char*)r);
}

void test_add_failure_1(void)
{
	roman_t r; //final roman numeral
	int a = roman_to_arabic("G");
	int b = roman_to_arabic("I");
	TEST_ASSERT_EQUAL_INT(-1, arabic_to_roman(a+b, &r));
}

void test_add_failure_2(void)
{
	roman_t r; //final roman numeral
	int a = roman_to_arabic("I");
	int b = roman_to_arabic("MMMCMXCIX");
	TEST_ASSERT_EQUAL_INT(-1, arabic_to_roman(a+b, &r));
}

void run_tests_addition(void)
{
	RUN_TEST(test_add_I_I);
	RUN_TEST(test_add_I_II);
	RUN_TEST(test_add_I_III);
	RUN_TEST(test_add_I_IV);
	RUN_TEST(test_add_I_V);
	RUN_TEST(test_add_IV_I);
	RUN_TEST(test_add_IV_V);
	RUN_TEST(test_add_X_XXX);
	RUN_TEST(test_add_failure_1);
	RUN_TEST(test_add_failure_2);
}
