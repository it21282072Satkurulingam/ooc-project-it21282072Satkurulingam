#include<iostram>
#include "Feedback.h"
#include<cstring>

using namespace std;

Feedback::Feedback(int ID, string fb) 
{
    feedbackID = ID;
    feedback = fb;
}

string Feedback::getFeedback() 
{
    return feedback;
}

void Feedback::displayFeedback() 
{
    cout << "Feedback ID: " << feedbackID << endl << "Feedback: " << feedback << endl;
}
