create table outibhaf
(
  otibbthn    varchar2(8) default ' ' not null,
  otibbhtl    number(14,2) default 0 not null,
  otibtrib    number(6,0) default 0 not null,
  otibdtbc    varchar2(8) default ' ' not null,
  otibtmbc    varchar2(8) default ' ' not null,
  otiboper    varchar2(10) default ' ' not null,
  otibefnm    varchar2(18) default ' ' not null,
  otiblocn    varchar2(8) default ' ' not null,
  otibsnid    varchar2(60) default ' ' not null,
  otibspar    varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint outibha1 primary key( 
otibbthn)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index outibha2 on outibhaf
(
otibdtbc,
otibbthn
)
  tablespace pas_indx; 
