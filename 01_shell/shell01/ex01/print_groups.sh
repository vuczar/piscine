# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    print_groups.sh                                    :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vimauric <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/04/06 07:48:46 by vimauric          #+#    #+#              #
#    Updated: 2026/04/06 08:24:23 by vimauric         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/bash

# Fazer o export da variável FT_USER: export FT_USER=bocal ou daemon antes!

id -Gn $FT_USER | tr ' ' ',' | tr -d '\n'
