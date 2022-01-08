#include <signal.h>
#include <stdbool.h>
#include <X11/extensions/Xfixes.h>

Display *dis;
sig_atomic_t gSignalStatus = false;

void toggle_cursor(int signal)
{
    gSignalStatus = signal;
}

int main(void)
{
    int show_cursor = false;
    struct sigaction act;
    sigset_t mask;

    if (!(dis = XOpenDisplay(NULL))) {
        return(1);
    }

    act.sa_handler = toggle_cursor;
    sigaction(SIGUSR1, &act, NULL);
    sigemptyset(&mask);

    while (true) {
        if (show_cursor)
            XFixesShowCursor(dis, DefaultRootWindow(dis));
        else
            XFixesHideCursor(dis, DefaultRootWindow(dis));

        XFlush(dis);
        show_cursor = !show_cursor;
        gSignalStatus = false;
        while (!gSignalStatus)
            sigsuspend(&mask);

    }
    return(0);

}
