/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmagnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/30 18:27:44 by jmagnier          #+#    #+#             */
/*   Updated: 2016/05/30 19:26:31 by jmagnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*memset(void *b, int c, size_t len)
{
	unsigned char *s;

	s = b; 
	while (len--)
	{
		*s++ = c;
	}
	return (b);
}