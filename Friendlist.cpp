<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

class FriendList
{
    vector<string> friends;

public:
    FriendList()
    {
        cout << "New Friendlist utilized..." << endl;
    }

    void addFriend(const string &name)
    {
        friends.push_back(name);
        cout << "Friend added successfully" << endl;
    }

    void removeFriend(const string &name)
    {
        auto it = find(friends.begin(), friends.end(), name);
        if (it != friends.end())
        {
            friends.erase(it);
            cout << "Friend removed successfully" << endl;
        }
        else
        {
            cout << name << " does not exist.." << endl;
        }
    }

    void displayFriend() const
    {
        if (friends.empty())
        {
            cout << "There is no friend in the list" << endl;
        }
        else
        {
            cout << "List of all friends..." << endl;
            for (size_t i = 0; i < friends.size(); ++i)
            {
                cout << (i + 1) << ": " << friends[i] << endl;
            }
            cout << endl;
        }
    }
};

int main()
{
    char choice;
    string name;
    FriendList friendList;

    while (true)
    {
        cout << "Choose your option..." << "\n a) Add a Friend" << "\n b) Remove a Friend" << "\n c) Display Friend" << "\n d) Exit" << endl;
        cin >> choice;
        cin.ignore(); // To consume the newline character after the choice input

        if (choice == 'a' || choice == 'A')
        {
            cout << "Enter Friend name: ";
            getline(cin, name);
            friendList.addFriend(name);
        }
        else if (choice == 'b' || choice == 'B')
        {
            cout << "Enter Friend name: ";
            getline(cin, name);
            friendList.removeFriend(name);
        }
        else if (choice == 'c' || choice == 'C')
        {
            friendList.displayFriend();
        }
        else if (choice == 'd' || choice == 'D')
        {
            cout << "Exiting..." << endl;
            break;
        }
    }

    return 0;
}
=======
#include <bits/stdc++.h>
using namespace std;

class FriendList
{
    vector<string> friends;

public:
    FriendList()
    {
        cout << "New Friendlist utilized..." << endl;
    }

    void addFriend(const string &name)
    {
        friends.push_back(name);
        cout << "Friend added successfully" << endl;
    }

    void removeFriend(const string &name)
    {
        auto it = find(friends.begin(), friends.end(), name);
        if (it != friends.end())
        {
            friends.erase(it);
            cout << "Friend removed successfully" << endl;
        }
        else
        {
            cout << name << " does not exist.." << endl;
        }
    }

    void displayFriend() const
    {
        if (friends.empty())
        {
            cout << "There is no friend in the list" << endl;
        }
        else
        {
            cout << "List of all friends..." << endl;
            for (size_t i = 0; i < friends.size(); ++i)
            {
                cout << (i + 1) << ": " << friends[i] << endl;
            }
            cout << endl;
        }
    }
};

int main()
{
    char choice;
    string name;
    FriendList friendList;

    while (true)
    {
        cout << "Choose your option..." << "\n a) Add a Friend" << "\n b) Remove a Friend" << "\n c) Display Friend" << "\n d) Exit" << endl;
        cin >> choice;
        cin.ignore(); // To consume the newline character after the choice input

        if (choice == 'a' || choice == 'A')
        {
            cout << "Enter Friend name: ";
            getline(cin, name);
            friendList.addFriend(name);
        }
        else if (choice == 'b' || choice == 'B')
        {
            cout << "Enter Friend name: ";
            getline(cin, name);
            friendList.removeFriend(name);
        }
        else if (choice == 'c' || choice == 'C')
        {
            friendList.displayFriend();
        }
        else if (choice == 'd' || choice == 'D')
        {
            cout << "Exiting..." << endl;
            break;
        }
    }

    return 0;
}
>>>>>>> 743ed38 (cf)
