create table pmstleaf
(
  pmtltitl    char(4) default ' ' not null,
  pmtldesc    char(30) default ' ' not null,
  pmtlactv    char(1) default ' ' not null,
  pmtlspar    char(49) default ' ' not null,
  lf          char(1)
);
create unique index pmstlea1 on pmstleaf
(
pmtltitl
);
create unique index pmstlea2 on pmstleaf
(
pmtldesc,
pmtltitl
);
revoke all on pmstleaf from public ; 
grant select on pmstleaf to public ; 
