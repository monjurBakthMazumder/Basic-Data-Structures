#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 1. Initial vector with 5 elements. Size = 5, Capacity = 5.
    vector<int> v = {10, 20, 50, 25, 27};
    
    // 2. We add one more element. 
    // Since the original "box" was full, the vector doubles its capacity 
    // to make room for future growth.
    v.push_back(10); 

    // 3. .capacity() -> Total slots currently reserved in memory.
    // Usually doubles (5 -> 10) or grows significantly.
    cout << v.capacity() << endl; 

    // 4. .max_size() -> The absolute limit of elements your system/compiler allows.
    // This is a massive number (billions).
    cout << v.max_size() << endl; 

    // 5. .empty() -> Returns 1 (true) if vector is empty, 0 (false) if not.
    cout << v.empty() << endl; 

    // 6. .size() -> The number of elements actually inside it right now (currently 6).
    cout << v.size() << endl; 

    // 7. .clear() -> Removes all elements. 
    // Size becomes 0, but Capacity usually stays the same!
    v.clear();
    cout << v.size() << endl; 

    // 8. .resize(12, 10) -> Forces the size to be 12. 
    // If the vector was smaller, it adds new elements with the value '10'.
    v.resize(12, 10);
    cout << v.size() << endl; 

    return 0;
}