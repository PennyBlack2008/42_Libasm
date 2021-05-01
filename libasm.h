/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libasm.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jikang <jikang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/28 15:53:55 by jikang            #+#    #+#             */
/*   Updated: 2020/12/28 16:48:06 by jikang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBASM_H
# define LIBASM_H

# include <stdlib.h>
# include <sys/types.h>

extern ssize_t		ft_read(int fd, char *buf, int size);
extern ssize_t		ft_write(int fd, char *buf, int size);
extern size_t		ft_strlen(char *str);
extern int			ft_strcmp(char *s1, char *s2);
extern char			*ft_strcpy(char *dst, char *src);
extern char			*ft_strdup(char *str);

#endif
