
#include <iostream>
using namespace std;

int main()
{
    int checkpoints;

    // Ask for the number of checkpoints
    cout << "How many checkpoints would you like to record? ";
    cin >> checkpoints;

    while (checkpoints < 2)
    {
        cout << "Enter at least 2 checkpoints: ";
        cin >> checkpoints;
    }

    double position, time;
    double oldPosition, oldTime;
    double startPosition, startTime;

    // Get the first checkpoint
    cout << "Enter position and time for checkpoint 1: ";
    cin >> position >> time;

    startPosition = position;
    startTime = time;
    oldPosition = position;
    oldTime = time;

    // Get the rest of the checkpoints
    for (int i = 2; i <= checkpoints; i++)
    {
        cout << "Enter position and time for checkpoint " << i << ": ";
        cin >> position >> time;

        while (time <= oldTime)
        {
            cout << "Time must be greater than the last time. Try again: ";
            cin >> position >> time;
        }

        // Calculate speed between checkpoints
        double speed = (position - oldPosition) / (time - oldTime);

        cout << "Average speed from checkpoint " << i - 1
            << " to " << i << ": " << speed << " mph" << endl;

        oldPosition = position;
        oldTime = time;
    }

    // Calculate the overall speed
    double speed = (oldPosition - startPosition) / (oldTime - startTime);

    cout << "Overall average speed: " << speed << " mph" << endl;

    return 0;
}
