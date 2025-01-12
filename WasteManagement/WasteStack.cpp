// WasteStack.cpp
#include "WasteStack.h"
#include <iostream>

using namespace std;

WasteStack::WasteStack() : top(-1) {}

void WasteStack::push(const string& name, double capacity, const string& location, const string& type) {
    if (top < MAX_STACK_SIZE - 1) {
        WasteBin bin;
        bin.name = name;
        bin.capacity = capacity;
        bin.fillLevel = 0.0;  // Initial fill level is zero
        bin.location = location;
        bin.type = type;
        stack[++top] = bin;
    }
    else {
        cout << "Stack is full. Cannot add more waste bins." << endl;
    }
}

WasteBin WasteStack::pop() {
    if (top >= 0) {
        return stack[top--];
    }
    else {
        cout << "Stack is empty." << endl;
        WasteBin emptyBin; // Return an empty bin to indicate the stack is empty
        return emptyBin;
    }
}

void WasteStack::displayStack() {
    cout << "Waste Bins:" << endl;
    for (int i = top; i >= 0; i--) {
        cout << "Bin " << stack[i].name << ": Location - " << stack[i].location
            << ", Type - " << stack[i].type << ", Fill Level - " << stack[i].fillLevel << " / " << stack[i].capacity << " kg" << endl;
    }
}

void WasteStack::configureBin(const string& name, double capacity, const string& location, const string& type) {
    for (int i = top; i >= 0; i--) {
        if (stack[i].name == name) {
            stack[i].capacity = capacity;
            stack[i].location = location;
            stack[i].type = type;
            cout << "Updated bin parameters." << endl;
            return;
        }
    }
    cout << "Bin not found." << endl;
}

int WasteStack::getTop() const {
    return top;
}

const WasteBin* WasteStack::getStack() const {
    return stack;
}
