/* ************************************************************************** */
/*                                                                            */
/*                                            __    __   ______   _______     */
/*   main.c                                  /  |  /  | /      \ /       \    */
/*                                           $$ |  $$ |/$$$$$$  |$$$$$$$  |   */
/*   juk3 <admin@rejects.com>                $$ |__$$ |$$____$$ |$$ |__$$ |   */
/*                                           $$    $$ | /    $$/ $$    $$<    */
/*   Created: 2016/12/18 03:38:20            $$$$$$$$ |/$$$$$$/  $$$$$$$  |   */
/*   Updated: 2016/12/18 08:39:59                  $$ |$$ |_____ $$ |  $$ |   */
/*   Update by: juk3                               $$ |$$       |$$ |  $$ |   */
/*                                                 $$/ $$$$$$$$/ $$/   $$/    */
/*                                                                            */
/* ************************************************************************** */

//#include "quiz.h"
#include "juk3.h"
#include "game.c"
#include "help.c"

char	menu(void)
{
	int ans;
	int cxq;

	system("clear");
	ft_putstr("         Welcome to Quiz!\n");
	ft_putstr(" s - start game ");
	ft_putstr(" v - view highscore \n");
	ft_putstr(" h - see the help screen ");
	ft_putstr(" q - exit program \n");
	ft_putstr(" Your response: ");
	ans = getchar();
	while ((cxq = getchar()) != '\n' && cxq != EOF){}
	if (ans == 's')
	{
//		ft_putstr(" value s ");
		return ('s');
	}
	else if (ans == 'q')
	{
//		ft_putstr(" the q ");
		return ('q');
	}
	else if (ans == 'v')
	{
//		ft_putstr(" entered v ");
		return ('v');
	}
	else if (ans == 'h')
	{
//		ft_putstr(" help ");
		return ('h');
	}
	else
	{
//		ft_putstr(" error ");
		return ('x');
	}
}

int main()
{
	int menu_var;
	int game_val;


	ft_putstr("start\n");
	menu_var = menu();
	ft_putstr("this is debug\n");
	while (menu_var != 'q')
	{
		if (menu_var == 's')
		{

			game_val = game();
		// if 10 call highscore ft_
			if (game_val == 10)
			{
				ft_putstr("Congrats! You got a new highscore!");
				break;
			}
			else
			{
				ft_putnbr(game_val);
				break;
			}

		}
//			ft_putstr("main recv s\n");
//	else if (menu_var == 'v')
//		highscore();
//		ft_putstr(" show the v\n");
		if (menu_var == 'h')
		{
			help();
		}
//		ft_putstr(" load help plz \n");
//	else if (menu_var == 'q')
//		return(0);
//		ft_putstr(" we have a quitter\n");
//	else
//		ft_putstr(" ummm that's not an option\n");
//		highscore();
//		game();
//		score();

		menu_var = menu();
		ft_putstr(" menu repeat\n");
	}
	return 0;
}
