create table outctyaf
(
  octsite     char(6) default ' ' not null,
  octctyp     char(6) default ' ' not null,
  octgrp      char(3) default ' ' not null,
  octdesc     char(30) default ' ' not null,
  octxbok     char(2) default ' ' not null,
  octxatt     char(2) default ' ' not null,
  octbkt      char(3) default ' ' not null,
  octatt      char(3) default ' ' not null,
  octact      char(1) default ' ' not null,
  octvacs     char(3) default ' ' not null,
  octwunit    char(3) default ' ' not null,
  octusdf1    char(1) default ' ' not null,
  octusdf2    char(1) default ' ' not null,
  octdefcv    char(3) default ' ' not null,
  octspare    char(25) default ' ' not null,
  lf          char(1)
);
create unique index outctya1 on outctyaf
(
octsite,
octctyp
);
create unique index outctya2 on outctyaf
(
octsite,
octdesc,
octctyp
);
create unique index outctya3 on outctyaf
(
octsite,
octgrp,
octctyp
);
create unique index outctya4 on outctyaf
(
octsite,
octgrp,
octdesc,
octctyp
);
revoke all on outctyaf from public ; 
grant select on outctyaf to public ; 
