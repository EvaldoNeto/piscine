gccf=`echo gcc -Wall -Werror -Wextra`
$gccf -c ft_strcmp.c -o ft_strcmp.o
$gccf -c ft_putchar.c -o ft_putchar.o
$gccf -c ft_putstr.c -o ft_putstr.o
$gccf -c ft_strlen.c -o ft_strlen.o
$gccf -c ft_swap.c -o ft_swap.o
s=`find * | grep -v .sh | sed 's/c$/o/'`
ar ruv libft.a $s
ranlib libft.a
rm *.o