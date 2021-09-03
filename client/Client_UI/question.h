#pragma once
#include "constant.h"

/* Store player infomation
    * @param    id          Id of the question
    * @param    answer1     answer of question
    * @param    answer2     answer of question
    * @param    answer3     answer of question
    * @param    answer4     answer of question 
*/
class Question {
public:
    int id;
    char question[QUESTION_LENGTH];
    char answer1[ANSWER_LENGTH];
    char answer2[ANSWER_LENGTH];
    char answer3[ANSWER_LENGTH];
    char answer4[ANSWER_LENGTH];

    Question();
    Question(int id, char* question, char* answer1, char* answer2, char* answer3, char* answer4);
};
