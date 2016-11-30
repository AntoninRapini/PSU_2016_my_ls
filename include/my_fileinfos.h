/*
** my_fileinfos.h for my_ls in /home/antonin.rapini/UnixSystemProgrammation/PSU_2016_my_ls/include
** 
** Made by Antonin Rapini
** Login   <antonin.rapini@epitech.net>
** 
** Started on  Tue Nov 29 09:30:11 2016 Antonin Rapini
** Last update Tue Nov 29 23:50:20 2016 Antonin Rapini
*/

#ifndef MY_FILEINFOS_H_
# define MY_FILEINFOS_H_

#include <sys/stat.h>

typedef struct	s_fileinfos
{
  char		*name;
  char		*owner;
  char		*group;
  struct stat	*stat_data;
}		t_fileinfos;

#endif /* !MY_FILEINFOS_H_ */
