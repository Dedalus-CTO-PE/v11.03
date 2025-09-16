create table patcrtaf
(
  ptcilocn    varchar2(8) default ' ' not null,
  ptcifdte    varchar2(8) default ' ' not null,
  ptciiden    varchar2(10) default ' ' not null,
  ptcitdte    varchar2(8) default ' ' not null,
  ptcisnid    varchar2(60) default ' ' not null,
  ptcispar    varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patcrta1 primary key( 
ptcilocn,
ptcifdte)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
