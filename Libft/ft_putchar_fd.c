/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 12:41:16 by mawada            #+#    #+#             */
/*   Updated: 2023/11/10 12:44:35 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

//int fd -> first place in write function//
/* Standard Input (stdin): Dateideskriptor 0. Normalerweise ist dies mit der Tastatur verbunden. Funktionen wie scanf lesen Daten von stdin.

Standard Output (stdout): Dateideskriptor 1. Normalerweise ist dies mit dem Bildschirm (Terminal) verbunden. Funktionen wie printf schreiben Daten auf stdout.

Standard Error (stderr): Dateideskriptor 2. Auch mit dem Bildschirm verbunden, aber speziell für Fehlermeldungen. Funktionen wie fprintf(stderr, ...) werden verwendet, um Fehlermeldungen auszugeben.

Diese Standard-Dateideskriptoren ermöglichen die Interaktion mit der Konsole. Es gibt jedoch auch weitere Dateideskriptoren:

Dateideskriptor 3 und darüber: Diese können für die Verbindung mit anderen Dateien, Pipes oder Sockets verwendet werden. */
