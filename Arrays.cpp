#include <iostream>
#include <vector>
#include <random>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;
int MenuPrompt();
void InSorSearch();
void MergBin();
void displayArray(const vector<int>& arr);
void insertionSort(vector<int>& arr);

int choice;
void ArraysProg()
{
    int SecondarymenuC;
    do
    {
        MenuPrompt();
        switch (choice)
        {
        case 1: InSorSearch();
            break;
        case 2:MergBin();
            break;
        case 3:
        default:
            break;
        }
        if (choice != 3)
        {
            cout << "Do yo want to go back to the main menu?\n\n"
                << "1.Yes\n\n"
                << "2.No\n\n"
                << "=> ";
            cin >> SecondarymenuC;
            while (SecondarymenuC < 1 || SecondarymenuC>2)
            {
                cout << "Please place a valid input",
                    cin >> SecondarymenuC;
            }
            if (SecondarymenuC == 2)
                choice = 3;
        }
        
    } while (choice !=3);
}
int MenuPrompt()
{
    using namespace std;

    cout << "\n\n*******************************************************************\n\n"
        << "Welcome to the Main Menu Which Program will you be executing?\n\n"
        << "1.Input Sort Search Display Program\n\n"
        << "2.Merging arrays and binary searching\n\n"
        << "3.Exit\n\n"
        << "=>",
        cin >> choice;
    cout << "\n\n*******************************************************************\n\n";

    while (choice < 1 || choice>3)
    {
        cout << "Please place a valid input from the menu";
        cin >> choice;
    }
    return choice;
}

vector<int> makeArray(int n) {
    vector<int> arr(n);
    default_random_engine generator(time(0));
    uniform_int_distribution<int> distribution(0, 999);

    for (int i = 0; i < n; ++i) {
        arr[i] = distribution(generator);
    }

    return arr;
}

void insertionSort(vector<int>& arr)
{
    for (int i = 1; i < arr.size(); ++i) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            --j;
        }

        arr[j + 1] = key;
    }
}

int binarySearch(const vector<int>& arr, int key)
{
    int low = 0;
    int high = arr.size() - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key) {
            return mid;
        }
        else if (arr[mid] < key) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    return -1;
}

void InSorSearch()
{
    int val;
    cout << "Enter an integer number between 1 and 30: ";
    cin >> val;

    while (val < 1 || val > 30)
    {
        cout << "Invalid input, pleas select a number from 1 to 30" << endl;
        cin >> val;
    }

    vector<int> RandArr = makeArray(val);
    cout << "Array before sorting: ";
    for (const auto& num : RandArr) {
        cout << num << " ";
    }
    cout << endl;

    insertionSort(RandArr);
    cout << "Array after sorting: ";
    for (const auto& num : RandArr) {
        cout << num << " ";
    }
    cout << endl;

    int key;
    cout << "Enter an integer key: ";
    cin >> key;

    int index = binarySearch(RandArr, key);
    if (index != -1) {
        cout << "Key found at index: " << index << endl;
    }
    else {
        cout << "Key not found." << endl;
    }

    int min = RandArr.front();
    int max = RandArr.back();
    double median = RandArr[RandArr.size() / 2];
    double mode = 0.0;
    double sum = 0.0;

    for (const auto& num : RandArr)
    {
        sum += num;
    }

    double average = sum / RandArr.size();

    cout << "Min: " << min << endl;
    cout << "Max: " << max << endl;
    cout << "Median: " << median << endl;
    cout << "Mode: " << mode << endl;
    cout << "Average: " << average << endl;

}
void makeArray1(vector<int>& arr, int n)
{

    unsigned seed = time(0);
    srand(seed);
    for (int i = 0; i < n; ++i)
    {
        int Data = rand() % 99 + 1;
        arr.push_back(Data);
    }
}
void makeArray2(vector<int>& arr, int n)
{

    unsigned seed = time(0);
    srand(seed);
    for (int i = 0; i < n; ++i)
    {

        int Data = rand() % 99 + 1;
        arr.push_back(Data);

    }
}

void displayArray(const vector<int>& arr) {
    for (int i = 0; i < arr.size(); ++i) {
        cout << arr[i] << " ";
    }
    cout << "\n" << endl;
}

vector<int> mergeArrays(const vector<int>& arr1, const vector<int>& arr2) {
    vector<int> merged(arr1);
    merged.insert(merged.end(), arr2.begin(), arr2.end());
    insertionSort(merged);
    return merged;
}

int findMin(const vector<int>& arr) {
    int min = arr[0];
    for (int i = 1; i < arr.size(); ++i) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int findMax(const vector<int>& arr) {
    int max = arr[0];
    for (int i = 1; i < arr.size(); ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

double calculateMean(const vector<int>& arr) {
    double sum = 0;
    for (int i = 0; i < arr.size(); ++i) {
        sum += arr[i];
    }
    return sum / arr.size();
}

int findMedian(const vector<int>& arr) {
    int size = arr.size();
    if (size % 2 == 0) {
        return (arr[size / 2 - 1] + arr[size / 2]) / 2;
    }
    else {
        return arr[size / 2];
    }
}

vector<int> findMode(const vector<int>& arr) {
    vector<int> mode;
    vector<int> counts(arr.size(), 0);

    for (int i = 0; i < arr.size(); ++i) {
        for (int j = i + 1; j < arr.size(); ++j) {
            if (arr[j] == arr[i]) {
                counts[i]++;
            }
        }
    }

    int maxCount = 0;
    for (int i = 0; i < counts.size(); ++i) {
        if (counts[i] > maxCount) {
            maxCount = counts[i];
        }
    }

    for (int i = 0; i < arr.size(); ++i) {
        if (counts[i] == maxCount) {
            mode.push_back(arr[i]);
        }
    }

    return mode;
}

void MergBin() {
    int valn, valm;
    cout << "Enter an integer between 1 and 20 for the first array: ";
    cin >> valn;

    while (valn < 1 || valn > 20)
    {
        cout << "Invalid input." << endl;
        cin >> valn;
    }

    cout << "Enter an integer between 1 and 20 for the second array: ";
    cin >> valm;

    while (valm < 1 || valm > 20)
    {
        cout << "Invalid input." << endl;
        cin >> valm;
    }

    vector<int> arr1, arr2;
    makeArray1(arr1, valn);
    cout << "First Array before sorting: ";
    displayArray(arr1);
    insertionSort(arr1);
    cout << "First Array after sorting: ";
    displayArray(arr1);
    makeArray2(arr2, valm);
    cout << "Second Array before sorting: ";
    displayArray(arr2);
    insertionSort(arr2);
    cout << "Second Array after sorting: ";
    displayArray(arr2);

    vector<int> merged = mergeArrays(arr1, arr2);
    cout << "Merged Array before sorting: ";
    displayArray(merged);
    insertionSort(merged);
    cout << "Merged Array after sorting: ";
    displayArray(merged);

    int key;
    cout << "Enter an integer key: ";
    cin >> key;

    int index_arr1 = binarySearch(arr1, key);
    int index_arr2 = binarySearch(arr2, key);
    int index_merged = binarySearch(merged, key);

    if (index_arr1 != -1) {
        cout << "Key found at index " << index_arr1 << " in the first array." << endl;
    }

    if (index_arr2 != -1) {
        cout << "Key found at index " << index_arr2 << " in the second array." << endl;
    }

    if (index_merged != -1) {
        cout << "Key found at index " << index_merged << " in the merged array." << endl;
    }

    if (index_arr1 == -1 && index_arr2 == -1 && index_merged == -1) {
        cout << "Key not found in any of the arrays." << endl;
    }

    cout << "First Array - Min: " << findMin(arr1) << endl;
    cout << "First Array - Max: " << findMax(arr1) << endl;
    cout << "First Array - Median: " << findMedian(arr1) << endl;

    vector<int> modeArr1 = findMode(arr1);
    cout << "First Array - Mode: ";
    displayArray(modeArr1);

    cout << "First Array - Average: " << calculateMean(arr1) << std::endl;

    cout << "Second Array - Min: " << findMin(arr2) << endl;
    cout << "Second Array - Max: " << findMax(arr2) << endl;
    cout << "Second Array - Median: " << findMedian(arr2) << endl;

    vector<int> modeArr2 = findMode(arr2);
    cout << "Second Array - Mode: ";
    displayArray(modeArr2);

    cout << "Second Array - Average: " << calculateMean(arr2) << endl;

    cout << "Merged Array - Min: " << findMin(merged) << endl;
    cout << "Merged Array - Max: " << findMax(merged) << endl;
    cout << "Merged Array - Median: " << findMedian(merged) << endl;

    std::vector<int> modeMerged = findMode(merged);
    std::cout << "Merged Array - Mode: ";
    displayArray(modeMerged);

    cout << "Merged Array - Average: " << calculateMean(merged) << endl;
}

