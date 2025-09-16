create table pmsedgaf
(
  pmegrtyp    char(1) default ' ' not null,
  pmegkeyv    char(30) default ' ' not null,
  pmegdrgv    char(3) default ' ' not null,
  pmegpycd    char(3) default ' ' not null,
  pmegfdat    char(8) default ' ' not null,
  pmegtdat    char(8) default ' ' not null,
  pmegcuid    char(10) default ' ' not null,
  pmegcdat    char(8) default ' ' not null,
  pmegctim    char(8) default ' ' not null,
  pmeguuid    char(10) default ' ' not null,
  pmegudat    char(8) default ' ' not null,
  pmegutim    char(8) default ' ' not null,
  pmegcomm    char(50) default ' ' not null,
  pmegspar    char(50) default ' ' not null,
  lf          char(1)
);
create unique index pmsedga1 on pmsedgaf
(
pmegrtyp,
pmegkeyv,
pmegdrgv
);
create unique index pmsedga2 on pmsedgaf
(
pmegrtyp,
pmegkeyv,
pmegfdat,
pmegdrgv
);
revoke all on pmsedgaf from public ; 
grant select on pmsedgaf to public ; 
