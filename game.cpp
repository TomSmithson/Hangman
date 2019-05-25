//
//  game.cpp
//  hangman
//
//  Created by Tom Smithson on 25/05/2019.
//  Copyright © 2019 Tom Smithson. All rights reserved.
//

#include <stdio.h>
#include <iostream>

#include "game.h"
#include "word.h"

Game::Game() {
    Game::GameLoop();
}

void Game::GameLoop() {
    Word w;
    std::string word = w.getWord();
    Game::converWord(word);
    std::cout << underlineWord << std::endl;
    
    while (true) {
        Game::getGuess();
        Game::checkGuess(word);
        std::cout << underlineWord << std::endl;
        bool isGuessed = Game::isWordGuessed(underlineWord);
        if (isGuessed) {
            break;
        }
    }
    std::cout << "You guessed the word, well done!" << std::endl;
}

void Game::converWord(std::string word) {
    originalWord = word;
    for (int i = 0; i < word.size(); i++) {
        underlineWord += "_";
    }
}

void Game::getGuess() {
    std::cout << "Enter your character guess: ";
    char g;
    std::cin >> g;
    guess = g;
}

void Game::checkGuess(std::string word) {
    for (int i = 0; i < word.size(); i++) {
        if (guess == word[i]) {
            Game::changeChar(guess, i);
        }
    }
}

void Game::changeChar(char guess, int pos) {
    underlineWord[pos] = guess;
}

bool Game::isWordGuessed(std::string word) {
    for (int i = 0; i < word.size(); i++) {
        if (word[i] == '_') {
            return false;
        }
    }
    return true;
}
