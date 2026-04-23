#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

void printList(const char* header, char** list, int count) {
    cout << "[" << header << "]" << endl;
    for (int i = 0; i < count; i++)
        cout << "[" << i << "] " << list[i] << endl;
}

int main() {
    const int MAX = 5;
    char** list = new char* [MAX];
    int count = 0;

    // 1. Store five words
    const char* words[] = { "alpha", "bravo", "charlie", "delta", "echo" };
    for (int i = 0; i < MAX; i++) {
        list[i] = new char[strlen(words[i]) + 1];
        strcpy(list[i], words[i]);
        count++;
    }

    printList("Initial Dictionary", list, count);

    // 2. Search for "delta"
    const char* target = "delta";
    int foundIdx = -1;
    for (int i = 0; i < count; i++) {
        if (strcmp(list[i], target) == 0) {
            foundIdx = i;
            break;
        }
    }
    cout << "[Search Result]" << endl;
    if (foundIdx != -1)
        cout << target << " found at index " << foundIdx << endl;
    else
        cout << target << " not found" << endl;

    // 3. Modify index 1 from "bravo" to "blueberry"
    const char* newWord = "blueberry";
    delete[] list[1];
    list[1] = new char[strlen(newWord) + 1];
    strcpy(list[1], newWord);

    printList("After Update", list, count);

    // 4. Delete "charlie" and shift left
    const char* toDelete = "charlie";
    int delIdx = -1;
    for (int i = 0; i < count; i++) {
        if (strcmp(list[i], toDelete) == 0) {
            delIdx = i;
            break;
        }
    }
    if (delIdx != -1) {
        delete[] list[delIdx];
        for (int i = delIdx; i < count - 1; i++)
            list[i] = list[i + 1];
        list[count - 1] = nullptr;
        count--;
    }

    printList("After Delete", list, count);

    // Free all memory
    for (int i = 0; i < count; i++)
        delete[] list[i];
    delete[] list;

    return 0;
}
