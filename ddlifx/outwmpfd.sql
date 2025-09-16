create table outwmpaf
(
  otwmclid    char(6) default ' ' not null,
  otwmmpsv    char(8) default ' ' not null,
  otwmmprp    char(2) default ' ' not null,
  otwmmptp    char(3) default ' ' not null,
  otwmmptt    char(3) default ' ' not null,
  otwmdesc    char(30) default ' ' not null,
  otwmsite    char(6) default ' ' not null,
  otwmspar    char(44) default ' ' not null,
  lf          char(1)
);
create unique index outwmpa1 on outwmpaf
(
otwmsite,
otwmclid,
otwmmpsv,
otwmmprp,
otwmmptp
);
revoke all on outwmpaf from public ; 
grant select on outwmpaf to public ; 
