create table debfnoaf
(
  dbfndeb     varchar2(8) default ' ' not null,
  dbfndty     varchar2(1) default ' ' not null,
  dbfndoc     varchar2(12) default ' ' not null,
  dbfndln     varchar2(3) default ' ' not null,
  dbfnlin     varchar2(3) default ' ' not null,
  dbfncom     varchar2(50) default ' ' not null,
  dbfnspa     varchar2(18) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint debfnoa1 primary key( 
dbfndeb,
dbfndty,
dbfndoc,
dbfndln,
dbfnlin)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
