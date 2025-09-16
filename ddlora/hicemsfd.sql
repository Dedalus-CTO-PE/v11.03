create table hicemsaf
(
  hcemcode    varchar2(3) default ' ' not null,
  hcemdesc    varchar2(70) default ' ' not null,
  hcemspar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint hicemsa1 primary key( 
hcemcode)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index hicemsa2 on hicemsaf
(
hcemdesc,
hcemcode
)
  tablespace pas_indx; 
