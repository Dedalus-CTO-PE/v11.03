create table fmsxcsaf
(
  fmxcled     char(2) default ' ' not null,
  fmxcsub     char(12) default ' ' not null,
  fmxccos     char(12) default ' ' not null,
  fmxccpr     char(5) default ' ' not null,
  fmxcspr     char(5) default ' ' not null,
  fmxcspar    char(20) default ' ' not null,
  lf          char(1)
);
create unique index fmsxcsa1 on fmsxcsaf
(
fmxcled,
fmxcsub,
fmxccos
);
create unique index fmsxcsa2 on fmsxcsaf
(
fmxcled,
fmxcsub,
fmxccpr,
fmxccos
);
create unique index fmsxcsa3 on fmsxcsaf
(
fmxcled,
fmxccos,
fmxcspr,
fmxcsub
);
revoke all on fmsxcsaf from public ; 
grant select on fmsxcsaf to public ; 
