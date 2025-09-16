create table prieadaf
(
  predfbid    char(3) default ' ' not null,
  predarid    char(20) default ' ' not null,
  predclid    char(6) default ' ' not null,
  predrptc    char(3) default ' ' not null,
  predcfec    char(4) default ' ' not null,
  predexpc    char(3) default ' ' not null,
  predcfet    char(80) default ' ' not null,
  predspar    char(30) default ' ' not null,
  lf          char(1)
);
create unique index prieada1 on prieadaf
(
predfbid,
predarid,
predclid,
predrptc,
predcfec,
predexpc
);
revoke all on prieadaf from public ; 
grant select on prieadaf to public ; 
