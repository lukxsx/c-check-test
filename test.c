#include <stdlib.h>
#include <assert.h>
#include <check.h>
#include "count.h"

START_TEST(test_count) {
	ck_assert_int_eq(count(1, 3), 4);
	
}
END_TEST

START_TEST(test_decr) {
	ck_assert_int_eq(decr(1, 3), -2);
	
}
END_TEST

Suite * count_suite(void) {
	Suite *s;
	TCase *tc_core;
	s = suite_create("count");
	tc_core = tcase_create("Core");
	tcase_add_test(tc_core, test_count);
	tcase_add_test(tc_core, test_decr);
	suite_add_tcase(s, tc_core);
	return s;


}


int main() {
	int number_failed;
	Suite *s;
	SRunner *sr;
	s = count_suite();
	sr = srunner_create(s);
	srunner_run_all(sr, CK_NORMAL);
	number_failed = srunner_ntests_failed(sr);
	srunner_free(sr);
	return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}

