create table pmsalvaf
(
  pmvavisn    char(8) default ' ' not null,
  pmvaavis    char(20) default ' ' not null,
  pmvatype    char(2) default ' ' not null,
  pmvadate    char(8) default ' ' not null,
  pmvatime    char(8) default ' ' not null,
  pmvacuid    char(10) default ' ' not null,
  pmvaactn    char(1) default ' ' not null,
  pmvacomm    char(300) default ' ' not null,
  pmvaspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index pmsalva1 on pmsalvaf
(
pmvavisn,
pmvadate,
pmvatime
);
create unique index pmsalva2 on pmsalvaf
(
pmvaavis,
pmvadate,
pmvatime,
pmvavisn
);
revoke all on pmsalvaf from public ; 
grant select on pmsalvaf to public ; 
