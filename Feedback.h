#include <iostream>
#include <cstring>

using namespace std;

class Feedback {
private:
    int feedbackID;
    string feedback;

public:	
    Feedback(int ID, string fb);
    string getFeedback();
    void displayFeedback();
};
