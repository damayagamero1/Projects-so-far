#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

void printStatistics(int* array, int size);
void MedianCalc();
void ScoresArr();
void StudentScore();



using namespace std;

void VectorProg()
{
    int Menusel, Choice;
    do
    {
        cout << "Welcome to the Main menu Please select the program you would like to see\n\n";
        cout << "1.Scores no name.\n\n"
            << "2.Scores with Name\n\n"
            << "3.Median Calc\n\n"
            << "0.Exit\n\n";
        cin >> Menusel;
        switch (Menusel)
        {
        case 1:ScoresArr();
            break;
        case 2:StudentScore();
            break;
        case 3: MedianCalc();
            break;
        default:
            break;
        }
        if (Menusel != 0)
        {
            cout << "Do you want to go back to the main menu?\n\n"
                << "1.Yes\n\n"
                << "2.no\n\n";
            cin >> Choice;
            while (Choice < 1 || Choice >2)
            {
                cout << "Please place a valid input";
                cin >> Choice;
            }
            if (Choice == 2)
                Menusel = 0;
            else;
        }
        else;
    } while (Menusel != 0);

}
double findMedian(int* array, int size)
{
    if (size % 2 == 0)
    {
        // Even number of elements
        int midIndex1 = (size / 2) - 1;
        int midIndex2 = size / 2;
        double median = (static_cast<double>(array[midIndex1]) + static_cast<double>(array[midIndex2])) / 2.0;
        return median;
    }
    else
    {
        // Odd number of elements
        int midIndex = size / 2;
        double median = static_cast<double>(array[midIndex]);
        return median;
    }
}

void printStatistics(int* array, int size)
{
    int minVal = array[0];
    int maxVal = array[0];
    double sum = 0;

    // Calculate minimum, maximum, and sum
    for (int i = 0; i < size; ++i)
    {
        if (array[i] < minVal)
            minVal = array[i];
        if (array[i] > maxVal)
            maxVal = array[i];
        sum += array[i];
    }

    double average = sum / size;

    // Calculate mode
    int* frequency = new int[size];
    memset(frequency, 0, sizeof(int) * size); // Initialize the memory to zero

    int maxFrequency = 0;

    for (int i = 0; i < size; ++i)
    {
        frequency[array[i]]++;
        if (frequency[array[i]] > maxFrequency)
        {
            maxFrequency = frequency[array[i]];
        }
    }

    int modesCount = 0;
    for (int i = 0; i < size; ++i)
    {
        if (frequency[array[i]] == maxFrequency)
            modesCount++;
    }

    int* modes = new int[modesCount];
    int index = 0;
    for (int i = 0; i < size; ++i)
    {
        if (frequency[array[i]] == maxFrequency)
            modes[index++] = array[i];
    }

    double median = findMedian(array, size);

    cout.precision(2);
    cout << "Minimum: " << minVal << endl;
    cout << "Maximum: " << maxVal << endl;
    cout << "Average/Mean: " << fixed << average << endl;
    cout << "Mode(s): ";
    for (int i = 0; i < modesCount; ++i)
    {
        cout << modes[i];
        if (i != modesCount - 1)
            cout << ", ";
    }
    cout << endl;
    cout << "Median: " << median << endl;

}
void MedianCalc()
{
    int size;

    cout << "Enter the size of the array: ";
    cin >> size;

    // Validate the input
    while (size <= 0)
    {
        cout << "Invalid size. Please enter a positive value: ";
        cin >> size;
    }

    int* array = new int[size];

    // Read the array data from the user
    for (int i = 0; i < size; ++i)
    {
        cout << "Enter element #" << i + 1 << ": ";
        cin >> array[i];
        while (array[i] < 0 || array[i]>100)
        {
            cout << "Place a valid input betwean 0 and 100";
            cin >> array[i];
        }
    }

    printStatistics(array, size);

    delete[] array;

}
void sortScores(string* names, int* scores, int size)
{
    for (int i = 0; i < size - 1; ++i)
    {
        for (int j = 0; j < size - i - 1; ++j)
        {
            if (scores[j] > scores[j + 1])
            {
                string tempName = names[j];
                names[j] = names[j + 1];
                names[j + 1] = tempName;

                int tempScore = scores[j];
                scores[j] = scores[j + 1];
                scores[j + 1] = tempScore;
            }
        }
    }
}

float calculateAverage(int* scores, int size)
{
    float sum = 0;
    for (int i = 0; i < size; ++i)
    {
        sum += scores[i];
    }
    return sum / size;
}

void StudentScore()
{
    int numStudents;

    cout << "Enter the number of students: ";
    cin >> numStudents;

    while (numStudents <= 0)
    {
        cout << "Invalid number of students. Please enter a positive value: ";
        cin >> numStudents;
    }

    string* names = new string[numStudents];
    int* scores = new int[numStudents];

    for (int i = 0; i < numStudents; ++i)
    {
        cout << "Enter name of student #" << i + 1 << ": ";
        cin >> names[i];

        cout << "Enter score of student #" << i + 1 << ": ";
        cin >> scores[i];

        while (scores[i] < 0 || scores[i]>100)
        {
            cout << "Invalid score. Please enter a value betwean 0 and 100: ";
            cin >> scores[i];
        }
    }

    sortScores(names, scores, numStudents);

    float average = calculateAverage(scores, numStudents);

    cout << "\nSorted scores:\n";
    for (int i = 0; i < numStudents; ++i)
    {
        cout << names[i] << ": " << scores[i] << endl;
    }
    cout << "\nAverage score: " << average << endl;

    printStatistics(scores, numStudents);


}
void sortScores2(int* scores, int size)
{
    for (int i = 0; i < size - 1; ++i)
    {
        for (int j = 0; j < size - i - 1; ++j)
        {
            if (*(scores + j) > *(scores + j + 1))
            {
                int temp = *(scores + j);
                *(scores + j) = *(scores + j + 1);
                *(scores + j + 1) = temp;
            }
        }
    }
}

float calculateAverage1(int* scores, int size)
{
    float sum = 0;
    for (int i = 0; i < size; ++i)
    {
        sum += *(scores + i);
    }
    return sum / size;
}

void ScoresArr()
{


    int numScores;

    cout << "Enter the number of test scores: ";
    cin >> numScores;


    while (numScores <= 0)
    {
        cout << "Invalid number of test scores. Please enter a value higher or equal to 0: ";
        cin >> numScores;
    }


    int* scores = new int[numScores];


    for (int i = 0; i < numScores; ++i)
    {
        cout << "Enter score #" << i + 1 << ": ";
        cin >> *(scores + i);

        while (*(scores + i) < 0 || *(scores + i) > 100)
        {
            cout << "Invalid score. Please enter a non-negative value: ";
            cin >> *(scores + i);
        }
    }


    sortScores2(scores, numScores);

    float average = calculateAverage1(scores, numScores);

    cout << "\nSorted scores:\n";
    for (int i = 0; i < numScores; ++i)
    {
        cout << *(scores + i) << " ";
    }
    cout << "\nAverage score: " << average << endl;

    printStatistics(scores, numScores);


    delete[] scores;
}

