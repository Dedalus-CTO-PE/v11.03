create table debadjaf
(
  dbadcod     varchar2(3) default ' ' not null,
  dbaddes     varchar2(35) default ' ' not null,
  dbadtyp     varchar2(1) default ' ' not null,
  dbadled     varchar2(2) default ' ' not null,
  dbadiac     varchar2(12) default ' ' not null,
  dbadtac     varchar2(12) default ' ' not null,
  dbadur1     varchar2(35) default ' ' not null,
  dbadur2     varchar2(35) default ' ' not null,
  dbaduy1     varchar2(1) default ' ' not null,
  dbaduy2     varchar2(1) default ' ' not null,
  dbadspa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint debadja1 primary key( 
dbadcod)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
