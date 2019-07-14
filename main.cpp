#include <algorithm>
#include <cstring>
#include <climits>
#include <functional>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
#include <sstream>
#include <unordered_map>


#include "../utils/VectorUtils.hpp"
#include "../utils/PrintUtils.hpp"

// https://leetcode.com/problems/design-hashmap/

// #include "../utils/HeapUtils.hpp"
// #include "../utils/BinarySearch.hpp"
// #include "../utils/TreeUtils.hpp"

using namespace std;

#pragma GCC diagnostic ignored "-Wunknown-pragmas"

// Live coding problems, watch at
// https://www.twitch.tv/yipcubed
// https://www.youtube.com/channel/UCTV_UOPu7EWXvYWsBFxMsSA/videos
//

// makes code faster, but larger. Just for LeetCode fun!
#pragma GCC optimise ("Ofast")

// makes stdin not synced so it is faster. Just for LeetCode fun!
static auto __ __attribute__((unused)) = []() {              // NOLINT
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    return nullptr;
}();

class MyHashMap {
public:
    vector<int> v;

    /** Initialize your data structure here. */
    MyHashMap() {
        v.resize(1024, -1);
    }

    /** value will always be non-negative. */
    void put(int key, int value) {
        if (key > v.size()) {
            while (key > v.size()) {
                v.resize(v.size() * 2, -1);
            }
        }
        v[key] = value;
    }

    /** Returns the value to which the specified key is mapped, or -1 if this map contains no mapping for the key */
    int get(int key) {
        if (key > v.size() || v[key] < 0)
            return -1;
        else
            return v[key];
    }


    /** Removes the mapping of the specified value key if this map contains a mapping for the key */
    void remove(int key) {
        if (key < v.size())
            v[key] = -1;

    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */

void test1() {
    MyHashMap *obj = new MyHashMap();
    obj->put(25, 10);
    int param_2 = obj->get(5);
    obj->remove(5);
    param_2 = obj->get(5);

    cout << "param: " << param_2 << endl;
}

void test2() {

}

void test3() {

}