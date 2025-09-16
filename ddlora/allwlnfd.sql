create table allwlnaf
(
  alwlurno    varchar2(8) default ' ' not null,
  alwlpcod    varchar2(9) default ' ' not null,
  alwlpcnt    varchar2(2) default ' ' not null,
  alwlvisn    varchar2(8) default ' ' not null,
  alwlspar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint allwlna1 primary key( 
alwlurno,
alwlpcod,
alwlpcnt)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index allwlna2 on allwlnaf
(
alwlvisn,
alwlurno,
alwlpcod,
alwlpcnt
)
  tablespace pas_indx; 
