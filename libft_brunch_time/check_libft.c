#include <check.h>               
#include "../libft.h"        
#include <stdlib.h>
#include <string.h>


// ******** TEST CASES FOR FT_STRLEN *********

START_TEST(test_ft_strlen) {
  // extern int 		ft_strlen(const char *str);
  // extern size_t		strlen(const char *s);

  char *one_string= "turtle";
  char *separated_string = "more         turtle";
  char *no_string = "";
  char *long_string = "lorem\tipsum\tdolor\nsit\namet\n";
  char *tabs_new_lines = "\n\n\f\r\t";
  char *spaces = "         ";

  ck_assert_int_eq(ft_strlen(one_string), strlen(one_string));
  ck_assert_int_eq(ft_strlen(separated_string), strlen(separated_string));
  ck_assert_int_eq(ft_strlen(no_string), strlen(no_string));
  ck_assert_int_eq(ft_strlen(long_string), strlen(long_string));
  ck_assert_int_eq(ft_strlen(tabs_new_lines), strlen(tabs_new_lines));
  ck_assert_int_eq(ft_strlen(spaces), strlen(spaces));
} END_TEST



// ******** TEST CASES FOR FT_STRDUP *********

START_TEST(test_ft_strdup) {
  // extern char 	*ft_strdup(const char *str);
  // extern char 	*strdup(const char *s1);

  char *one_string= "turtle";
  char *separated_string = "more        turtle";
  char *no_string = "";
  char *long_string = "lorem\tipsum\tdolor\nsit\namet\n";
  char *tabs_new_lines = "\n\n\f\r\t";
  char *spaces = "         ";

  ck_assert_str_eq(ft_strdup(one_string), strdup(one_string));
  ck_assert_str_eq(ft_strdup(separated_string), strdup(separated_string));
  ck_assert_str_eq(ft_strdup(no_string), strdup(no_string));
  ck_assert_str_eq(ft_strdup(long_string), strdup(long_string));
  ck_assert_str_eq(ft_strdup(tabs_new_lines), strdup(tabs_new_lines));
  ck_assert_str_eq(ft_strdup(spaces), strdup(spaces));

} END_TEST


// ******** TEST CASES FOR FT_STRCPY *********

START_TEST(test_ft_strcpy) {
  // extern char	*ft_strcpy(char *dst, const char *src);
  // extern char 	*strcpy(char *dst, const char *src);
  
  char s1[] = "Hello Geeks!!"; 
  char s2[] = "GeeksforGeeks"; 

  ck_assert_str_eq(ft_strcpy(s1, s2), strcpy(s1, s2));

} END_TEST



// ******** SUIT WITH TEST CASES *********

Suite *libft_suite(void) {       
  Suite *s;                      
  TCase *tc_strlen;
  TCase *tc_strdup;  
  TCase *tc_strcpy;  

  s = suite_create("libft_str");   

  tc_strlen = tcase_create("ft_strlen");
  tc_strdup = tcase_create("ft_strdup");
  tc_strcpy = tcase_create("ft_strcpy");

  tcase_add_test(tc_strlen, test_ft_strlen); 
  tcase_add_test(tc_strdup, test_ft_strdup);
  tcase_add_test(tc_strcpy, test_ft_strcpy);

  suite_add_tcase(s, tc_strlen);       
  suite_add_tcase(s, tc_strdup);            
  suite_add_tcase(s, tc_strcpy);    
        
  return s;
}


// ******** MAIN RUNNER *********

int main(void) {
  int no_failed = 0;                   
  Suite *s;                            
  SRunner *runner;                     

  s = libft_suite();                   
  runner = srunner_create(s);          

  srunner_run_all(runner, CK_NORMAL);  
  no_failed = srunner_ntests_failed(runner); 
  srunner_free(runner);                      
  return (no_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;  
}