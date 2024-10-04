/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarpio- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 18:54:15 by rcarpio-          #+#    #+#             */
/*   Updated: 2024/09/28 13:16:33 by rcarpio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <bsd/string.h>
#include <stddef.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*little == 0)
		return ((char *) big);
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while (i + j < len && little[j] != '\0' && big [i + j] == little[j])
		{
			if (little[j + 1] == '\0')
				return ((char *)&big[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
/*
int main(void) 
{
    
    const char *cadena_principal = "Este es un ejemplo simple";

    // Caso 1: Subcadena encontrada dentro del límite
    const char *subcadena1 = "ejemplo";
    char *resultado1 = ft_strnstr(cadena_principal, subcadena1, 20);
    printf("Caso 1 - Mi función: %s\n", resultado1);
    char *resultado1_original = ft_strnstr(cadena_principal, subcadena1, 20);
    printf("Caso 1 - Función original: %s\n", resultado1_original);

    // Caso 2: Subcadena no encontrada dentro del límite
    const char *subcadena2 = "simple";
    char *resultado2 = ft_strnstr(cadena_principal, subcadena2, 10);
    printf("Caso 2 - Mi función: %s\n", resultado2);
    char *resultado2_original = ft_strnstr(cadena_principal, subcadena2, 10);
    printf("Caso 2 - Función original: %s\n", resultado2_original);

    // Caso 3: Subcadena vacía
    const char *subcadena3 = "";
    char *resultado3 = ft_strnstr(cadena_principal, subcadena3, 20);
    printf("Caso 3 - Mi función: %s\n", resultado3);
    char *resultado3_original = ft_strnstr(cadena_principal, subcadena3, 20);
    printf("Caso 3 - Función original: %s\n", resultado3_original);

    // Caso 4: Subcadena más larga que el límite
    const char *subcadena4 = "simple";
    char *resultado4 = ft_strnstr(cadena_principal, subcadena4, 5);
    printf("Caso 4 - Mi función: %s\n", resultado4);
    char *resultado4_original = ft_strnstr(cadena_principal, subcadena4, 5);
    printf("Caso 4 - Función original: %s\n", resultado4_original);

    // Caso 5: Límite mayor que la longitud de la cadena
    const char *subcadena5 = "simple";
    char *resultado5 = ft_strnstr(cadena_principal, subcadena5, 50);
    printf("Caso 5 - Mi función: %s\n", resultado5);
    char *resultado5_original = ft_strnstr(cadena_principal, subcadena5, 50);
    printf("Caso 5 - Función original: %s\n", resultado5_original);

    return 0;
}*/
