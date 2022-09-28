/**
 * _pow_recursion - returns the value x raise to the power
 * @x: base
 * @y: index
 * Return: returns value of x raised to y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * (_pow_recursion(x, (y - 1))));
}
