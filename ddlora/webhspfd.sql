create table webhspaf
(
  wbhousid    varchar2(10) default ' ' not null,
  wbhohosp    varchar2(3) default ' ' not null,
  wbhoward    varchar2(3) default ' ' not null,
  wbhosite    varchar2(3) default ' ' not null,
  wbhoprin    varchar2(6) default ' ' not null,
  wbhospar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint webhspa1 primary key( 
wbhousid,
wbhohosp)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
