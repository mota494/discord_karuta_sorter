#ifndef HEADER_H

# define HEADER_H
# include <stdio.h>
# include "../get_next_line/get_next_line.h"
# include <fcntl.h>

typedef struct cardList
{
	char	*cardcode;
	int	print;
	int	ed;
	char	*name;
	char	*series;
	int	quality;
	int	burnvalue;
	char	frame;
	char	tag;
	int	wishes;
	int	workeffort;
	struct	cardList *nextCard;
} cardInfo;

typedef struct uselessInfo
{
	char	*obtainedate;
	int	timestamp;
	int	dyecode;
	int	fights;
	char	*dyename;
	char	*dropper;
	char	*grabber;
	char	*guild;
} notUsed;
#endif
