create table mehpataf
(
  mhptxdat    char(8) default ' ' not null,
  mhptxnum    char(3) default ' ' not null,
  mhptvisn    char(8) default ' ' not null,
  mhpturno    char(8) default ' ' not null,
  mhptocur    char(5) default ' ' not null,
  mhpterid    char(9) default ' ' not null,
  mhptacid    char(3) default ' ' not null,
  mhptatyp    char(3) default ' ' not null,
  mhptaset    char(2) default ' ' not null,
  mhptwcpn    char(6) default ' ' not null,
  mhptsdat    char(19) default ' ' not null,
  mhptedat    char(19) default ' ' not null,
  mhptfamw    char(1) default ' ' not null,
  mhptspar    char(15) default ' ' not null,
  lf          char(1)
);
create unique index mehpata1 on mehpataf
(
mhptxdat,
mhptxnum,
mhptvisn,
mhpturno,
mhptocur
);
revoke all on mehpataf from public ; 
grant select on mehpataf to public ; 
