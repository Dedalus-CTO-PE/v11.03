create table hicmciaf
(
  hcmcmcid    varchar2(8) default ' ' not null,
  hcmccntr    number(3,0) default 0 not null,
  lf          varchar2(1) default ' ' not null,
constraint hicmcia1 primary key( 
hcmcmcid)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
