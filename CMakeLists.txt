cmake_minimum_required(VERSION 3.26)
project(poker_analysis)

set(CMAKE_CXX_STANDARD 20)

add_executable(poker_analysis main.cpp
        Rank.h
        Suit.h
        Deck.cpp
        Deck.h
        Card.cpp
        Card.h
        CardHand.cpp
        CardHand.h
        CardHandScorer.cpp
        CardHandScorer.h
        ScoreCard.cpp
        ScoreCard.h
        image.cpp
        image.h
        CardGraphics.cpp
        CardGraphics.h
        LetterBox.cpp
        LetterBox.h
        scoreText.cpp
        scoreText.h
        PokerDisplay.cpp
        PokerDisplay.h)


target_link_libraries(poker_analysis sfml-graphics sfml-audio)

find_package(SFML 2.6 COMPONENTS graphics audio REQUIRED)