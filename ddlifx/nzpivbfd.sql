create table nzpivbaf
(
  nzivadmn    char(8) default ' ' not null,
  nzivinvn    char(8) default ' ' not null,
  nzivsunq    char(3) default ' ' not null,
  nzivbrcd    char(3) default ' ' not null,
  nzivamnt    decimal(14,2) default 0 not null,
  nzivgamn    decimal(14,2) default 0 not null,
  nzivspar    char(25) default ' ' not null,
  lf          char(1)
);
create unique index nzpivba1 on nzpivbaf
(
nzivadmn,
nzivinvn,
nzivsunq,
nzivbrcd
);
revoke all on nzpivbaf from public ; 
grant select on nzpivbaf to public ; 
