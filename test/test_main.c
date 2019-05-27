#include "../push_swap.h"

int main(int ac, char **av)
{
    t_stack *t;
        
    if (ac == 1)
        return (0);
    t = validate(ac, av);
    if (!t)
        return (0);
    if (t->size == 1)
        return (0);
    else if (t->size == 2)
        sort_two(t);
    else if (t->size == 3)
        sort_three(t);
    else
        sort_five(t, t->size - 3);      
    // printf("stack a info --------------\n");
    // ft_print_stack_a(t);
    // printf("stack b info --------------\n");
    // ft_print_stack_b(t);
    // printf("\n");     
    free_stack(t);        
    return (0);
}