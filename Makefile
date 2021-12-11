# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/30 00:26:21 by jodufour          #+#    #+#              #
#    Updated: 2021/12/11 16:05:09 by jodufour         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

######################################
#              COMMANDS              #
######################################
CC					=	clang -c -o
LINK				=	clang -o
MKDIR				=	mkdir -p
RM					=	rm -rf

######################################
#             EXECUTABLE             #
######################################
NAME				=	mkgen

#######################################
#             DIRECTORIES             #
#######################################
SRC_DIR				=	srcs/
OBJ_DIR				=	objs/
INC_DIR				=	
PRV_DIR				=	private/

FT_MEM_DIR			=	libft_mem/
FT_MEM_INC_DIR		=	include/
FT_MEM_INC_DIR		:=	${addprefix ${FT_MEM_DIR}, ${FT_MEM_INC_DIR}}

FT_STRING_DIR		=	libft_string/
FT_STRING_INC_DIR	=	include/
FT_STRING_INC_DIR	:=	${addprefix ${FT_STRING_DIR}, ${FT_STRING_INC_DIR}}

#######################################
#              LIBRARIES              #
#######################################
FT_MEM_A			=	libft_mem.a
FT_MEM_A			:=	${addprefix ${FT_MEM_DIR}, ${FT_MEM_A}}

FT_STRING_A			=	libft_string.a
FT_STRING_A			:=	${addprefix ${FT_STRING_DIR}, ${FT_STRING_A}}

######################################
#            SOURCE FILES            #
######################################
SRC					=	\
						main.c					\
						mkg_err_msg.c			\
						mkg_file_content_get.c	\
						mkg_file_create.c		\
						mkg_ok_msg.c			\
						mkg_usage_msg.c

######################################
#            OBJECT FILES            #
######################################
OBJ					=	${SRC:.c=.o}
OBJ					:=	${addprefix ${OBJ_DIR}, ${OBJ}}

DEP					=	${OBJ:.o=.d}

#######################################
#                FLAGS                #
#######################################
CFLAGS				=	-Wall -Wextra -Werror
CFLAGS				+=	-MMD -MP
CFLAGS				+=	-I${PRV_DIR}
CFLAGS				+=	-I${FT_MEM_INC_DIR}
CFLAGS				+=	-I${FT_STRING_INC_DIR}

LDFLAGS				=	-L${FT_MEM_DIR} -lft_mem
LDFLAGS				+=	-L${FT_STRING_DIR} -lft_string

ifeq (${DEBUG}, 1)
	CFLAGS	+=	-g
endif

#######################################
#                RULES                #
#######################################
${NAME}:	${OBJ} ${FT_MEM_A} ${FT_STRING_A}
	${LINK} $@ ${OBJ} ${LDFLAGS}

all:	${NAME}

-include ${DEP}

${OBJ_DIR}%.o:	${SRC_DIR}%.c
	@${MKDIR} ${@D}
	${CC} $@ ${CFLAGS} $<

${FT_MEM_A}:
	${MAKE} ${@F} -C ${@D}

${FT_STRING_A}:
	${MAKE} ${@F} -C ${@D}

clean:
	${RM} ${OBJ_DIR}

fclean:
	${RM} ${OBJ_DIR} ${NAME}
	${MAKE} $@ -C ${FT_MEM_DIR}
	${MAKE} $@ -C ${FT_STRING_DIR}

re:	fclean all

-include /home/jodufour/Templates/mk_files/coffee.mk
-include /home/jodufour/Templates/mk_files/norm.mk

.PHONY:	all clean fclean re coffee norm
