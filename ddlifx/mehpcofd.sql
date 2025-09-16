create table mehpcoaf
(
  mhpoxdat    char(8) default ' ' not null,
  mhpoxnum    char(3) default ' ' not null,
  mhpovisn    char(8) default ' ' not null,
  mhpourno    char(8) default ' ' not null,
  mhpoocur    char(3) default ' ' not null,
  mhpoerid    char(9) default ' ' not null,
  mhpoccod    char(20) default ' ' not null,
  mhporcol    char(4) default ' ' not null,
  mhpocdat    char(19) default ' ' not null,
  mhpowcpn    char(6) default ' ' not null,
  mhpooesp    char(9) default ' ' not null,
  mhpopver    char(4) default ' ' not null,
  mhpofcar    char(4) default ' ' not null,
  mhpospar    char(14) default ' ' not null,
  lf          char(1)
);
create unique index mehpcoa1 on mehpcoaf
(
mhpoxdat,
mhpoxnum,
mhpovisn,
mhpourno,
mhpoocur
);
revoke all on mehpcoaf from public ; 
grant select on mehpcoaf to public ; 
