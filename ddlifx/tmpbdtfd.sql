create table tmpbdtaf
(
  tmbdtdat    char(8) default ' ' not null,
  tmbdrecn    char(12) default ' ' not null,
  tmbduniq    char(3) default ' ' not null,
  tmbdmhos    char(3) default ' ' not null,
  tmbdmdhs    char(2) default ' ' not null,
  tmbdptyp    char(1) default ' ' not null,
  tmbdpamt    decimal(14,2) default 0 not null,
  tmbdpayd    char(50) default ' ' not null,
  tmbdchqn    char(12) default ' ' not null,
  tmbddraw    char(50) default ' ' not null,
  tmbdbank    char(30) default ' ' not null,
  tmbdbrch    char(30) default ' ' not null,
  tmbdcrdt    char(3) default ' ' not null,
  tmbdstrf    char(40) default ' ' not null,
  tmbdeftt    char(1) default ' ' not null,
  tmbdcdat    char(8) default ' ' not null,
  tmbdctim    char(8) default ' ' not null,
  tmbdcuid    char(10) default ' ' not null,
  tmbdudat    char(8) default ' ' not null,
  tmbdutim    char(8) default ' ' not null,
  tmbduuid    char(10) default ' ' not null,
  tmbdpcod    char(3) default ' ' not null,
  tmbdspar    char(27) default ' ' not null,
  lf          char(1)
);
create unique index tmpbdta1 on tmpbdtaf
(
tmbdrecn,
tmbduniq
);
create unique index tmpbdta2 on tmpbdtaf
(
tmbdtdat,
tmbdrecn,
tmbduniq
);
create unique index tmpbdta3 on tmpbdtaf
(
tmbdchqn,
tmbdrecn,
tmbduniq
);
revoke all on tmpbdtaf from public ; 
grant select on tmpbdtaf to public ; 
