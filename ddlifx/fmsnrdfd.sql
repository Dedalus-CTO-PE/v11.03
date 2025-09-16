create table fmsnrdaf
(
  fmndcode    char(3) default ' ' not null,
  fmndledg    char(2) default ' ' not null,
  fmnddesc    char(40) default ' ' not null,
  fmndspar    char(20) default ' ' not null,
  lf          char(1)
);
create unique index fmsnrda1 on fmsnrdaf
(
fmndcode
);
revoke all on fmsnrdaf from public ; 
grant select on fmsnrdaf to public ; 
