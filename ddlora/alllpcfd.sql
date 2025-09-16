create table alllpcaf
(
  allpsche    varchar2(5) default ' ' not null,
  allpurno    varchar2(8) default ' ' not null,
  allpvisn    varchar2(8) default ' ' not null,
  allpprnt    varchar2(6) default ' ' not null,
  allpcopy    number(3,0) default 0 not null,
  allpstat    varchar2(6) default ' ' not null,
  allplett    varchar2(3) default ' ' not null,
  allpptyp    varchar2(1) default ' ' not null,
  allpouno    varchar2(8) default ' ' not null,
  allpoust    varchar2(6) default ' ' not null,
  allpwebu    varchar2(10) default ' ' not null,
  allprdat    varchar2(8) default ' ' not null,
  allprtim    varchar2(8) default ' ' not null,
  allpspar    varchar2(22) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint alllpca1 primary key( 
allpsche)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
