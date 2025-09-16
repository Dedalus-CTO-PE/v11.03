create table legctyaf
(
  loctsite    char(6) default ' ' not null,
  loctctyp    char(6) default ' ' not null,
  loctgrp     char(3) default ' ' not null,
  loctdesc    char(30) default ' ' not null,
  loctxbok    char(2) default ' ' not null,
  loctxatt    char(2) default ' ' not null,
  loctbkt     char(3) default ' ' not null,
  loctatt     char(3) default ' ' not null,
  loctact     char(1) default ' ' not null,
  loctspar    char(3) default ' ' not null,
  lf          char(1)
);
create unique index legctya1 on legctyaf
(
loctsite,
loctctyp
);
create unique index legctya2 on legctyaf
(
loctsite,
loctdesc,
loctctyp
);
create unique index legctya3 on legctyaf
(
loctsite,
loctgrp,
loctctyp
);
revoke all on legctyaf from public ; 
grant select on legctyaf to public ; 
