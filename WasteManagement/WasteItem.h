#pragma once
#include <string>

struct WasteItem {
    std::string name;
    double weight;
    WasteItem* next;
};