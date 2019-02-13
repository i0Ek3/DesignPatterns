#include <iostream>
#include <string>
using namespace std;

class Theme {
public:
    virtual string GetColor() = 0;
};

class DarkTheme : public Theme {
public:
    string GetColor() override {
        return "Dark";
    }
};

class LightTheme : public Theme {
public:
    string GetColor() override {
        return "Light";
    }
};

class WhiteTheme : public Theme {
public:
    string GetColor() override {
        return "White";
    }
};

class WebPage {
public:
    WebPage(Theme& theme) : _theme(theme) {}
    virtual string GetContent() = 0;
protected:
    Theme& _theme;
};

class About : public WebPage {
public:
    About(Theme& theme) : WebPage(theme) {}
    string GetContent() override {
        return "About page in " + _theme.GetColor();
    }
};

class Careers : public WebPage {
public:
    Careers(Theme& theme) : WebPage(theme) {}
    string GetContent() override {
        return "Careers page in " + _theme.GetColor();
    }
};

int main()
{
    DarkTheme dark;
    About about(dark);
    Careers careers(dark);

    cout << about.GetContent() << endl;
    cout << careers.GetContent() << endl;
}

