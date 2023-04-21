#include <assert.h>
#include <ctype.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "unity.h"
#include "../gnl_with_bonus/get_next_line.h"
#include "../gnl_with_bonus/get_next_line.h"

void setUp(void) {
    // set stuff up here
}

void tearDown(void) {
    // clean stuff up here
}

struct params {
    int x;
    int y;
    int result;
    int sub;
};

void soma(struct params *p){
    p->result = p->x + p->y;
    p->sub = p->x - p->y;
}

void usa_soma(){
    struct params p;
    p.x = 1;
    p.y = 2;
    soma(&p);
    TEST_ASSERT_EQUAL_INT32(3, p.result);
    TEST_ASSERT_EQUAL_INT32(-1, p.sub);
}

void    ler_fd1(void)
{
   	int		fd1;
	char	*line;

	fd1 = open("./tests/teste.txt", O_RDONLY);
	line = get_next_line(fd1);
	TEST_ASSERT_EQUAL_STRING("esse teste\n", line);
	free(line);
    line = get_next_line(fd1);
	TEST_ASSERT_EQUAL_STRING("vai mostrar\n", line);
	free(line);
    line = get_next_line(fd1);
	TEST_ASSERT_EQUAL_STRING("linha por linha \n", line);
	free(line);
    line = get_next_line(fd1);
	TEST_ASSERT_EQUAL_STRING("!!", line);
	free(line);
}

void    ler_fd2(void)
{
   	int		fd2;
	char	*line;

	fd2 = open("./tests/test_empty.txt", O_RDONLY);
	line = get_next_line(fd2);
	TEST_ASSERT_EQUAL_STRING(NULL, line);
	free(line);
}

// not needed when using generate_test_runner.rb
int main(void) {
    UNITY_BEGIN();
    printf("o BUFFER_SIZE é: %d\n", BUFFER_SIZE);
    RUN_TEST(usa_soma);
    RUN_TEST(ler_fd1);
    RUN_TEST(ler_fd2);
    return UNITY_END();
}

