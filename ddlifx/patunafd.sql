create table patunaaf
(
  dptunadm    char(8) default ' ' not null,
  ptundate    char(8) default ' ' not null,
  ptuntime    char(8) default ' ' not null,
  ptuntype    char(1) default ' ' not null,
  ptunodte    char(8) default ' ' not null,
  ptunhosp    char(3) default ' ' not null,
  dptunsen    char(1) default ' ' not null,
  ptundtyp    char(3) default ' ' not null,
  ptunauid    char(10) default ' ' not null,
  ptuncanc    char(3) default ' ' not null,
  ptunottm    char(8) default ' ' not null,
  ptunoprd    char(4) default ' ' not null,
  ptunspar    char(44) default ' ' not null,
  lf          char(1)
);
create unique index patunaa1 on patunaaf
(
dptunadm,
ptundate,
ptuntime,
ptuntype
);
create unique index patunaa2 on patunaaf
(
ptuntype,
ptundate,
ptuntime,
dptunadm
);
create unique index patunaa3 on patunaaf
(
ptundate,
ptuntime,
dptunadm,
ptuntype
);
revoke all on patunaaf from public ; 
grant select on patunaaf to public ; 
