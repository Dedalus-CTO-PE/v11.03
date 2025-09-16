create table pmsnepaf
(
  pmnecntr    char(6) default ' ' not null,
  pmnevtyp    char(2) default ' ' not null,
  pmnecode    char(10) default ' ' not null,
  pmneindc    char(10) default ' ' not null,
  pmneindv    char(30) default ' ' not null,
  pmnenepp    decimal(18,4) default 0 not null,
  pmneactv    char(1) default ' ' not null,
  pmnecuid    char(10) default ' ' not null,
  pmnecdat    char(8) default ' ' not null,
  pmnectim    char(8) default ' ' not null,
  pmneuuid    char(10) default ' ' not null,
  pmneudat    char(8) default ' ' not null,
  pmneutim    char(8) default ' ' not null,
  pmnespar    char(120) default ' ' not null,
  lf          char(1)
);
create unique index pmsnepa1 on pmsnepaf
(
pmnecntr,
pmnevtyp,
pmnecode,
pmneindc,
pmneindv
);
create unique index pmsnepa2 on pmsnepaf
(
pmnevtyp,
pmnecntr,
pmnecode,
pmneindc,
pmneindv
);
revoke all on pmsnepaf from public ; 
grant select on pmsnepaf to public ; 
