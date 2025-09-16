create table fmsbtyaf
(
  fmbtcode    char(4) default ' ' not null,
  fmbtdesc    char(35) default ' ' not null,
  fmbtyear    char(4) default ' ' not null,
  fmbtstat    char(1) default ' ' not null,
  fmbtspar    char(15) default ' ' not null,
  lf          char(1)
);
create unique index fmsbtya1 on fmsbtyaf
(
fmbtcode
);
revoke all on fmsbtyaf from public ; 
grant select on fmsbtyaf to public ; 
