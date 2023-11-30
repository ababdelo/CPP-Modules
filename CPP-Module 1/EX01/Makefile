# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ababdelo <ababdelo@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/14 14:22:02 by ababdelo          #+#    #+#              #
#    Updated: 2023/11/27 10:04:02 by ababdelo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#------------------------------------------------------------------------------#
#                                  GENERICS                                    #
#------------------------------------------------------------------------------#

.DEFAULT_GOAL := help
.DELETE_ON_ERROR:
.PHONY: all clean fclean re

# OS Check
ifeq ($(OS), Windows_NT)
    CC := g++
    EXE := Zombie.exe
    OS_MSG := Windows
else
    CC := c++
    EXE := Zombie
    OS_MSG := Other
endif

# Hide calls
export VERBOSE	=	TRUE

ifeq ($(VERBOSE),FALSE)
    HIDE =
else
    HIDE = @
endif

#------------------------------------------------------------------------------#
#                                VARIABLES                                     #
#------------------------------------------------------------------------------#

# Compiler and flags
CFLAGS := -Wall -Werror -Wextra -std=c++98 -I.
RM := rm -rf
MKDIR := mkdir -p

# Compilation commands
COMPILE_CMD = $(CC) $(CFLAGS) -c $< -o $@
LINK_CMD = $(CC) $(CFLAGS) $(OBJS) -o $@

# Dir and file names
FILES := main Zombie zombieHorde
SRCS := $(FILES:=.cpp)
OBJS_DIR := OBJS
OBJS := $(addprefix $(OBJS_DIR)/, $(SRCS:.cpp=.o))
INC := $(wildcard *.hpp)

# Messages
CHECK_MARK = \033[1;32m\xe2\x9c\x94\033[0m
X_MARK = \033[1;31m\xe2\x9c\x98\033[0m

CLN_MSG = ${HIDE}printf "${CHECK_MARK} \033[1;33mBase clean-up\033[0m: Successfully Removed Objects Files\n"
FCLN_MSG = ${HIDE}printf "${CHECK_MARK} \033[1;31mFull clean-up\033[0m: Successfully Removed Objects Files and Executable\n"
MAKE_MSG = ${HIDE}printf "${CHECK_MARK} \033[1;32mBuilding\033[0m: Successfully Compiled Sources Files and Builded the Executable for '\033[1;36m${OS_MSG}\033[0m' OS\n"

#------------------------------------------------------------------------------#
#                                 TARGETS                                      #
#------------------------------------------------------------------------------#

# Display this help message
help:
	@printf "Usage: make \033[1;32m[target]\033[0m\n"
	@printf "\n"
	@printf "Targets:\n"
	@printf "  \033[1;36mall\033[0m      : Build the executable\n"
	@printf "  \033[1;33mclean\033[0m    : Remove object files\n"
	@printf "  \033[1;31mfclean\033[0m   : Remove object files and the executable\n"
	@printf "  \033[1;32mre\033[0m       : Remove all generated files and rebuild\n"
	@printf "  \033[1;37mhelp\033[0m     : Display this help message (default)\n"

# Generates output file
all: $(EXE)
	$(MAKE_MSG)

$(EXE): $(OBJS)
	$(HIDE)$(LINK_CMD)

# Compiles sources into objects
$(OBJS_DIR)/%.o: %.cpp $(INC)
	$(HIDE)$(MKDIR) $(OBJS_DIR)
	$(HIDE)$(COMPILE_CMD)

# Removes objects
clean:
	$(CLN_MSG)
	$(HIDE)$(RM) $(OBJS_DIR)

# Removes objects and executables
fclean: clean
	$(FCLN_MSG)
	$(HIDE)$(RM) $(EXE)

# Removes objects and executables and remakes
re: fclean all
