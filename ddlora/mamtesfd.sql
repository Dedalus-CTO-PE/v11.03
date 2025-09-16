create table mamtestf
(
  mmurno      varchar2(8) default ' ' not null,
  dmmidno     varchar2(8) default ' ' not null,
  dmmtcnt     varchar2(2) default ' ' not null,
  mmdate      varchar2(8) default ' ' not null,
  mmintr      varchar2(3) default ' ' not null,
  mmintl      varchar2(3) default ' ' not null,
  mmfollow    number(3,0) default 0 not null,
  mmuser1     varchar2(3) default ' ' not null,
  mmuser2     varchar2(3) default ' ' not null,
  mmuser3     varchar2(3) default ' ' not null,
  mmuser4     varchar2(3) default ' ' not null,
  mmuser5     varchar2(3) default ' ' not null,
  mmuser6     varchar2(3) default ' ' not null,
  mmuser7     varchar2(3) default ' ' not null,
  mmuser8     varchar2(3) default ' ' not null,
  mmfiller    varchar2(10) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint mamtest1 primary key( 
mmurno,
dmmidno,
dmmtcnt)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index mamtest2 on mamtestf
(
mmdate,
mmurno,
dmmidno,
dmmtcnt
)
  tablespace pas_indx; 
