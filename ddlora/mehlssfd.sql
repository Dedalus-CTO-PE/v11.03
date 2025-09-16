create table mehlssaf
(
  mhlsdate    varchar2(6) default ' ' not null,
  mhlsstat    varchar2(3) default ' ' not null,
  mhlsinst    number(6,0) default 0 not null,
  mhlsslst    number(6,0) default 0 not null,
  mhlsadmn    number(6,0) default 0 not null,
  mhlschgf    number(6,0) default 0 not null,
  mhlschgt    number(6,0) default 0 not null,
  mhlsretn    number(6,0) default 0 not null,
  mhlsreta    number(6,0) default 0 not null,
  mhlslves    number(6,0) default 0 not null,
  mhlslvea    number(6,0) default 0 not null,
  mhlsdsch    number(6,0) default 0 not null,
  mhlsdead    number(6,0) default 0 not null,
  mhlsinbd    number(8,0) default 0 not null,
  mhlsslbd    number(8,0) default 0 not null,
  mhlslvbd    number(8,0) default 0 not null,
  mhlsawbd    number(8,0) default 0 not null,
  mhlssepb    number(8,0) default 0 not null,
  mhlssslb    number(8,0) default 0 not null,
  mhlsdscb    number(8,0) default 0 not null,
  mhlsdslb    number(8,0) default 0 not null,
  mhlsspar    varchar2(30) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint mehlssa1 primary key( 
mhlsdate,
mhlsstat)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
