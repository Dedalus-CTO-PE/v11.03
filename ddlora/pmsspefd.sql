create table pmsspeaf
(
  pmsehcpc    varchar2(10) default ' ' not null,
  pmsespec    varchar2(3) default ' ' not null,
  pmsesdat    varchar2(8) default ' ' not null,
  pmseedat    varchar2(8) default ' ' not null,
  pmsecdat    varchar2(8) default ' ' not null,
  pmsectim    varchar2(8) default ' ' not null,
  pmsecuid    varchar2(10) default ' ' not null,
  pmseudat    varchar2(8) default ' ' not null,
  pmseutim    varchar2(8) default ' ' not null,
  pmseuuid    varchar2(10) default ' ' not null,
  pmsespar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmsspea1 primary key( 
pmsehcpc,
pmsespec,
pmsesdat)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
