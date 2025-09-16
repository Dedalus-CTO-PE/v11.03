create table aaestaaf
(
  aescata     varchar2(2) default ' ' not null,
  aescode     varchar2(3) default ' ' not null,
  aesdate     varchar2(6) default ' ' not null,
  aesnumb     number(6,0) default 0 not null,
  aesspare    varchar2(32) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint aaestaa1 primary key( 
aescata,
aescode,
aesdate)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
