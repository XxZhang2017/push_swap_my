#include "../push_swap.h"

void    ra(t_stack *st)
{
    int index;
    int buf;
    int count;

    count = 0;
    if (st->num_a > 0)
    {
        ft_strcpy(st->print, "ra");
        index = st->top_a;
        buf = st->arr_a[st->top_a];
        while(count < st->num_a - 1)
        {
            st->arr_a[index] = st->arr_a[index + 1];
            count++;
            index++;
        }
        st->arr_a[st->size - 1] = buf;
        if (st->_flag)
            printf("ra\n");
    }
    
}

void    rb(t_stack *st)
{
    int index;
    int buf;
    int count;

    count = 0;
    if (st->num_b > 0)
    {
        ft_strcpy(st->print, "rb");
        index = st->top_b;
        buf = st->arr_b[st->top_b];
        while(count < st->num_b - 1)
        {
            st->arr_b[index] = st->arr_b[index + 1];
            index++;
            count++;
        }
        st->arr_b[st->size - 1] = buf;
        if (st->_flag)
            printf("rb\n");
    }
    
}

void    rr(t_stack *st)
{
    int buf;

    if (st->num_a > 0 && st->num_b > 0)
    {
        ft_strcpy(st->print, "rr");
        buf = st->_flag;
        st->_flag = 0;
        ra(st);
        rb(st);
        st->_flag = buf;
        if (st->_flag)
            printf("rr\n");
    }
    
}
