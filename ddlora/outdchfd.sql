create table outdchaf
(
  otdcslty    varchar2(3) default ' ' not null,
  otdcregr    varchar2(1) default ' ' not null,
  otdciflg    varchar2(2) default ' ' not null,
  otdcitmn    varchar2(9) default ' ' not null,
  otdcsubn    varchar2(3) default ' ' not null,
  otdcwcrt    varchar2(10) default ' ' not null,
  otdcdcrt    varchar2(8) default ' ' not null,
  otdctcrt    varchar2(8) default ' ' not null,
  otdcwupd    varchar2(10) default ' ' not null,
  otdcdupd    varchar2(8) default ' ' not null,
  otdctupd    varchar2(8) default ' ' not null,
  otdcspar    varchar2(40) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint outdcha1 primary key( 
otdcslty,
otdcregr)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
