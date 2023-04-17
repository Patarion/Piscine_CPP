//
// Created by Jasmin Gagnon on 3/6/23.
//
#include "Span.hpp"

int main (void)
{
    Span tab(5);
    Span tab2(10);

    tab.addNumber(-5);
    tab.addNumber(-16);
    tab.addNumber(0);
    tab.addNumber(-15);
    tab.addNumber(-10);
    tab.addNumber(20);

    tab2.fullTab();
	tab.showTabSorted();
    std::cout << tab.shortestSpan() << std::endl;
    std::cout << tab.longestSpan() << std::endl;
    tab2.showTabSorted();
    std::cout << tab2.longestSpan() << std::endl;
    std::cout << tab2.shortestSpan() << std::endl;
}