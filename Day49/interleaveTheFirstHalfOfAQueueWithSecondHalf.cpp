// Question Link->https://practice.geeksforgeeks.org/problems/interleave-the-first-half-of-the-queue-with-second-half/1


class Solution{
    public:
    vector<int> rearrangeQueue(queue<int> q) {
    int n = q.size();
    int half_size = n / 2;

    queue<int> first_half, second_half;

    for (int i = 0; i < half_size; i++) {
        first_half.push(q.front());
        q.pop();
    }

    while (!q.empty()) {
        second_half.push(q.front());
        q.pop();
    }

    vector<int> result;
    while (!first_half.empty() || !second_half.empty()) {
        if (!first_half.empty()) {
            result.push_back(first_half.front());
            first_half.pop();
        }
        if (!second_half.empty()) {
            result.push_back(second_half.front());
            second_half.pop();
        }
    }

    return result;
}

 
};