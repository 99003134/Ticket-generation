#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>
#include<ticket.h>
#define PROJECT_NAME    "Ticket generation"

void test_booking(void);
void test_printticket(void);
void test_availablecheck(void);


int main() {

  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
  
  CU_add_test(suite, "booking", test_booking);
  CU_add_test(suite, "printticket", test_printticket);
  CU_add_test(suite, "availablecheck", test_availablecheck);
  

  CU_basic_set_mode(CU_BRM_VERBOSE);
  CU_basic_run_tests();
  CU_cleanup_registry();
  return 0;
}
void test_booking(void){
 
 }

void test_printticket(void){
  
}

void test_availablecheck(void){
  
}

