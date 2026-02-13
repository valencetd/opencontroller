#include <unity.h>

int add(int, int);

void test_add_positive_numbers(void) {
    TEST_ASSERT_EQUAL(5, add(2, 3));
}

void test_add_negative_numbers(void) {
    TEST_ASSERT_EQUAL(-5, add(-2, -3));
}

void test_add_zero(void) {
    TEST_ASSERT_EQUAL(10, add(10, 0));
}

int main(int argc, char **argv) {
    UNITY_BEGIN();
    RUN_TEST(test_add_positive_numbers);
    RUN_TEST(test_add_negative_numbers);
    RUN_TEST(test_add_zero);
    UNITY_END();
    return 0;
}
