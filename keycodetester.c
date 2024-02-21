#include <ncurses.h>

int main(void)
{
    initscr(); //determines where we are
    cbreak();
    noecho();
    scrollok(stdscr, TRUE);
    while (1) {
        int in1 = getch();
        if (in1 != ERR) {
            printw("%d\n", in1); //formmatted print ensures text remains on the left
        }
        refresh();
    }
}
