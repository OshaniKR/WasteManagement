#include "WasteList.h"
#include <iostream>

using namespace std;


WasteList::WasteList() : head(nullptr) {}

void WasteList::categorizeWaste() {
    WasteItem* current = head;
    while (current) {
        string type = getWasteType(current->name);
        cout << "Item: " << current->name << ", Type: " << type << endl;
        current = current->next;
    }
}

void WasteList::addWaste(const string& name, double weight) {
    WasteItem* newItem = new WasteItem;
    newItem->name = name;
    newItem->weight = weight;
    newItem->next = head;
    head = newItem;
}

void WasteList::removeWaste() {
    if (head) {
        WasteItem* temp = head;
        head = head->next;
        delete temp;
    }
    else {
        cout << "No waste items to remove from the list." << endl;
    }
}

void WasteList::displayWaste() {
    WasteItem* current = head;
    cout << "Waste List:" << endl;
    while (current) {
        std::cout << "Name: " << current->name << ", Weight: " << current->weight << " kg" << endl;
        current = current->next;
    }
}

void WasteList::editWaste(const string& name, const string& newName, double newWeight) {
    WasteItem* current = head;
    while (current) {
        if (current->name == name) {
            current->name = newName;
            current->weight = newWeight;
            cout << "Updated waste item details." << endl;
            return;
        }
        current = current->next;
    }
    cout << "Waste item not found." << endl;
}

WasteItem* WasteList::getHead() {
    return head;
}
string WasteList::getWasteType(const string& itemName) const {
    // Implementation for getWasteType function
    // ...std::string getWasteType(const std::string& itemName) const {
    if (isPaperAndCardboard(itemName)) {
        return "blue";
    }
    else if (isPlasticGlassCans(itemName)) {
        return "red";
    }
    else if (isGardenWaste(itemName)) {
        return "green";
    }
    else if (isFoodWaste(itemName)) {
        return "yellow";
    }
    else {
        return "black";
    }

}

bool WasteList::isPaperAndCardboard(const string& itemName) const {
    // Implementation for isPaperAndCardboard function
   
    return (itemName == "newspapers" || itemName == "cardboard" || itemName == "junk mail" ||
        itemName == "magazines" || itemName == "catalogues" || itemName == "telephone directories");


}

bool WasteList::isPlasticGlassCans(const string& itemName) const {
    // Implementation for isPlasticGlassCans function
    return (itemName == "plastic" || itemName == "glass" || itemName == "cans");

}

bool WasteList::isGardenWaste(const string& itemName) const {
    // Implementation for isGardenWaste function
    return (itemName == "flowers" || itemName == "plants" || itemName == "leaves");
}

bool WasteList::isFoodWaste(const string& itemName) const {
    // Implementation for isFoodWaste function
    return (itemName == "food waste");
}