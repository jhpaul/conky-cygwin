#ifndef __DEFCONFIG_H
#define __DEFCONFIG_H

#define defconfig { \
"# Conky, a system monitor, based on torsmo\n", \
"#\n", \
"# Any original torsmo code is licensed under the BSD license\n", \
"#\n", \
"# All code written since the fork of torsmo is licensed under the GPL\n", \
"#\n", \
"# Please see COPYING for details\n", \
"#\n", \
"# Copyright (c) 2004, Hannu Saransaari and Lauri Hakkarainen\n", \
"# Copyright (c) 2005-2010 Brenden Matthews, Philip Kovacs, et. al. (see AUTHORS)\n", \
"# All rights reserved.\n", \
"#\n", \
"# This program is free software: you can redistribute it and/or modify\n", \
"# it under the terms of the GNU General Public License as published by\n", \
"# the Free Software Foundation, either version 3 of the License, or\n", \
"# (at your option) any later version.\n", \
"#\n", \
"# This program is distributed in the hope that it will be useful,\n", \
"# but WITHOUT ANY WARRANTY; without even the implied warranty of\n", \
"# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the\n", \
"# GNU General Public License for more details.\n", \
"# You should have received a copy of the GNU General Public License\n", \
"# along with this program.  If not, see <http://www.gnu.org/licenses/>.\n", \
"#\n", \
"\n", \
"alignment top_left\n", \
"background no\n", \
"border_width 1\n", \
"cpu_avg_samples 2\n", \
"default_color white\n", \
"default_outline_color white\n", \
"default_shade_color white\n", \
"draw_borders no\n", \
"draw_graph_borders yes\n", \
"draw_outline no\n", \
"draw_shades no\n", \
"use_xft yes\n", \
"xftfont DejaVu Sans Mono:size=12\n", \
"gap_x 5\n", \
"gap_y 60\n", \
"minimum_size 5 5\n", \
"net_avg_samples 2\n", \
"no_buffers yes\n", \
"out_to_console no\n", \
"out_to_stderr no\n", \
"extra_newline no\n", \
"own_window yes\n", \
"own_window_class Conky\n", \
"own_window_type desktop\n", \
"stippled_borders 0\n", \
"update_interval 1.0\n", \
"uppercase no\n", \
"use_spacer none\n", \
"show_graph_scale no\n", \
"show_graph_range no\n", \
"\n", \
"TEXT\n", \
"${scroll 16 $nodename - $sysname $kernel on $machine | }\n", \
"$hr\n", \
"${color grey}Uptime:$color $uptime\n", \
"${color grey}Frequency (in MHz):$color $freq\n", \
"${color grey}Frequency (in GHz):$color $freq_g\n", \
"${color grey}RAM Usage:$color $mem/$memmax - $memperc% ${membar 4}\n", \
"${color grey}Swap Usage:$color $swap/$swapmax - $swapperc% ${swapbar 4}\n", \
"${color grey}CPU Usage:$color $cpu% ${cpubar 4}\n", \
"${color grey}Processes:$color $processes  ${color grey}Running:$color $running_processes\n", \
"$hr\n", \
"${color grey}File systems:\n", \
" / $color${fs_used /}/${fs_size /} ${fs_bar 6 /}\n", \
"${color grey}Networking:\n", \
"Up:$color ${upspeed eth0} ${color grey} - Down:$color ${downspeed eth0}\n", \
"$hr\n", \
"${color grey}Name              PID   CPU%   MEM%\n", \
"${color lightgrey} ${top name 1} ${top pid 1} ${top cpu 1} ${top mem 1}\n", \
"${color lightgrey} ${top name 2} ${top pid 2} ${top cpu 2} ${top mem 2}\n", \
"${color lightgrey} ${top name 3} ${top pid 3} ${top cpu 3} ${top mem 3}\n", \
"${color lightgrey} ${top name 4} ${top pid 4} ${top cpu 4} ${top mem 4}\n", \
NULL }

#define print_defconfig() { \
	const char **__sp, *__s[] = defconfig; \
	for (__sp = __s; *__sp; __sp++) \
		printf("%s", *__sp); \
}

#endif /* __DEFCONFIG_H */
