create table apsumpaf
(
  apumbch     char(5) default ' ' not null,
  apumcrd     char(5) default ' ' not null,
  apumdoc     char(15) default ' ' not null,
  apumain     decimal(14,2) default 0 not null,
  apumspa     char(30) default ' ' not null,
  lf          char(1)
);
create unique index apsumpa1 on apsumpaf
(
apumbch,
apumcrd,
apumdoc
);
revoke all on apsumpaf from public ; 
grant select on apsumpaf to public ; 
