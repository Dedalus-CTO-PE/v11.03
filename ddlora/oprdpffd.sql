create table oprdpfaf
(
  opdfcode    varchar2(6) default ' ' not null,
  opdfpref    varchar2(9) default ' ' not null,
  opdfclss    varchar2(3) default ' ' not null,
  opdftype    varchar2(1) default ' ' not null,
  opdfitem    varchar2(15) default ' ' not null,
  opdfqty     number(3,0) default 0 not null,
  opdfhosp    varchar2(3) default ' ' not null,
  opdfspar    varchar2(27) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint oprdpfa1 primary key( 
opdfcode,
opdfpref,
opdfclss,
opdftype,
opdfitem,
opdfhosp)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
