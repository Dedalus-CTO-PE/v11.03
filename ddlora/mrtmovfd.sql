create table mrtmovaf
(
  mrmoreas    varchar2(4) default ' ' not null,
  mrmodesc    varchar2(30) default ' ' not null,
  mrmoperd    number(3,0) default 0 not null,
  mrmotype    varchar2(1) default ' ' not null,
  mrmoindc    varchar2(1) default ' ' not null,
  mrmostat    number(1,0) default 0 not null,
  mrmousag    number(1,0) default 0 not null,
  mrmospar    varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint mrtmova1 primary key( 
mrmoreas)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
