create table fmsaudla
(
  fmlaaudd    varchar2(8) default ' ' not null,
  fmlaaudt    varchar2(8) default ' ' not null,
  fmlaaudp    varchar2(2) default ' ' not null,
  fmlaaudr    varchar2(1) default ' ' not null,
  fmlaauds    number(1,0) default 0 not null,
  fmlaaudo    varchar2(4) default ' ' not null,
  fmlaledg    varchar2(2) default ' ' not null,
  fmladesc    varchar2(35) default ' ' not null,
  fmlacyrr    varchar2(4) default ' ' not null,
  fmlapers    number(1,0) default 0 not null,
  fmlabnk     varchar2(12) default ' ' not null,
  fmlacrd     varchar2(12) default ' ' not null,
  fmladis     varchar2(12) default ' ' not null,
  fmladeb     varchar2(12) default ' ' not null,
  fmlapay     varchar2(12) default ' ' not null,
  fmlaift     varchar2(12) default ' ' not null,
  fmlaagst    varchar2(12) default ' ' not null,
  fmlaper     varchar2(2) default ' ' not null,
  fmlapty     varchar2(1) default ' ' not null,
  fmlaabp     varchar2(1) default ' ' not null,
  fmlabnk2    varchar2(12) default ' ' not null,
  fmlapayg    varchar2(12) default ' ' not null,
  fmlaspar    varchar2(14) default ' ' not null,
  lf          varchar2(1) default ' ' not null
)
tablespace pas_data; 
create index fmsaudla on fmsaudla
(
fmlaaudd,
fmlaaudt,
fmlaaudp,
fmlaaudr
)
tablespace pas_indx; 
create table fmslmaaf
(
  fmlaledg    varchar2(2) default ' ' not null,
  fmladesc    varchar2(35) default ' ' not null,
  fmlacyrr    varchar2(4) default ' ' not null,
  fmlapers    number(1,0) default 0 not null,
  fmlabnk     varchar2(12) default ' ' not null,
  fmlacrd     varchar2(12) default ' ' not null,
  fmladis     varchar2(12) default ' ' not null,
  fmladeb     varchar2(12) default ' ' not null,
  fmlapay     varchar2(12) default ' ' not null,
  fmlaift     varchar2(12) default ' ' not null,
  fmlaagst    varchar2(12) default ' ' not null,
  fmlaper     varchar2(2) default ' ' not null,
  fmlapty     varchar2(1) default ' ' not null,
  fmlaabp     varchar2(1) default ' ' not null,
  fmlabnk2    varchar2(12) default ' ' not null,
  fmlapayg    varchar2(12) default ' ' not null,
  fmlaspar    varchar2(14) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint fmslmaa1 primary key( 
fmlaledg)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
