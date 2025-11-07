#include "libft.h"

void print(void *ptr) {
	printf("%s\n", (char *)ptr);
}

void *dupp(void *ptr) {
	return ((void *)ft_strdup(ptr));
}

void del(void *ptr) {
	(void)ptr;
}

void del_f(void *ptr) {
	free(ptr);
}

int main(void)
{
	t_list	*lst;
	t_list 	*lst2;
	t_list	*tmp;
	
	lst = ft_lstnew("goncalo");
	tmp = ft_lstnew("riscas");
	ft_lstadd_back(&lst, tmp);
	ft_lstadd_back(&lst, ft_lstnew("joana"));
	ft_lstiter(lst, print);
	lst2 = ft_lstmap(lst, dupp, del_f);
	ft_lstiter(lst2, print);
	ft_lstclear(&lst, del);
	ft_lstclear(&lst2, del_f);

}


// 1 - crio uma lista, ft_lstnew
// 2 - crio os nodes...com o ft_lstnew, goncalo, riscas e joana
// 3 - ft_lstiter com a funcao print
// 4 - free a lista.....