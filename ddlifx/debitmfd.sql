create table debaudit
(
  dbitaudd    char(8) default ' ' not null,
  dbitaudt    char(8) default ' ' not null,
  dbitaudp    char(2) default ' ' not null,
  dbitaudr    char(1) default ' ' not null,
  dbitauds    decimal(1,0) default 0 not null,
  dbitaudo    char(4) default ' ' not null,
  dbititm     char(8) default ' ' not null,
  dbitdes     char(35) default ' ' not null,
  dbitide     char(30) default ' ' not null,
  dbitunt     char(4) default ' ' not null,
  dbitpty     char(8) default ' ' not null,
  dbitpri     decimal(16,4) default 0 not null,
  dbitmod     decimal(1,0) default 0 not null,
  dbitact     decimal(1,0) default 0 not null,
  dbitled     char(2) default ' ' not null,
  dbitiac     char(12) default ' ' not null,
  dbitcac     char(12) default ' ' not null,
  dbittrt     decimal(6,2) default 0 not null,
  dbittac     char(12) default ' ' not null,
  dbittca     char(12) default ' ' not null,
  dbitur1     char(25) default ' ' not null,
  dbitur2     char(25) default ' ' not null,
  dbitud1     char(8) default ' ' not null,
  dbitud2     char(8) default ' ' not null,
  dbituy1     char(1) default ' ' not null,
  dbituy2     char(1) default ' ' not null,
  dbituc1     char(3) default ' ' not null,
  dbituc2     char(3) default ' ' not null,
  dbituc3     char(3) default ' ' not null,
  dbituc4     char(3) default ' ' not null,
  dbitgst     char(6) default ' ' not null,
  dbitspa     char(14) default ' ' not null,
  lf          char(1)
);
create index debaudit on debaudit
(
dbitaudd,
dbitaudt,
dbitaudp,
dbitaudr
);
revoke all on debaudit from public ; 
grant select on debaudit to public ; 
create table debitmaf
(
  dbititm     char(8) default ' ' not null,
  dbitdes     char(35) default ' ' not null,
  dbitide     char(30) default ' ' not null,
  dbitunt     char(4) default ' ' not null,
  dbitpty     char(8) default ' ' not null,
  dbitpri     decimal(16,4) default 0 not null,
  dbitmod     decimal(1,0) default 0 not null,
  dbitact     decimal(1,0) default 0 not null,
  dbitled     char(2) default ' ' not null,
  dbitiac     char(12) default ' ' not null,
  dbitcac     char(12) default ' ' not null,
  dbittrt     decimal(6,2) default 0 not null,
  dbittac     char(12) default ' ' not null,
  dbittca     char(12) default ' ' not null,
  dbitur1     char(25) default ' ' not null,
  dbitur2     char(25) default ' ' not null,
  dbitud1     char(8) default ' ' not null,
  dbitud2     char(8) default ' ' not null,
  dbituy1     char(1) default ' ' not null,
  dbituy2     char(1) default ' ' not null,
  dbituc1     char(3) default ' ' not null,
  dbituc2     char(3) default ' ' not null,
  dbituc3     char(3) default ' ' not null,
  dbituc4     char(3) default ' ' not null,
  dbitgst     char(6) default ' ' not null,
  dbitspa     char(14) default ' ' not null,
  lf          char(1)
);
create unique index debitma1 on debitmaf
(
dbititm
);
create unique index debitma2 on debitmaf
(
dbitdes,
dbititm
);
create unique index debitma3 on debitmaf
(
dbitpty,
dbititm
);
revoke all on debitmaf from public ; 
grant select on debitmaf to public ; 
