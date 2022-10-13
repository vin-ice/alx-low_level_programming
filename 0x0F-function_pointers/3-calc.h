#ifdef HEADER_FILE
#define HEADER_FILE
/**
 * struct op - Struct op
 *
 * @op: operator
 * @f: function associated
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;
int (*get_op_func(char *s))(int, int);
int op_add(int, int);
int op_sub(int, int);
int op_mul(int, int);
int op_div(int, int);
int op_mod(int, int);
#endif