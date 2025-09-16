create table dgtrplaf
(
  dgrprply    char(3) default ' ' not null,
  dgrpstat    char(5) default ' ' not null,
  dgrperrd    char(50) default ' ' not null,
  dgrppas1    char(50) default ' ' not null,
  dgrppas2    char(50) default ' ' not null,
  dgrppas3    char(50) default ' ' not null,
  dgrpurno    char(8) default ' ' not null,
  dgrpnhsn    char(20) default ' ' not null,
  dgrpdate    char(8) default ' ' not null,
  dgrptime    char(8) default ' ' not null,
  dgrpprog    char(8) default ' ' not null,
  dgrpuser    char(4) default ' ' not null,
  dgrpspar    char(50) default ' ' not null,
  lf          char(1)
);
create unique index dgtrpla1 on dgtrplaf
(
dgrprply,
dgrppas1,
dgrpdate,
dgrptime
);
revoke all on dgtrplaf from public ; 
grant select on dgtrplaf to public ; 
