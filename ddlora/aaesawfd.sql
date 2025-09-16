create table aaesawaf
(
  aeswtype    varchar2(1) default ' ' not null,
  aeswcode    varchar2(6) default ' ' not null,
  aeswname    varchar2(30) default ' ' not null,
  aeswadd1    varchar2(35) default ' ' not null,
  aeswadd2    varchar2(35) default ' ' not null,
  aeswadd3    varchar2(35) default ' ' not null,
  aeswadd4    varchar2(35) default ' ' not null,
  aeswpost    varchar2(8) default ' ' not null,
  aeswtele    varchar2(12) default ' ' not null,
  aeswcont    varchar2(30) default ' ' not null,
  aeswspar    varchar2(22) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint aaesawa1 primary key( 
aeswtype,
aeswcode)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index aaesawa2 on aaesawaf
(
aeswtype,
aeswname,
aeswcode
)
  tablespace pas_indx; 
