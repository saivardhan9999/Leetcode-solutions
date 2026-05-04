/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergetwo(ListNode* a,ListNode *b)
    {
        if(!a) return b;
        if(!b) return a;
        if(a->val<b->val)
        {
            a->next=mergetwo(a->next,b);
            return a;
        }
        else
        {
            b->next=mergetwo(a,b->next);
            return b;
        }
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.empty()) return NULL;
        while(lists.size()>1)
        {
            vector<ListNode*> temp;
            for(int i=0;i<lists.size();i+=2)
            {
                if(i+1<lists.size())
                {
                    temp.push_back(mergetwo(lists[i],lists[i+1]));
                }
                else
                {
                    temp.push_back(lists[i]);
                }
            }
            lists=temp;
        }
        return lists[0];
    }
};