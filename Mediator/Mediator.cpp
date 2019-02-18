#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>
using namespace std;

class User;

class ChatRoomMediator {
public:
    virtual void ShowMessage(const User& user, const string& message) = 0;
};

class ChatRoom : public ChatRoomMediator {
public:
    void ShowMessage(const User& user, const string& message) override;
};

class User {
public:
    User(const string& name, ChatRoomMediator& cm) : _name(name), _cm(cm) {}
    const string& GetName() const { return _name; }
    void Send(const string& message) { _cm.ShowMessage(*this, message); }
private:
    string _name;
    ChatRoomMediator& _cm;
};

void ChatRoom::ShowMessage(const User &user, const string& message) {
    time_t now = time(nullptr);
    cout << put_time(localtime(&now), "%Y-%m-%d %H:%M:%S") << " [" << user.GetName() << "]: " << message << endl;
}

int main()
{
    ChatRoom m;
    User andy("Andy Orhe", m);
    User helen("Helen Wire", m);
    andy.Send("Hola!");
    helen.Send("Hola!!");
}

