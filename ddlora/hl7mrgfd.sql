create table hl7mrgaf
(
  dmrgin01    varchar2(20) default ' ' not null,
  dmrgin02    varchar2(2) default ' ' not null,
  mrg001      varchar2(20) default ' ' not null,
  mrg002      varchar2(20) default ' ' not null,
  mrg003      varchar2(20) default ' ' not null,
  mrg004      varchar2(20) default ' ' not null,
  mrg005      varchar2(20) default ' ' not null,
  mrg006      varchar2(20) default ' ' not null,
  mrg007      varchar2(48) default ' ' not null,
  mrg008      varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint hl7mrg01 primary key( 
dmrgin01,
dmrgin02)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
