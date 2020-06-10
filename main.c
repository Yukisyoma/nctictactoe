#include <cursesw.h>
#include <curses.h>
#include <stdbool.h>
#include <locale.h>

// Definitions of error codes
#define draw_error -1

int main(int argc, char * argv[])
{
int err_code;
// Number of rows and columns
int rows, cols;
	setlocale(LC_ALL, "");
	// Initializing ncurses and configuring it
	initscr();
	// Disabling line buffering
	cbreak();
	// Disabling echoing
	noecho();
	// Allowing more chars input
	keypad(stdscr, TRUE);

	getmaxyx(stdscr, rows, cols);
	printw("Tic-tac-toe\n");
	printw("Use number keys to place a cross/circle\n");
	refresh();
	getch();
	return 0;
}
