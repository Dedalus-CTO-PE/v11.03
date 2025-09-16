create table ibacgsaf
(
  ibcgsgrp    char(3) default ' ' not null,
  ibcgdesc    char(20) default ' ' not null,
  ibcgactv    char(1) default ' ' not null,
  ibcgcdat    char(8) default ' ' not null,
  ibcgctim    char(8) default ' ' not null,
  ibcgcuid    char(10) default ' ' not null,
  ibcgudat    char(8) default ' ' not null,
  ibcgutim    char(8) default ' ' not null,
  ibcguuid    char(10) default ' ' not null,
  ibcgspar    char(30) default ' ' not null,
  lf          char(1)
);
create unique index ibacgsa1 on ibacgsaf
(
ibcgsgrp
);
create unique index ibacgsa2 on ibacgsaf
(
ibcgdesc,
ibcgsgrp
);
revoke all on ibacgsaf from public ; 
grant select on ibacgsaf to public ; 
