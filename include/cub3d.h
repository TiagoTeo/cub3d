#ifndef CUB3D_H
#define CUB3D_H

#include "macros.h"
#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

typedef struct s_cub t_cub;

struct s_cub
{
	int fd;
};

//MAIN.C
t_cub *cub(void);

//EXIT.C
void ez_exit(char *str);

//PARSE_FILE.C
void check_file(t_cub *cub, int ac, char **av);
void check_scene(char *str);
// int open_file(t_cub *cub, char *file);

//STR_UTILS.C
// int ft_strlen(char *str);
char *ft_strrchr(char *str, char c);

#endif