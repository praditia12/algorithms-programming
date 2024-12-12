#include <iostream>
#include <chrono>
#include <thread>
#include <vector>
#include <string>

void animateText(const std::string &text, int delay_ms)
{
    for (char c : text)
    {
        std::cout << c << std::flush;
        std::this_thread::sleep_for(std::chrono::milliseconds(delay_ms));
    }
    std::cout << std::endl;
}

void createFrame(const std::vector<std::string> &frame)
{
    for (const auto &line : frame)
    {
        std::cout << line << std::endl;
    }
}

void clearScreen()
{
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

int main()
{
    std::vector<std::string> frames = {
        "     .  *  .",
        "   *      *   .",
        "     * HELLO *   ",
        "   *      *   .",
        "     .  *  ."};

    for (int i = 0; i < 3; ++i)
    {
        for (const auto &frame : frames)
        {
            clearScreen();
            createFrame({frame});
            std::this_thread::sleep_for(std::chrono::milliseconds(500));
        }
    }

    animateText("Hello, World!", 100);

    return 0;
}
