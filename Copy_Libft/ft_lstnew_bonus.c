/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvdelga <alvdelga@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 09:50:38 by alvdelga          #+#    #+#             */
/*   Updated: 2024/04/23 18:44:41 by alvdelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Crea un nuevo nodo utilizando malloc(3). La variable miembro ’content’ se
//inicializa con el contenido del parámetro ’content’.
//La variable ’next’, con NULL.
t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}
/*int	main()
{
	char *data = "Hola Mundo";
	t_list *nodo1 = ft_lstnew(data);

	printf("%s", (char *)(nodo1->content));

	return (0);
}*/

/*int	main()
{
	int num = 32;
	t_list *nodo1;

	nodo1 = ft_lstnew((num));

	printf("%d\n", nodo1->content);
}*/
