create table rcpbdtaf
(
  rcbdtdat    char(8) default ' ' not null,
  rcbdrecn    char(12) default ' ' not null,
  rcbduniq    char(3) default ' ' not null,
  rcbdmhos    char(3) default ' ' not null,
  rcbdmdhs    char(2) default ' ' not null,
  rcbdptyp    char(1) default ' ' not null,
  rcbdpamt    decimal(14,2) default 0 not null,
  rcbdpayd    char(50) default ' ' not null,
  rcbdchqn    char(12) default ' ' not null,
  rcbddraw    char(50) default ' ' not null,
  rcbdbank    char(30) default ' ' not null,
  rcbdbrch    char(30) default ' ' not null,
  rcbdcrdt    char(3) default ' ' not null,
  rcbdstrf    char(40) default ' ' not null,
  rcbdeftt    char(1) default ' ' not null,
  rcbdcdat    char(8) default ' ' not null,
  rcbdctim    char(8) default ' ' not null,
  rcbdcuid    char(10) default ' ' not null,
  rcbdudat    char(8) default ' ' not null,
  rcbdutim    char(8) default ' ' not null,
  rcbduuid    char(10) default ' ' not null,
  rcbdpcod    char(3) default ' ' not null,
  rcbdspar    char(27) default ' ' not null,
  lf          char(1)
);
create unique index rcpbdta1 on rcpbdtaf
(
rcbdrecn,
rcbduniq
);
create unique index rcpbdta2 on rcpbdtaf
(
rcbdtdat,
rcbdrecn,
rcbduniq
);
create unique index rcpbdta3 on rcpbdtaf
(
rcbdchqn,
rcbdrecn,
rcbduniq
);
revoke all on rcpbdtaf from public ; 
grant select on rcpbdtaf to public ; 
