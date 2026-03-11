#include<iostream>
#include<string>
using namespace std;

class Logger{
    Logger(){
        cout<<"Logger initialized, hardware coms estb"<<endl;
    }
    public:
    Logger(const Logger&) = delete; // Prevent copying
    void operator=(const Logger&)=delete;

    static Logger& getInstance(){
        static Logger instance;
        return instance;
    }

    void log(string msg){
        cout<<"LOG: "<<msg<<endl;
    }

};

int main(){
    Logger::getInstance().log("system started");
    return 0;
}