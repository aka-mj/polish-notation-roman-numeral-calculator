#include <stdlib.h>
#include "unity.h"
#include "roman.h"
#include "arabic2roman.h"

void test_a2r_1(void)
{
	roman_t r;
	int ret;
	ret = arabic_to_roman(1, &r);
	TEST_ASSERT_EQUAL_STRING(r, "I");
	TEST_ASSERT_EQUAL_INT(ret, 0);
	if (0 == ret) free(r);
}

void test_a2r_2(void)
{
	roman_t r;
	int ret;
	ret = arabic_to_roman(2, &r);
	TEST_ASSERT_EQUAL_STRING(r, "II");
	TEST_ASSERT_EQUAL_INT(ret, 0);
	if (0 == ret) free(r);
}

void test_a2r_3(void)
{
	roman_t r;
	int ret;
	ret = arabic_to_roman(3, &r);
	TEST_ASSERT_EQUAL_STRING(r, "III");
	TEST_ASSERT_EQUAL_INT(ret, 0);
	if (0 == ret) free(r);
}

void test_a2r_4(void)
{
	roman_t r;
	int ret;
	ret = arabic_to_roman(4, &r);
	TEST_ASSERT_EQUAL_STRING(r, "IV");
	TEST_ASSERT_EQUAL_INT(ret, 0);
	if (0 == ret) free(r);
}

void test_a2r_5(void)
{
	roman_t r;
	int ret;
	ret = arabic_to_roman(5, &r);
	TEST_ASSERT_EQUAL_STRING(r, "V");
	TEST_ASSERT_EQUAL_INT(ret, 0);
	if (0 == ret) free(r);
}

void test_a2r_6(void)
{
	roman_t r;
	int ret;
	ret = arabic_to_roman(6, &r);
	TEST_ASSERT_EQUAL_STRING(r, "VI");
	TEST_ASSERT_EQUAL_INT(ret, 0);
	if (0 == ret) free(r);
}

void test_a2r_7(void)
{
	roman_t r;
	int ret;
	ret = arabic_to_roman(7, &r);
	TEST_ASSERT_EQUAL_STRING(r, "VII");
	TEST_ASSERT_EQUAL_INT(ret, 0);
	if (0 == ret) free(r);
}

void test_a2r_8(void)
{
	roman_t r;
	int ret;
	ret = arabic_to_roman(8, &r);
	TEST_ASSERT_EQUAL_STRING(r, "VIII");
	TEST_ASSERT_EQUAL_INT(ret, 0);
	if (0 == ret) free(r);
}

void test_a2r_9(void)
{
	roman_t r;
	int ret;
	ret = arabic_to_roman(9, &r);
	TEST_ASSERT_EQUAL_STRING(r, "IX");
	TEST_ASSERT_EQUAL_INT(ret, 0);
	if (0 == ret) free(r);
}

void test_a2r_10(void)
{
	roman_t r;
	int ret;
	ret = arabic_to_roman(10, &r);
	TEST_ASSERT_EQUAL_STRING(r, "X");
	TEST_ASSERT_EQUAL_INT(ret, 0);
	if (0 == ret) free(r);
}

void test_a2r_11(void)
{
	roman_t r;
	int ret;
	ret = arabic_to_roman(11, &r);
	TEST_ASSERT_EQUAL_STRING(r, "XI");
	TEST_ASSERT_EQUAL_INT(ret, 0);
	if (0 == ret) free(r);
}

void test_a2r_15(void)
{
	roman_t r;
	int ret;
	ret = arabic_to_roman(15, &r);
	TEST_ASSERT_EQUAL_STRING(r, "XV");
	TEST_ASSERT_EQUAL_INT(ret, 0);
	if (0 == ret) free(r);
}

void test_a2r_19(void)
{
	roman_t r;
	int ret;
	ret = arabic_to_roman(19, &r);
	TEST_ASSERT_EQUAL_STRING(r, "XIX");
	TEST_ASSERT_EQUAL_INT(ret, 0);
	if (0 == ret) free(r);
}

void test_a2r_20(void)
{
	roman_t r;
	int ret;
	ret = arabic_to_roman(20, &r);
	TEST_ASSERT_EQUAL_STRING(r, "XX");
	TEST_ASSERT_EQUAL_INT(ret, 0);
	if (0 == ret) free(r);
}

void test_a2r_25(void)
{
	roman_t r;
	int ret;
	ret = arabic_to_roman(25, &r);
	TEST_ASSERT_EQUAL_STRING(r, "XXV");
	TEST_ASSERT_EQUAL_INT(ret, 0);
	if (0 == ret) free(r);
}

void test_a2r_30(void)
{
	roman_t r;
	int ret;
	ret = arabic_to_roman(30, &r);
	TEST_ASSERT_EQUAL_STRING(r, "XXX");
	TEST_ASSERT_EQUAL_INT(ret, 0);
	if (0 == ret) free(r);
}

void test_a2r_40(void)
{
	roman_t r;
	int ret;
	ret = arabic_to_roman(40, &r);
	TEST_ASSERT_EQUAL_STRING(r, "XL");
	TEST_ASSERT_EQUAL_INT(ret, 0);
	if (0 == ret) free(r);
}

void test_a2r_49(void)
{
	roman_t r;
	int ret;
	ret = arabic_to_roman(49, &r);
	TEST_ASSERT_EQUAL_STRING(r, "XLIX");
	TEST_ASSERT_EQUAL_INT(ret, 0);
	if (0 == ret) free(r);
}

void test_a2r_50(void)
{
	roman_t r;
	int ret;
	ret = arabic_to_roman(50, &r);
	TEST_ASSERT_EQUAL_STRING(r, "L");
	TEST_ASSERT_EQUAL_INT(ret, 0);
	if (0 == ret) free(r);
}

void test_a2r_90(void)
{
	roman_t r;
	int ret;
	ret = arabic_to_roman(90, &r);
	TEST_ASSERT_EQUAL_STRING(r, "XC");
	TEST_ASSERT_EQUAL_INT(ret, 0);
	if (0 == ret) free(r);
}

void test_a2r_100(void)
{
	roman_t r;
	int ret;
	ret = arabic_to_roman(100, &r);
	TEST_ASSERT_EQUAL_STRING(r, "C");
	TEST_ASSERT_EQUAL_INT(ret, 0);
	if (0 == ret) free(r);
}

void test_a2r_400(void)
{
	roman_t r;
	int ret;
	ret = arabic_to_roman(400, &r);
	TEST_ASSERT_EQUAL_STRING(r, "CD");
	TEST_ASSERT_EQUAL_INT(ret, 0);
	if (0 == ret) free(r);
}

void test_a2r_500(void)
{
	roman_t r;
	int ret;
	ret = arabic_to_roman(500, &r);
	TEST_ASSERT_EQUAL_STRING(r, "D");
	TEST_ASSERT_EQUAL_INT(ret, 0);
	if (0 == ret) free(r);
}

void test_a2r_900(void)
{
	roman_t r;
	int ret;
	ret = arabic_to_roman(900, &r);
	TEST_ASSERT_EQUAL_STRING(r, "CM");
	TEST_ASSERT_EQUAL_INT(ret, 0);
	if (0 == ret) free(r);
}

void test_a2r_1000(void)
{
	roman_t r;
	int ret;
	ret = arabic_to_roman(1000, &r);
	TEST_ASSERT_EQUAL_STRING(r, "M");
	TEST_ASSERT_EQUAL_INT(ret, 0);
	if (0 == ret) free(r);
}

void test_a2r_3999(void)
{
	roman_t r;
	int ret;
	ret = arabic_to_roman(3999, &r);
	TEST_ASSERT_EQUAL_STRING(r, "MMMCMXCIX");
	TEST_ASSERT_EQUAL_INT(ret, 0);
	if (0 == ret) free(r);
}

void test_a2r_fail_large(void)
{
	roman_t r;
	int ret;
	ret = arabic_to_roman(4000, &r);
	TEST_ASSERT_EQUAL_INT(ret, -1);
	if (0 == ret) free(r);
}

void test_a2r_fail_zero(void)
{
	roman_t r;
	int ret;
	ret = arabic_to_roman(0, &r);
	TEST_ASSERT_EQUAL_INT(ret, -1);
	if (0 == ret) free(r);
}

/* Tests for arabic_to_roman to suite */
void run_tests_arabic_to_roman(void)
{
	RUN_TEST(test_a2r_1);
	RUN_TEST(test_a2r_2);
	RUN_TEST(test_a2r_3);
	RUN_TEST(test_a2r_4);
	RUN_TEST(test_a2r_5);
	RUN_TEST(test_a2r_6);
	RUN_TEST(test_a2r_7);
	RUN_TEST(test_a2r_8);
	RUN_TEST(test_a2r_9);
	RUN_TEST(test_a2r_10);
	RUN_TEST(test_a2r_11);
	RUN_TEST(test_a2r_15);
	RUN_TEST(test_a2r_19);
	RUN_TEST(test_a2r_20);
	RUN_TEST(test_a2r_25);
	RUN_TEST(test_a2r_30);
	RUN_TEST(test_a2r_40);
	RUN_TEST(test_a2r_49);
	RUN_TEST(test_a2r_50);
	RUN_TEST(test_a2r_90);
	RUN_TEST(test_a2r_100);
	RUN_TEST(test_a2r_400);
	RUN_TEST(test_a2r_500);
	RUN_TEST(test_a2r_900);
	RUN_TEST(test_a2r_1000);
	RUN_TEST(test_a2r_3999);
	RUN_TEST(test_a2r_fail_large);
	RUN_TEST(test_a2r_fail_zero);
}
