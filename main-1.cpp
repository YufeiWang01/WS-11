#include <iostream>
#include "BrowserHistory.h"

int main(){
    BrowserHistory browser;

    browser.visitPage("google.com");
    browser.visitPage("youtube.com");
    browser.visitPage("github.com");

    std::cout << "Current page: " << browser.getCurrentPage() << std::endl;

    browser.goBack();
    std::cout << "After going back: " << browser.getCurrentPage() << std::endl;

    browser.goBack();
    std::cout << "After going back again: " << browser.getCurrentPage() << std::endl;

    return 0;
}