create table allvmpaf
(
  alvmdept    varchar2(3) default ' ' not null,
  alvmcatg    varchar2(2) default ' ' not null,
  alvmedat    varchar2(8) default ' ' not null,
  alvmcode    varchar2(3) default ' ' not null,
  alvmspar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint allvmpa1 primary key( 
alvmdept,
alvmcatg,
alvmedat)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
