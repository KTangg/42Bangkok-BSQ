# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    map_gen.perl                                       :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: spoolpra <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/31 18:58:20 by spoolpra          #+#    #+#              #
#    Updated: 2022/01/31 18:58:58 by spoolpra         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/usr/bin/perl

use warnings;

use strict;

die "program x y density" unless (scalar(@ARGV) == 3);

my ($x, $y, $density) = @ARGV;

print "$y.ox\n";

for (my $i = 0; $i < $y; $i++) {
	for (my $j = 0; $j < $x; $j++) {
		if (int(rand($y) * 2) < $density) {
			print "o";
		}
		else {
			print ".";
		}
	}
	print "\n";
}
