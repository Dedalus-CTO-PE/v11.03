create table nzprvbaf
(
  nzrvadmn    char(8) default ' ' not null,
  nzrvinvn    char(8) default ' ' not null,
  nzrvsunq    char(3) default ' ' not null,
  nzrvbrcd    char(3) default ' ' not null,
  nzrvamnt    decimal(14,2) default 0 not null,
  nzrvgamn    decimal(14,2) default 0 not null,
  nzrvspar    char(25) default ' ' not null,
  lf          char(1)
);
create unique index nzprvba1 on nzprvbaf
(
nzrvadmn,
nzrvinvn,
nzrvsunq,
nzrvbrcd
);
revoke all on nzprvbaf from public ; 
grant select on nzprvbaf to public ; 
