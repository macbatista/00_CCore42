/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrispim <mcrispim@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 10:53:32 by mcrispim          #+#    #+#             */
/*   Updated: 2024/11/10 10:55:16 by mcrispim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



int	main(void)
{
	char	src[] = "Exemplo de string";
	char	dst[10];
	size_t	len;

	len = ft_strlcpy(dst, src, sizeof(dst));
	printf("Destino: %s\n", dst); // Saída: "Exemplo d"
	printf("Comprimento: %zu\n", len);
}
