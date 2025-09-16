create table ccsdalaf
(
  ccdahcd     varchar2(2) default ' ' not null,
  ccdadpt     varchar2(8) default ' ' not null,
  ccdacty     varchar2(4) default ' ' not null,
  ccdaaty     varchar2(4) default ' ' not null,
  ccdaspa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ccsdala1 primary key( 
ccdahcd,
ccdadpt,
ccdacty)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index ccsdala2 on ccsdalaf
(
ccdacty,
ccdahcd,
ccdadpt
)
  tablespace pas_indx; 
