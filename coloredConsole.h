#ifndef COLORED_CONSOLE_H
#define COLORED_CONSOLE_H
#include <ostream>

namespace color {

    template <class CharT, class Traits>
    constexpr std::basic_ostream<CharT, Traits>& reset(std::basic_ostream<CharT, Traits>&);

    template <class CharT, class Traits>
    constexpr std::basic_ostream<CharT, Traits>& black(std::basic_ostream<CharT, Traits>&);

    template <class CharT, class Traits>
    constexpr std::basic_ostream<CharT, Traits>& red(std::basic_ostream<CharT, Traits>&);

    template <class CharT, class Traits>
    constexpr std::basic_ostream<CharT, Traits>& green(std::basic_ostream<CharT, Traits>&);

    template <class CharT, class Traits>
    constexpr std::basic_ostream<CharT, Traits>& yellow(std::basic_ostream<CharT, Traits>&);

    template <class CharT, class Traits>
    constexpr std::basic_ostream<CharT, Traits>& blue(std::basic_ostream<CharT, Traits>&);

    template <class CharT, class Traits>
    constexpr std::basic_ostream<CharT, Traits>& magenta(std::basic_ostream<CharT, Traits>&);

    template <class CharT, class Traits>
    constexpr std::basic_ostream<CharT, Traits>& cyan(std::basic_ostream<CharT, Traits>&);

    template <class CharT, class Traits>
    constexpr std::basic_ostream<CharT, Traits>& white(std::basic_ostream<CharT, Traits>&);

    template <class CharT, class Traits>
    constexpr std::basic_ostream<CharT, Traits>& bright_black(std::basic_ostream<CharT, Traits>&);

    template <class CharT, class Traits>
    constexpr std::basic_ostream<CharT, Traits>& bright_red(std::basic_ostream<CharT, Traits>&);

    template <class CharT, class Traits>
    constexpr std::basic_ostream<CharT, Traits>& bright_green(std::basic_ostream<CharT, Traits>&);

    template <class CharT, class Traits>
    constexpr std::basic_ostream<CharT, Traits>& bright_yellow(std::basic_ostream<CharT, Traits>&);

    template <class CharT, class Traits>
    constexpr std::basic_ostream<CharT, Traits>& bright_blue(std::basic_ostream<CharT, Traits>&);

    template <class CharT, class Traits>
    constexpr std::basic_ostream<CharT, Traits>& bright_magenta(std::basic_ostream<CharT, Traits>&);

    template <class CharT, class Traits>
    constexpr std::basic_ostream<CharT, Traits>& bright_cyan(std::basic_ostream<CharT, Traits>&);

    template <class CharT, class Traits>
    constexpr std::basic_ostream<CharT, Traits>& bright_white(std::basic_ostream<CharT, Traits>&);

    template <class CharT, class Traits>
    constexpr std::basic_ostream<CharT, Traits>& bg_black(std::basic_ostream<CharT, Traits>&);

    template <class CharT, class Traits>
    constexpr std::basic_ostream<CharT, Traits>& bg_red(std::basic_ostream<CharT, Traits>&);

    template <class CharT, class Traits>
    constexpr std::basic_ostream<CharT, Traits>& bg_green(std::basic_ostream<CharT, Traits>&);

    template <class CharT, class Traits>
    constexpr std::basic_ostream<CharT, Traits>& bg_yellow(std::basic_ostream<CharT, Traits>&);

    template <class CharT, class Traits>
    constexpr std::basic_ostream<CharT, Traits>& bg_blue(std::basic_ostream<CharT, Traits>&);

    template <class CharT, class Traits>
    constexpr std::basic_ostream<CharT, Traits>& bg_magenta(std::basic_ostream<CharT, Traits>&);

    template <class CharT, class Traits>
    constexpr std::basic_ostream<CharT, Traits>& bg_cyan(std::basic_ostream<CharT, Traits>&);

    template <class CharT, class Traits>
    constexpr std::basic_ostream<CharT, Traits>& bg_white(std::basic_ostream<CharT, Traits>&);

    template <class CharT, class Traits>
    constexpr std::basic_ostream<CharT, Traits>& bg_bright_black(std::basic_ostream<CharT, Traits>&);

    template <class CharT, class Traits>
    constexpr std::basic_ostream<CharT, Traits>& bg_bright_red(std::basic_ostream<CharT, Traits>&);

    template <class CharT, class Traits>
    constexpr std::basic_ostream<CharT, Traits>& bg_bright_green(std::basic_ostream<CharT, Traits>&);

    template <class CharT, class Traits>
    constexpr std::basic_ostream<CharT, Traits>& bg_bright_yellow(std::basic_ostream<CharT, Traits>&);

    template <class CharT, class Traits>
    constexpr std::basic_ostream<CharT, Traits>& bg_bright_blue(std::basic_ostream<CharT, Traits>&);

    template <class CharT, class Traits>
    constexpr std::basic_ostream<CharT, Traits>& bg_bright_magenta(std::basic_ostream<CharT, Traits>&);

    template <class CharT, class Traits>
    constexpr std::basic_ostream<CharT, Traits>& bg_bright_cyan(std::basic_ostream<CharT, Traits>&);

    template <class CharT, class Traits>
    constexpr std::basic_ostream<CharT, Traits>& bg_bright_white(std::basic_ostream<CharT, Traits>&);

    template <class CharT, class Traits>
    constexpr std::basic_ostream<CharT, Traits>& bold(std::basic_ostream<CharT, Traits>&);

    template <class CharT, class Traits>
    constexpr std::basic_ostream<CharT, Traits>& underline(std::basic_ostream<CharT, Traits>&);

    template <class CharT, class Traits>
    constexpr std::basic_ostream<CharT, Traits>& reversed(std::basic_ostream<CharT, Traits>&);
}

template <class CharT, class Traits>
constexpr std::basic_ostream<CharT, Traits>& clearConsole(std::basic_ostream<CharT, Traits>&);

#endif
