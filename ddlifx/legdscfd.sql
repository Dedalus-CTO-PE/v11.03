create table legdschf
(
  lddurno     char(8) default ' ' not null,
  lddadmno    char(8) default ' ' not null,
  lddate      char(8) default ' ' not null,
  ldtime      char(8) default ' ' not null,
  ldstat      char(3) default ' ' not null,
  lddest      char(3) default ' ' not null,
  lddiag      char(50) default ' ' not null,
  lddiag2     char(50) default ' ' not null,
  ldusd1      char(3) default ' ' not null,
  ldusd2      char(3) default ' ' not null,
  ldusd3      char(3) default ' ' not null,
  ldusd4      char(3) default ' ' not null,
  ldusd5      char(3) default ' ' not null,
  ldfmbs      char(9) default ' ' not null,
  lpdsdmdc    char(4) default ' ' not null,
  lpdsddrg    char(4) default ' ' not null,
  lpdssidx    char(1) default ' ' not null,
  lpdsvogu    char(3) default ' ' not null,
  lpdssref    char(4) default ' ' not null,
  ldspare     char(16) default ' ' not null,
  lf          char(1)
);
create unique index legdsch1 on legdschf
(
lddadmno
);
create unique index legdsch2 on legdschf
(
lddate,
lddadmno
);
create unique index legdsch3 on legdschf
(
lddurno,
lddadmno
);
revoke all on legdschf from public ; 
grant select on legdschf to public ; 
