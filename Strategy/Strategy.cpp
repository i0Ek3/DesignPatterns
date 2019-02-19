#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <memory>
using namespace std;

class SortStrategy {
public:
    virtual void Sort(vector<int>& v) = 0;
};

class BubbleSort : public SortStrategy {
public:
    void Sort(vector<int>& v) override {
        cout << "Using bubble sort." << endl;
        _BubbleSort(v);
    }
private:
    void _BubbleSort(vector<int>& v) {
        if (v.empty()) return ;
        using size = vector<int>::size_type;
        for (size i = 0; i != v.size(); ++i) {
            for (size j = 0; j != v.size() - 1; j++) {
                if (v[j] > v[j+1]) {
                    swap(v[j], v[j+1]);
                }
            }
        }
    }
};

class QuickSort : public SortStrategy {
public:
    void Sort(vector<int>& v) override {
        cout << "Using quick sort." << endl;
        _QuickSort(v);
    }
private:
    void _QuickSort(vector<int>& v) {
        if (v.empty()) return;
        using size = vector<int>::size_type;
        auto partition = [&v](size low, size high) {
            int pivot = v[high];
            size i = low;
            for (size j = low; j != high; ++j) {
                if (v[j] <=pivot) {
                    swap(v[i++], v[j]);
                }
            }
            swap(v[i], v[high]);
            return i;
        };

        function<void (size, size)> quickSort = [&](size low, size high) {
            if (low >= high) return ;
            size p = partition(low, high);
            quickSort(low, p - 1);
            quickSort(p + 1, high);
        };

        quickSort(0, v.size() - 1);
    }
};

class Sorter {
public:
    static void Sort(vector<int>& v, const shared_ptr<SortStrategy>& sorter) { sorter->Sort(v); }
};

int main()
{
    vector<int> v{1, 3, 2, 0, 5};

    Sorter::Sort(v, make_shared<BubbleSort>());
    for (int i : v) {
        cout << i << "  ";
    }
    cout << endl;

    Sorter::Sort(v, make_shared<QuickSort>());
    for (int i : v) {
        cout << i << "  ";
    }
    cout << endl;

}


