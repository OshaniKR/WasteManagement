#pragma once

#include "WasteItem.h"

using namespace std;

class WasteList {
public:
    WasteList();
    void categorizeWaste();
    void addWaste(const string& name, double weight);
    
    void removeWaste();
    void displayWaste();
    void editWaste(const string& name, const string& newName, double newWeight);
    WasteItem* getHead();


private:
    WasteItem* head;
    string getWasteType(const string& itemName) const;
    
    bool isPaperAndCardboard(const string& itemName) const;
    bool isPlasticGlassCans(const string& itemName) const;
    bool isGardenWaste(const string& itemName) const;
    bool isFoodWaste(const string& itemName) const;
};
