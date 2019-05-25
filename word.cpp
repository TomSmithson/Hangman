//
//  word.cpp
//  hangman
//
//  Created by Tom Smithson on 25/05/2019.
//  Copyright © 2019 Tom Smithson. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <fstream>
#include <ctime>
#include <vector>
#include "word.h"

Word::Word() {
    Word::getWordsFromFile();
    Word::generateWords();
}

void Word::getWordsFromFile() {
    std::ifstream file;
    file.open("words.txt", std::ios::in);
    for (std::string word; file >> word;) {
        fileWords.push_back(word);
    }
    size = fileWords.size();
}

std::vector<std::string> Word::generateWords() {
    for (int i = 0; i < size; i++) {
        words.push_back(fileWords[i]);
    }
    return words;
}

std::string Word::getWord() {
    int index = (std::rand() % fileWords.size());
    word = fileWords[index];
    fileWords.erase(fileWords.begin() + index);
    return word;
}

long Word::getSize() {
    return size;
}
