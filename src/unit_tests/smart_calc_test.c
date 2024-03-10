#include "smart_calc_test.h"

void run_testcase(Suite *testcase) {
  printf("\n");
  SRunner *suite_runner = srunner_create(testcase);
  srunner_set_fork_status(suite_runner, CK_NOFORK);
  srunner_run_all(suite_runner, CK_NORMAL);
  srunner_free(suite_runner);
}

void run_tests(void) {
  printf("\n\033[30;43m -=SMART_CALC_TESTS=- \033[0m\n");
  Suite *case_list[] = {suite_calculate(), NULL};
  for (Suite **cur_test_case = case_list; *cur_test_case != NULL;
       cur_test_case++) {
    run_testcase(*cur_test_case);
  }
}

int main() {
  run_tests();
  return 0;
}