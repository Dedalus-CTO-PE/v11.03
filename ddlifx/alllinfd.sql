create table alllinaf
(
  allivisn    char(8) default ' ' not null,
  allilink    char(3) default ' ' not null,
  alliurno    char(8) default ' ' not null,
  allicoid    char(4) default ' ' not null,
  allispar    char(50) default ' ' not null,
  lf          char(1)
);
create unique index alllina1 on alllinaf
(
allivisn,
allilink
);
create unique index alllina2 on alllinaf
(
alliurno,
allivisn,
allilink
);
revoke all on alllinaf from public ; 
grant select on alllinaf to public ; 
