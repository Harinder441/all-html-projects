#include <stdio.h>
#include <stdlib.h>
struct node
{
    int d;
    struct node *next;
};
void mergelist(struct node *list1, struct node *list2, struct node *list3)
{
    //list3 contains NULL now
    //write your code here so that list3 points to required linked list
    struct node *temp1 = list1;
    struct node *temp2 = list2;
    struct node *temp3 = list3;

    while (temp2 != NULL)
    {
        if (temp1 != NULL)
        {
            while (temp1->d <= temp2->d)
            {
                if (temp3 == NULL)
                {
                    temp3 = temp1;
                    list3 = temp3;
                }
                else if (temp1->d < temp2->d)
                {
                    temp3->next = temp1;
                    temp3 = temp3->next;
                }

                temp1 = temp1->next;
                if (temp1 == NULL)
                    break;
            }
        }
        if (temp3 == NULL)
        {
            temp3 = temp2;
            list3 = temp3;
        }
        else
        {
            temp3->next = temp2;
            temp3 = temp3->next;
        }
        temp2 = temp2->next;
    }
    temp3->next = NULL;
    printlist(list3); //this call prints the list3 elements so do not remove it.
}

int main()
{
}
