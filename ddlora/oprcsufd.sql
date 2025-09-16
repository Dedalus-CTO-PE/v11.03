create table oprcsuaf
(
  opcsdate    varchar2(6) default ' ' not null,
  opcsdoct    varchar2(6) default ' ' not null,
  opcstype    varchar2(1) default ' ' not null,
  opcstime    varchar2(3) default ' ' not null,
  opcsbses    number(6,0) default 0 not null,
  opcsbtim    number(6,0) default 0 not null,
  opcsuses    number(6,0) default 0 not null,
  opcsutim    number(6,0) default 0 not null,
  opcsbrks    number(6,0) default 0 not null,
  opcsstim    number(6,0) default 0 not null,
  opcsspar    varchar2(3) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint oprcsua1 primary key( 
opcsdate,
opcsdoct,
opcstype,
opcstime)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
