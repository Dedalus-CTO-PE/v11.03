create table hl7cisaf
(
  dh7cimes    varchar2(20) default ' ' not null,
  h7cistat    varchar2(1) default ' ' not null,
  h7cidttm    varchar2(16) default ' ' not null,
  h7cimetp    varchar2(3) default ' ' not null,
  h7cioper    varchar2(4) default ' ' not null,
  h7ciport    varchar2(2) default ' ' not null,
  h7cipgid    varchar2(8) default ' ' not null,
  h7ciddat    varchar2(16) default ' ' not null,
  h7ciurno    varchar2(8) default ' ' not null,
  h7civisn    varchar2(8) default ' ' not null,
  h7ciactn    varchar2(1) default ' ' not null,
  h7citrid    number(4,0) default 0 not null,
  h7ciincl    varchar2(8) default ' ' not null,
  h7cirtag    varchar2(20) default ' ' not null,
  h7cistag    varchar2(3) default ' ' not null,
  h7ciusid    varchar2(10) default ' ' not null,
  h7cihosp    varchar2(3) default ' ' not null,
  h7ciutim    varchar2(8) default ' ' not null,
  h7cispar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint hl7cisa1 primary key( 
dh7cimes)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index hl7cisa2 on hl7cisaf
(
h7cistat,
h7cidttm,
dh7cimes
)
  tablespace pas_indx; 
create unique index hl7cisa3 on hl7cisaf
(
h7cistat,
h7ciddat,
dh7cimes
)
  tablespace pas_indx; 
create unique index hl7cisa4 on hl7cisaf
(
h7cimetp,
h7cistat,
h7cidttm,
dh7cimes
)
  tablespace pas_indx; 
create unique index hl7cisa5 on hl7cisaf
(
h7ciurno,
h7cidttm,
dh7cimes
)
  tablespace pas_indx; 
create unique index hl7cisa6 on hl7cisaf
(
h7civisn,
h7cidttm,
dh7cimes
)
  tablespace pas_indx; 
