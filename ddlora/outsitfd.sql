create table outsitaf
(
  ostsite     varchar2(6) default ' ' not null,
  ostdesc     varchar2(30) default ' ' not null,
  ostpass     varchar2(8) default ' ' not null,
  ostfile     varchar2(3) default ' ' not null,
  ostsyst     varchar2(3) default ' ' not null,
  ostirng     varchar2(3) default ' ' not null,
  ostchrg     varchar2(1) default ' ' not null,
  ostcatg     varchar2(2) default ' ' not null,
  dostmaxd    varchar2(3) default ' ' not null,
  otstxbok    varchar2(2) default ' ' not null,
  otstxatt    varchar2(2) default ' ' not null,
  otstactv    varchar2(1) default ' ' not null,
  otstspar    varchar2(55) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint outsita1 primary key( 
ostsite)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index outsita2 on outsitaf
(
ostdesc,
ostsite
)
  tablespace pas_indx; 
create unique index outsita3 on outsitaf
(
ostfile,
ostsite
)
  tablespace pas_indx; 
