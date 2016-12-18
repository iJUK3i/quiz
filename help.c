/* ************************************************************************** */
/*                                                                            */
/*                                            __    __   ______   _______     */
/*   help.c                                  /  |  /  | /      \ /       \    */
/*                                           $$ |  $$ |/$$$$$$  |$$$$$$$  |   */
/*   juk3 <admin@rejects.com>                $$ |__$$ |$$____$$ |$$ |__$$ |   */
/*                                           $$    $$ | /    $$/ $$    $$<    */
/*   Created: 2016/12/18 04:46:34            $$$$$$$$ |/$$$$$$/  $$$$$$$  |   */
/*   Updated: 2016/12/18 08:35:36                  $$ |$$ |_____ $$ |  $$ |   */
/*   Update by: juk3                               $$ |$$       |$$ |  $$ |   */
/*                                                 $$/ $$$$$$$$/ $$/   $$/    */
/*                                                                            */
/* ************************************************************************** */

#include "juk3.h"

void	help(void)
{
	int ans;
	int cxq;

	system("clear");
	ft_putstr("         $ _ Welcome to the Help Menu _ $\n");
	ft_putstr(" (Below you will find info on how to play the game, good luck!)\n");
	ft_putstr("\n");
	ft_putstr(" Basically, you get 1 question wrong and it is Game Over!\n");
	ft_putstr(" Each question is multiple choice, and should be entered as seen:");
	ft_putstr(" a  b  c  or  d  . Anything else is not a valid response.\n");
	ft_putstr(" If you get all of the questions right then you will be placed");
	ft_putstr(" on the Highscore Leaderboard as the newest Highscore.\n");
	ft_putstr(" Each correct answer will increase your $credits. \n");
	ft_putchar('\n');
	ft_putstr(" (all game winnings are in fictional money values, you will not win real money from this game)\n");
	ft_putstr("\n");
	ft_putstr(" Press any key and the enter key to return to main menu! \n");
	ans = getchar();
	while ((cxq = getchar()) != '\n' && cxq != EOF){}
}
