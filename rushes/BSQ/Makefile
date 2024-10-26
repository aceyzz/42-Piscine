# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: trvukano <marvin@42lausanne.ch>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/20 16:57:59 by trvukano          #+#    #+#              #
#    Updated: 2023/09/21 09:41:06 by cedmulle         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

###########

MAKEFLAGS += --silent

SHELL := bash

B =     $(shell tput bold)
VERT =  $(shell tput setaf 2)
BLEU =  $(shell tput setaf 4)
D =     $(shell tput sgr0)

###########

SOURCE	= srcs/
SRCS    = editing.c ft_split.c main.c parse.c scan_replace.c
OBJS	= ${addprefix ${SOURCE},${SRCS:.c=.o}}
HEAD	= includes
CC		= clang
CFLAGS	= -Wall -Wextra -Werror
NAME	= bsq

##########

define	progress_bar
	@i=0
	@while [[ $$i -le $(words $(SRCS)) ]] ; do \
		printf "      " ; \
		((i = i + 1)) ; \
	done
	@printf "$(B))\r($(VERT)"
endef

###########

all :		chargement ${NAME}
		@printf "\n\n\n$(B)$(BLEU) =========== $(NAME) compilation success. ===========$(D)\n\n\n"

max :		chargement ${NAME}
		@printf "\n\n\n$(B)$(BLEU) =========== $(NAME) compilation success. ===========$(D)\n\n\n"
		bash mapgen/map.sh /mapgen/pattern_generator

chargement:
			${call progress_bar}

${NAME}:	${OBJS}
	${CC} ${CFLAGS} -o ${NAME} ${OBJS} 

.c.o:
	${CC} ${CFLAGS} -I ${HEAD} -c $< -o ${<:.c=.o}
	@printf "██████"
	@printf "█"
	sleep 0.1; \

clean:
	rm -f ${OBJS}

fclean:		clean
	rm -f ${NAME}

re:			fclean all

allclean:	clean fclean
	rm -rf maps/

