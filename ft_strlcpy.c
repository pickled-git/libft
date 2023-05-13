/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oprosvir <oprosvir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 00:43:38 by oprosvir          #+#    #+#             */
/*   Updated: 2023/05/13 00:43:38 by oprosvir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t  ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t src_len = 0;

    // Calculate the length of the source string
    while (src[src_len]) {
        src_len++;
    }

    // If the destination size is 0, return the length of the source string
    if (dstsize == 0) {
        return src_len;
    }

    // Copy characters from the source string to the destination string
    size_t i = 0;
    while (src[i] && i < (dstsize - 1)) {
        dst[i] = src[i];
        i++;
    }

    // Null-terminate the destination string
    dst[i] = '\0';

    return src_len;
}
