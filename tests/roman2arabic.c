#include <stdlib.h>
#include "unity.h"
#include "roman.h"
#include "roman2arabic.h"

void test_r2a_1(void)
{
	roman_t r = "I";
	int ret;
	ret = roman_to_arabic(r);
	TEST_ASSERT_EQUAL_INT(ret, 1);
}

void test_r2a_2(void)
{
	roman_t r = "II";
	int ret;
	ret = roman_to_arabic(r);
	TEST_ASSERT_EQUAL_INT(ret, 2);
}

void test_r2a_3(void)
{
	roman_t r = "III";
	int ret;
	ret = roman_to_arabic(r);
	TEST_ASSERT_EQUAL_INT(ret, 3);
}

void test_r2a_4(void)
{
	roman_t r = "IV";
	int ret;
	ret = roman_to_arabic(r);
	TEST_ASSERT_EQUAL_INT(ret, 4);
}

void test_r2a_5(void)
{
	roman_t r = "V";
	int ret;
	ret = roman_to_arabic(r);
	TEST_ASSERT_EQUAL_INT(ret, 5);
}

void test_r2a_6(void)
{
	roman_t r = "VI";
	int ret;
	ret = roman_to_arabic(r);
	TEST_ASSERT_EQUAL_INT(ret, 6);
}

void test_r2a_7(void)
{
	roman_t r = "VII";
	int ret;
	ret = roman_to_arabic(r);
	TEST_ASSERT_EQUAL_INT(ret, 7);
}

void test_r2a_8(void)
{
	roman_t r = "VIII";
	int ret;
	ret = roman_to_arabic(r);
	TEST_ASSERT_EQUAL_INT(ret, 8);
}

void test_r2a_9(void)
{
	roman_t r = "IX";
	int ret;
	ret = roman_to_arabic(r);
	TEST_ASSERT_EQUAL_INT(ret, 9);
}

void test_r2a_10(void)
{
	roman_t r = "X";
	int ret;
	ret = roman_to_arabic(r);
	TEST_ASSERT_EQUAL_INT(ret, 10);
}

void test_r2a_11(void)
{
	roman_t r = "XI";
	int ret;
	ret = roman_to_arabic(r);
	TEST_ASSERT_EQUAL_INT(ret, 11);
}

void test_r2a_15(void)
{
	roman_t r = "XV";
	int ret;
	ret = roman_to_arabic(r);
	TEST_ASSERT_EQUAL_INT(ret, 15);
}

void test_r2a_19(void)
{
	roman_t r = "XIX";
	int ret;
	ret = roman_to_arabic(r);
	TEST_ASSERT_EQUAL_INT(ret, 19);
}

void test_r2a_20(void)
{
	roman_t r = "XX";
	int ret;
	ret = roman_to_arabic(r);
	TEST_ASSERT_EQUAL_INT(ret, 20);
}

void test_r2a_25(void)
{
	roman_t r = "XXV";
	int ret;
	ret = roman_to_arabic(r);
	TEST_ASSERT_EQUAL_INT(ret, 25);
}

void test_r2a_30(void)
{
	roman_t r = "XXX";
	int ret;
	ret = roman_to_arabic(r);
	TEST_ASSERT_EQUAL_INT(ret, 30);
}

void test_r2a_40(void)
{
	roman_t r = "XL";
	int ret;
	ret = roman_to_arabic(r);
	TEST_ASSERT_EQUAL_INT(ret, 40);
}

void test_r2a_49(void)
{
	roman_t r = "XLIX";
	int ret;
	ret = roman_to_arabic(r);
	TEST_ASSERT_EQUAL_INT(ret, 49);
}

void test_r2a_50(void)
{
	roman_t r = "L";
	int ret;
	ret = roman_to_arabic(r);
	TEST_ASSERT_EQUAL_INT(ret, 50);
}

void test_r2a_90(void)
{
	roman_t r = "XC";
	int ret;
	ret = roman_to_arabic(r);
	TEST_ASSERT_EQUAL_INT(ret, 90);
}

void test_r2a_100(void)
{
	roman_t r = "C";
	int ret;
	ret = roman_to_arabic(r);
	TEST_ASSERT_EQUAL_INT(ret, 100);
}

void test_r2a_400(void)
{
	roman_t r = "CD";
	int ret;
	ret = roman_to_arabic(r);
	TEST_ASSERT_EQUAL_INT(ret, 400);
}

void test_r2a_500(void)
{
	roman_t r = "D";
	int ret;
	ret = roman_to_arabic(r);
	TEST_ASSERT_EQUAL_INT(ret, 500);
}

void test_r2a_900(void)
{
	roman_t r = "CM";
	int ret;
	ret = roman_to_arabic(r);
	TEST_ASSERT_EQUAL_INT(ret, 900);
}

void test_r2a_1000(void)
{
	roman_t r = "M";
	int ret;
	ret = roman_to_arabic(r);
	TEST_ASSERT_EQUAL_INT(ret, 1000);
}

void test_r2a_3999(void)
{
	roman_t r = "MMMCMXCIX";
	int ret;
	ret = roman_to_arabic(r);
	TEST_ASSERT_EQUAL_INT(ret, 3999);
}

void test_r2a_fail_invalid_char(void)
{
	roman_t r = "G";
	int ret;
	ret = roman_to_arabic(r);
	TEST_ASSERT_EQUAL_INT(ret, -1);
}

/* Tests for roman_to_arabic to suite */
void run_tests_roman_to_arabic(void)
{
	RUN_TEST(test_r2a_1);
	RUN_TEST(test_r2a_2);
	RUN_TEST(test_r2a_3);
	RUN_TEST(test_r2a_4);
	RUN_TEST(test_r2a_5);
	RUN_TEST(test_r2a_6);
	RUN_TEST(test_r2a_7);
	RUN_TEST(test_r2a_8);
	RUN_TEST(test_r2a_9);
	RUN_TEST(test_r2a_10);
	RUN_TEST(test_r2a_11);
	RUN_TEST(test_r2a_15);
	RUN_TEST(test_r2a_19);
	RUN_TEST(test_r2a_20);
	RUN_TEST(test_r2a_25);
	RUN_TEST(test_r2a_30);
	RUN_TEST(test_r2a_40);
	RUN_TEST(test_r2a_49);
	RUN_TEST(test_r2a_50);
	RUN_TEST(test_r2a_90);
	RUN_TEST(test_r2a_100);
	RUN_TEST(test_r2a_400);
	RUN_TEST(test_r2a_500);
	RUN_TEST(test_r2a_900);
	RUN_TEST(test_r2a_1000);
	RUN_TEST(test_r2a_3999);
	RUN_TEST(test_r2a_fail_invalid_char);
}
