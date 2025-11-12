# Libft - My First Library @ 42

> “Sometimes you just need to rebuild the wheel… but make it ~C~ (from now on ill be referencing this as PAINFT).” 
> - did i even say that?


## What is Libft?

Libft is the very first project at **42**, where... basically you reinvent a bunch of standard C library functions... from scratch! yay!! (sarcasm)

It’s a custom library of little tools that helps understand **how the C standard library actually works** under the hood.  

(And yes, ill totally use this library in later 42 projects (not))

---

## What’s Inside?

### Character & String Checks (`<ctype.h>`)
Functions that check what kind of character something is:
- `ft_isalpha` — checks if a character is a letter  
- `ft_isdigit` — checks if it’s a number  
- `ft_isalnum`, `ft_isascii`, `ft_isprint` — you get the idea 

### Memory Stuff (`<string.h>`)
Functions that copy, move, or clean memory:
- `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`  
- `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strdup`  

### String Helpers
Functions that make life with C strings way less painful (creating them were painful):
- `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_atoi`, `ft_calloc`  

### Part 2 - A Little More Advanced, A Little More Painful
All the malloc ~magic~ (pain)
- `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_itoa`  
- `ft_strmapi`, `ft_striteri`, `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

### Bonus Part - Linked Lists!
Because why not suffer just a *little* more
- `ft_lstnew`, `ft_lstadd_front`, `ft_lstadd_back`, `ft_lstsize`, `ft_lstlast`
- `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`
