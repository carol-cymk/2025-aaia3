// week14-3.cpp 學習計畫 Linked List 第4題
// LeetCode 445. Add Two Numbers II
class Solution {
public:
    // -------------------------
    // 自己寫的 reverse（week14-2）
    // -------------------------
    ListNode* myReverse(ListNode* head) {   // 自訂函式(剛寫過 week14-2.cpp)
        if (head == nullptr || head->next == nullptr) return head; // 終止條件

        ListNode* ans = myReverse(head->next);  // 函式呼叫函式
        head->next->next = head;                // 把前面反到最後面
        head->next = nullptr;                   // 收尾
        return ans;
    }

    // -------------------------
    // 加法（借用上週的 Add Two Numbers）
    // -------------------------
    ListNode* myAddTwoNumbers(ListNode* list1, ListNode* list2) {

        ListNode* ans = new ListNode(999);   // 隨便的勾勾，答案會放在勾勾的右邊
        ListNode* ans2 = ans;                // 負責幫 ans 收尾
        int carry = 0;                       // 進位

        while (list1 != nullptr || list2 != nullptr) {

            int now = carry;                 // 現在要處理的位數

            if (list1 != nullptr) {          // 加入值
                now += list1->val;
                list1 = list1->next;         // 換下一筆
            }

            if (list2 != nullptr) {          // 加入值
                now += list2->val;
                list2 = list2->next;         // 換下一筆
            }

            ans2->next = new ListNode(now % 10);  // 個位數
            carry = now / 10;                     // 進位
            ans2 = ans2->next;                    // 換下一筆
        }

        // 差一點點!!! → 補上進位
        if (carry > 0)
            ans2->next = new ListNode(carry);

        return ans->next;
    }

    // -------------------------
    // 主程式
    // -------------------------
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        ListNode* list1 = myReverse(l1);  // 反過來
        ListNode* list2 = myReverse(l2);  // 反過來

        ListNode* ans = myAddTwoNumbers(list1, list2);  // 呼叫上週的加法
        return myReverse(ans);  // 再反回來
    }
};
