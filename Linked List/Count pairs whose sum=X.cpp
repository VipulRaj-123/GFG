/* Given two linked list of size N1 and N2 respectively of distinct elements, your task is to complete the function countPairs(), which returns the count of all pairs from both lists whose sum is equal to the given value X.
Note: The 2 numbers of a pair should be parts of different lists.

Example 1:

Input:
L1 = 1->2->3->4->5->6
L2 = 11->12->13
X = 15
Output: 3
Explanation: There are 3 pairs that
add up to 15 : (4,11) , (3,12) and (2,13)
Example 2:

Input:
L1 = 7->5->1->3
L2 = 3->5->2->8
X = 10
Output: 2
Explanation: There are 2 pairs that add up
to 10 : (7,3) and (5,5)
Your Task:
You only need to implement the given function countPairs() and return the count.

Expected Time Complexity: O(N+M)
Expected Auxiliary Space: O(N+M) */

/* HINT :- Store elements of one list in a set. Then look for ( sum - list2[i] ) in the set, where sum is required sum of pairs and list2[i] is ith element of list2. */

int countPairs(struct Node* head1, struct Node* head2, int x) {
    // Code here
    int res=0;
    set<int>s;
    while(head1){
      s.insert(head1->data);
      head1=head1->next;
    }
    while(head2){
        if(s.find(x-head2->data)!=s.end())
         res++;
        head2=head2->next; 
    }
    return res;
}
