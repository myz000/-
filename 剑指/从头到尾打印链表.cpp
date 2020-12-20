/**
*  struct ListNode {
*        int val;
*        struct ListNode *next;
*        ListNode(int x) :
*              val(x), next(NULL) {
*        }
*  };
*/
class Solution {
public:
    vector<int> printListFromTailToHead(ListNode* head) {
        vector<int> m;
        while(head!=NULL){
            m.push_back(head->val);
            head=head->next;
        }
        reverse(m.begin(), m.end());
        return m;;
    }
};