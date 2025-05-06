#include <iostream>
#include <vector>
using namespace std;

class Plugin {
public:
    virtual void execute() = 0;
};

class PluginA : public Plugin {
public:
    void execute() {
        cout << "Plugin A executed" << endl;
    }
};

class PluginB : public Plugin {
public:
    void execute() {
        cout << "Plugin B executed" << endl;
    }
};

int main() {
    vector<Plugin*> plugins;
    plugins.push_back(new PluginA());
    plugins.push_back(new PluginB());

    for (auto plugin : plugins) {
        plugin->execute();
    }

    for (auto plugin : plugins) {
        delete plugin;
    }
    return 0;
}
