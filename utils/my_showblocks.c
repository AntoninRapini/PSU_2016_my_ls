/*
** my_getblocks.c for my_getblocks in /home/antonin.rapini/UnixSystemProgrammation/PSU_2016_my_ls/utils
** 
** Made by Antonin Rapini
** Login   <antonin.rapini@epitech.net>
** 
** Started on  Fri Dec  2 10:39:44 2016 Antonin Rapini
** Last update Fri Dec  2 20:47:59 2016 Antonin Rapini
*/

#include <sys/stat.h>
#include <stdlib.h>
#include "my_fileinfos.h"
#include "my_list.h"
#include "utils.h"

int	my_getblocks(t_list *list)
{
  int	blocks;

  blocks = 0;
  while (list != NULL)
    {
      blocks += list->fileinfos->stat_data->st_blocks;
      list = list->next;
    }
  return (blocks / 2);
}

void	my_showblocks(t_list *list)
{
  my_putstr("total ");
  my_put_nbr(my_getblocks(list));
  my_putchar('\n');
}
