create table outecoaf
(
  oteomodl    varchar2(1) default ' ' not null,
  oteodflg    varchar2(1) default ' ' not null,
  oteotrid    varchar2(24) default ' ' not null,
  oteoinvn    varchar2(8) default ' ' not null,
  oteobatn    varchar2(8) default ' ' not null,
  oteocdat    varchar2(8) default ' ' not null,
  oteouser    varchar2(10) default ' ' not null,
  oteospar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint outecoa1 primary key( 
oteomodl,
oteodflg,
oteotrid)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index outecoa2 on outecoaf
(
oteocdat,
oteodflg,
oteotrid,
oteomodl
)
  tablespace pas_indx; 
