create table fmsnrkxx
(
  fmnkrept    char(3) default ' ' not null,
  fmnktacc    char(12) default ' ' not null,
  fmnksacc    char(12) default ' ' not null,
  fmnkspar    char(20) default ' ' not null,
  lf          char(1)
);
create unique index fmsnrka1 on fmsnrkxx
(
fmnkrept,
fmnktacc,
fmnksacc
);
revoke all on fmsnrkxx from public ; 
grant select on fmsnrkxx to public ; 
