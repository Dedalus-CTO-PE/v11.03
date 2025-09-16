create table debaudit
(
  dbitaudd    varchar2(8) default ' ' not null,
  dbitaudt    varchar2(8) default ' ' not null,
  dbitaudp    varchar2(2) default ' ' not null,
  dbitaudr    varchar2(1) default ' ' not null,
  dbitauds    number(1,0) default 0 not null,
  dbitaudo    varchar2(4) default ' ' not null,
  dbititm     varchar2(8) default ' ' not null,
  dbitdes     varchar2(35) default ' ' not null,
  dbitide     varchar2(30) default ' ' not null,
  dbitunt     varchar2(4) default ' ' not null,
  dbitpty     varchar2(8) default ' ' not null,
  dbitpri     number(16,4) default 0 not null,
  dbitmod     number(1,0) default 0 not null,
  dbitact     number(1,0) default 0 not null,
  dbitled     varchar2(2) default ' ' not null,
  dbitiac     varchar2(12) default ' ' not null,
  dbitcac     varchar2(12) default ' ' not null,
  dbittrt     number(6,2) default 0 not null,
  dbittac     varchar2(12) default ' ' not null,
  dbittca     varchar2(12) default ' ' not null,
  dbitur1     varchar2(25) default ' ' not null,
  dbitur2     varchar2(25) default ' ' not null,
  dbitud1     varchar2(8) default ' ' not null,
  dbitud2     varchar2(8) default ' ' not null,
  dbituy1     varchar2(1) default ' ' not null,
  dbituy2     varchar2(1) default ' ' not null,
  dbituc1     varchar2(3) default ' ' not null,
  dbituc2     varchar2(3) default ' ' not null,
  dbituc3     varchar2(3) default ' ' not null,
  dbituc4     varchar2(3) default ' ' not null,
  dbitgst     varchar2(6) default ' ' not null,
  dbitspa     varchar2(14) default ' ' not null,
  lf          varchar2(1) default ' ' not null
)
tablespace pas_data; 
create index debaudit on debaudit
(
dbitaudd,
dbitaudt,
dbitaudp,
dbitaudr
)
tablespace pas_indx; 
create table debitmaf
(
  dbititm     varchar2(8) default ' ' not null,
  dbitdes     varchar2(35) default ' ' not null,
  dbitide     varchar2(30) default ' ' not null,
  dbitunt     varchar2(4) default ' ' not null,
  dbitpty     varchar2(8) default ' ' not null,
  dbitpri     number(16,4) default 0 not null,
  dbitmod     number(1,0) default 0 not null,
  dbitact     number(1,0) default 0 not null,
  dbitled     varchar2(2) default ' ' not null,
  dbitiac     varchar2(12) default ' ' not null,
  dbitcac     varchar2(12) default ' ' not null,
  dbittrt     number(6,2) default 0 not null,
  dbittac     varchar2(12) default ' ' not null,
  dbittca     varchar2(12) default ' ' not null,
  dbitur1     varchar2(25) default ' ' not null,
  dbitur2     varchar2(25) default ' ' not null,
  dbitud1     varchar2(8) default ' ' not null,
  dbitud2     varchar2(8) default ' ' not null,
  dbituy1     varchar2(1) default ' ' not null,
  dbituy2     varchar2(1) default ' ' not null,
  dbituc1     varchar2(3) default ' ' not null,
  dbituc2     varchar2(3) default ' ' not null,
  dbituc3     varchar2(3) default ' ' not null,
  dbituc4     varchar2(3) default ' ' not null,
  dbitgst     varchar2(6) default ' ' not null,
  dbitspa     varchar2(14) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint debitma1 primary key( 
dbititm)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index debitma2 on debitmaf
(
dbitdes,
dbititm
)
  tablespace pas_indx; 
create unique index debitma3 on debitmaf
(
dbitpty,
dbititm
)
  tablespace pas_indx; 
