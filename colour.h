#ifndef SAND_LEEK_COLOUR_H
#define SAND_LEEK_COLOUR_H

#ifndef SAND_LEEK_DISABLE_COLOUR

#define ANSI_ESC        "\x1b["
#define COLOUR_BLACK    ANSI_ESC"30m"
#define COLOUR_RED      ANSI_ESC"31m"
#define COLOUR_GREEN    ANSI_ESC"32m"
#define COLOUR_YELLOW   ANSI_ESC"33m"
#define COLOUR_BLUE     ANSI_ESC"34m"
#define COLOUR_MAGENTA  ANSI_ESC"35m"
#define COLOUR_CYAN     ANSI_ESC"36m"
#define COLOUR_WHITE    ANSI_ESC"37m"

#define COLOUR_BBLACK   ANSI_ESC"1;30m"
#define COLOUR_BRED     ANSI_ESC"1;31m"
#define COLOUR_BGREEN   ANSI_ESC"1;32m"
#define COLOUR_BYELLOW  ANSI_ESC"1;33m"
#define COLOUR_BBLUE    ANSI_ESC"1;34m"
#define COLOUR_BMAGENTA ANSI_ESC"1;35m"
#define COLOUR_BCYAN    ANSI_ESC"1;36m"
#define COLOUR_BWHITE   ANSI_ESC"1;37m"

#define COLOUR_BOLD     ANSI_ESC"1m"
#define COLOUR_BOLD_OFF ANSI_ESC"22m"

#define COLOUR_OFF      ANSI_ESC"39m"
#define COLOUR_ALL_OFF  ANSI_ESC"0m"

#define COLOUR_ERASE    ANSI_ESC"2K"

#else /* ifndef SAND_LEEK_DISABLE_COLOUR */

#define ANSI_ESC        ""
#define COLOUR_BLACK    ""
#define COLOUR_RED      ""
#define COLOUR_GREEN    ""
#define COLOUR_YELLOW   ""
#define COLOUR_BLUE     ""
#define COLOUR_MAGENTA  ""
#define COLOUR_CYAN     ""
#define COLOUR_WHITE    ""

#define COLOUR_BBLACK   ""
#define COLOUR_BRED     ""
#define COLOUR_BGREEN   ""
#define COLOUR_BYELLOW  ""
#define COLOUR_BBLUE    ""
#define COLOUR_BMAGENTA ""
#define COLOUR_BCYAN    ""
#define COLOUR_BWHITE   ""

#define COLOUR_BOLD     ""
#define COLOUR_BOLD_OFF ""

#define COLOUR_OFF      ""
#define COLOUR_ALL_OFF  ""

#define COLOUR_ERASE    ""

#endif /* ifndef SAND_LEEK_DISABLE_COLOUR */

#endif /* #ifndef SAND_LEEK_COLOUR_H */
