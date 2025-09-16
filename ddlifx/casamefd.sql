create table casameaf
(
  caamtoe     char(3) default ' ' not null,
  caamam      char(3) default ' ' not null,
  caamdes     char(35) default ' ' not null,
  caamdec     decimal(1,0) default 0 not null,
  caamunt     char(6) default ' ' not null,
  caamsdec    char(10) default ' ' not null,
  caamspa     char(50) default ' ' not null,
  lf          char(1)
);
create unique index casamea1 on casameaf
(
caamtoe,
caamam
);
revoke all on casameaf from public ; 
grant select on casameaf to public ; 
