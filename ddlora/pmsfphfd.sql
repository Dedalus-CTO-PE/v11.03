create table pmsfphaf
(
  pmfphcpc    varchar2(10) default ' ' not null,
  pmfphfnd    varchar2(6) default ' ' not null,
  pmfpfpid    varchar2(12) default ' ' not null,
  pmfpspar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmsfpha1 primary key( 
pmfphcpc,
pmfphfnd)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
