/* ************************************************************************** */
/*                                                                            */
/*                                            __    __   ______   _______     */
/*   score.c                                 /  |  /  | /      \ /       \    */
/*                                           $$ |  $$ |/$$$$$$  |$$$$$$$  |   */
/*   juk3 <admin@rejects.com>                $$ |__$$ |$$____$$ |$$ |__$$ |   */
/*                                           $$    $$ | /    $$/ $$    $$<    */
/*   Created: 2016/12/18 08:47:44            $$$$$$$$ |/$$$$$$/  $$$$$$$  |   */
/*   Updated: 2016/12/18 10:03:45                  $$ |$$ |_____ $$ |  $$ |   */
/*   Update by: juk3                               $$ |$$       |$$ |  $$ |   */
/*                                                 $$/ $$$$$$$$/ $$/   $$/    */
/*                                                                            */
/* ************************************************************************** */

#include "juk3.h"

void	score(int p);
{
	int i;
	int fd;
	int buf[1];
	char *new_str;

	ft_putstr(" You currently have $");
	ft_putnbr(p);
	ft_putstr("00,000");
	ft_putchar('\n');
	ft_


	fd = open(score.txt, O_CREAT | O_RDWR);
	while (0 < read(fd, score.txt, 1))
	{
		new_str[i] = buf[0];
		i++;
	}
	new_str[i] = '\0';
	ft_putstr(new_str);
}

int main()
{
	score();
	return(0);
}
