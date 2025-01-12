#pragma once
#include "WasteBin.h"

using namespace std;

class WasteStack {
public:
    WasteStack();
    void push(const string& name, double capacity, const string& location, const string& type);
    WasteBin pop();
    void displayStack();
    void configureBin(const string& name, double capacity, const string& location, const string& type);
    int getTop() const;
    const WasteBin* getStack() const;

private:
    static const int MAX_STACK_SIZE = 10;
    WasteBin stack[MAX_STACK_SIZE];
    int top;
};