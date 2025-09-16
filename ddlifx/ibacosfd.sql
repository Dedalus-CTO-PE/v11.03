create table ibacosaf
(
  ibcosgrp    char(3) default ' ' not null,
  ibcocatg    char(2) default ' ' not null,
  ibcocatc    char(3) default ' ' not null,
  ibcocdat    char(8) default ' ' not null,
  ibcoctim    char(8) default ' ' not null,
  ibcocuid    char(10) default ' ' not null,
  ibcospar    char(50) default ' ' not null,
  lf          char(1)
);
create unique index ibacosa1 on ibacosaf
(
ibcosgrp,
ibcocatg,
ibcocatc
);
create unique index ibacosa2 on ibacosaf
(
ibcocatg,
ibcocatc,
ibcosgrp
);
revoke all on ibacosaf from public ; 
grant select on ibacosaf to public ; 
