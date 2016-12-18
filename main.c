/* ************************************************************************** */
/*                                                                            */
/*                                            __    __   ______   _______     */
/*   main.c                                  /  |  /  | /      \ /       \    */
/*                                           $$ |  $$ |/$$$$$$  |$$$$$$$  |   */
/*   juk3 <admin@rejects.com>                $$ |__$$ |$$____$$ |$$ |__$$ |   */
/*                                           $$    $$ | /    $$/ $$    $$<    */
/*   Created: 2016/12/18 08:47:44            $$$$$$$$ |/$$$$$$/  $$$$$$$  |   */
/*   Updated: 2016/12/18 12:41:32                  $$ |$$ |_____ $$ |  $$ |   */
/*   Update by: juk3                               $$ |$$       |$$ |  $$ |   */
/*                                                 $$/ $$$$$$$$/ $$/   $$/    */
/*                                                                            */
/* ************************************************************************** */

#include "juk3.h"

void	score(int p)
{
	int i;
	int fd;
	int buf[1];
	char *new_str;
	int *str_ai;

// brings the value of score(3) from main here
	ft_putstr(" You ended with $");
	ft_putnbr(p);
	ft_putstr("00,000");
	ft_putchar('\n');

// malloc space for the new str's one for char
// and one for int since we are comparing an incoming
// int to the chars in our score.txt file
	new_str = (char*)malloc(10000);
	str_ai = (int*)malloc(10000);
// this opens the file or creates it if it doesn't exist
	fd = open("score.txt", O_CREAT | O_RDWR);
	i = 0;
// this reads the file byte by byte and puts it in
// to a new_str
	while (0 != read(fd, buf, 1))
	{
		new_str[i] = buf[0];
		i++;
	}
// this just puts a null terminator at the end of the str
	new_str[i] = '\0';
	i = 0;
// this converts the current char string to an int str
	while (new_str[i] != '\0')
	{
		ft_putchar(new_str[i]);
		str_ai[i] = ft_atoi(&new_str[i]);
		i++;
	}
	i = 0;
// inside this function will be the write to file
// just need to finish this. clean it up and link to 
// highscore.c file
	if (p > str_ai[i])
	{
		ft_putstr(" you got a new highscore: ");

		ft_putnbr(str_ai[i]);
		ft_putchar('\n');
		i++;
	}
}

int main()
{
	// change the 3 below to a number higher than 
	// the number in the score.txt (currently 6) to
	// see new highscore msg. will make it write to
	// file soon.
	score(3);
	return(0);
}
