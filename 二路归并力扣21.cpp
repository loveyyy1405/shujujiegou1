struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (list1 == nullptr)//递归出口
            return list2;
        else if (list2 == nullptr)
        {
            return list1;
        }
        else if (list1->val < list2->val)
        {
            list1->next = mergeTwoLists(list1->next, list2);
            return list1;
        }
        else {
            list2->next = mergeTwoLists(list1, list2->next);
            return list2;
        }
    }
}; 
/*递归
* list1:1,2,4 list2:1,3,4
* 比较1和1，选择1（list2），递归3，4和1，2，4
* 比较1和3，选择1（list1），递归2，4和3，4
* 比较2和3，选择2，return 2，递归4和3，4
* 比较4和3，选择3，递归4和4
* ->1,1,2,3,4（list2）,4（list1）
* return list1或return list2就是告诉上一层递归："我选好了当前节点，你把它接在你的后面就行"。
*/