void	ft_putchar(char c);
void	ft_top_bottom_len(int x_length)
{
	int	length;
	length = 1;
	while (length <= x_length)
	{
		if (length == 1)
		{
			ft_putchar('A');
		}
		else if (length == x_length)
		{
			ft_putchar('C');
		}
		else
		{
			ft_putchar('B');
		}
		length++;
	}
	ft_putchar('\n');
}

void	ft_middle_len(int x)
{
	int width;
	width = 1;
	while (width <= x)
	{
		if (width == 1)
		{
			ft_putchar('B');
		}
		else if (width == x)
		{
			ft_putchar('B');
		}
		else
		{
			ft_putchar(' ');
		}
		width++;
	}
	ft_putchar('\n');
}

void	ft_last_len(int x_length)
{
	int length = 1;
	while(length <= x_length)
	{
		if(length == 1)
		{
			ft_putchar('C');
		}
		else if(length == x_length)
		{
			ft_putchar('A');
		}
		else
		{
			ft_putchar('B');
		}
		length++;
	}
	ft_putchar('\n');
}


void	rush(int x, int y)
{
	int len_width;
	len_width = 1;
	while (len_width <= y)
	{
		if (len_width == 1)
		{
			ft_top_bottom_len(x);
		}
		else if(len_width == y) 
		{
			ft_last_len(x);
		}
		else
		{
			ft_middle_len(x);
		}
		len_width++;
	}
}
