create table hl7zidaf
(
  dzidin01    varchar2(20) default ' ' not null,
  dzidin02    varchar2(2) default ' ' not null,
  zid001      varchar2(2) default ' ' not null,
  zid002      varchar2(2) default ' ' not null,
  zid003      varchar2(2) default ' ' not null,
  zid004      varchar2(26) default ' ' not null,
  zid005      varchar2(20) default ' ' not null,
  zid006      varchar2(8) default ' ' not null,
  zid007      varchar2(8) default ' ' not null,
  zid008      varchar2(5) default ' ' not null,
  zid009      varchar2(2) default ' ' not null,
  zid010      varchar2(6) default ' ' not null,
  zid011      varchar2(26) default ' ' not null,
  zid012      varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint hl7zid01 primary key( 
dzidin01,
dzidin02)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
