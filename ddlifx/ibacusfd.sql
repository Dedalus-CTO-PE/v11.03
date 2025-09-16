create table ibacusaf
(
  ibcusgrp    char(3) default ' ' not null,
  ibcuuser    char(10) default ' ' not null,
  ibcucdat    char(8) default ' ' not null,
  ibcuctim    char(8) default ' ' not null,
  ibcucuid    char(10) default ' ' not null,
  ibcuspar    char(30) default ' ' not null,
  lf          char(1)
);
create unique index ibacusa1 on ibacusaf
(
ibcusgrp,
ibcuuser
);
create unique index ibacusa2 on ibacusaf
(
ibcuuser,
ibcusgrp
);
revoke all on ibacusaf from public ; 
grant select on ibacusaf to public ; 
