create table pmsucdaf
(
  pmucurno    char(8) default ' ' not null,
  pmucctty    char(3) default ' ' not null,
  pmuccnum    char(6) default ' ' not null,
  pmuclnum    char(3) default ' ' not null,
  pmuccomm    char(100) default ' ' not null,
  pmucspar    char(30) default ' ' not null,
  lf          char(1)
);
create unique index pmsucda1 on pmsucdaf
(
pmucurno,
pmucctty,
pmuccnum,
pmuclnum
);
revoke all on pmsucdaf from public ; 
grant select on pmsucdaf to public ; 
