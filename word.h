//
//  word.h
//  hangman
//
//  Created by Tom Smithson on 25/05/2019.
//  Copyright © 2019 Tom Smithson. All rights reserved.
//

#ifndef word_h
#define word_h

#include <vector>

class Word {
public:
    Word();
    void getWordsFromFile();
    std::vector<std::string> generateWords();
    std::string getWord();
    long getSize();
private:
    std::string word;
    std::vector<std::string> fileWords;
    std::vector<std::string> words;
    long size = 0;
};

#endif /* word_h */
