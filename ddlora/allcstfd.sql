create table allcstaf
(
  alcsurno    varchar2(8) default ' ' not null,
  alcscntr    varchar2(8) default ' ' not null,
  alcstype    varchar2(3) default ' ' not null,
  alcsline    varchar2(3) default ' ' not null,
  alcsdata    varchar2(100) default ' ' not null,
  alcsukey    varchar2(24) default ' ' not null,
  alcsspar    varchar2(30) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint allcsta1 primary key( 
alcsurno,
alcscntr,
alcstype,
alcsline)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
