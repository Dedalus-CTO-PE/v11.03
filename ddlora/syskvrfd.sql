create table syskvraf
(
  sykvsys     varchar2(2) default ' ' not null,
  sykvfil     varchar2(2) default ' ' not null,
  sykvrid     varchar2(1) default ' ' not null,
  sykvkfld    varchar2(4) default ' ' not null,
  sykvkdes    varchar2(20) default ' ' not null,
  sykvktyp    number(1,0) default 0 not null,
  sykvidx     varchar2(1) default ' ' not null,
  sykvhid     varchar2(1) default ' ' not null,
  sykvspar    varchar2(49) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint syskvra1 primary key( 
sykvsys,
sykvfil,
sykvrid)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
