create table ibaccsaf
(
  ibccsgrp    char(3) default ' ' not null,
  ibcccatg    char(2) default ' ' not null,
  ibcccdat    char(8) default ' ' not null,
  ibccctim    char(8) default ' ' not null,
  ibcccuid    char(10) default ' ' not null,
  ibccspar    char(30) default ' ' not null,
  lf          char(1)
);
create unique index ibaccsa1 on ibaccsaf
(
ibccsgrp,
ibcccatg
);
create unique index ibaccsa2 on ibaccsaf
(
ibcccatg,
ibccsgrp
);
revoke all on ibaccsaf from public ; 
grant select on ibaccsaf to public ; 
