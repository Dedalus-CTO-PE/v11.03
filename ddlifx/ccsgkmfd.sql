create table ccsgkmaf
(
  ccgkkey     char(20) default ' ' not null,
  ccgkdes     char(35) default ' ' not null,
  ccgkspa     char(20) default ' ' not null,
  lf          char(1)
);
create unique index ccsgkma1 on ccsgkmaf
(
ccgkkey
);
create unique index ccsgkma2 on ccsgkmaf
(
ccgkdes,
ccgkkey
);
revoke all on ccsgkmaf from public ; 
grant select on ccsgkmaf to public ; 
