
struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };
 
class Solution {
public:
    bool hasCycle(ListNode* head) {
        if (head == nullptr || head->next == nullptr)
            return false;
        ListNode* first = head;
        ListNode* second = head->next;
        while (first && second) 
        {
            if (first == second)
                return true;
            first = first->next;
            if (second->next == nullptr)
                return false;
            second = second->next->next;
        }
        return false;
        
    }
};