create table ibaimenf
(
  ibimuser    varchar2(4) default ' ' not null,
  ibimdate    varchar2(8) default ' ' not null,
  ibimtime    varchar2(8) default ' ' not null,
  ibimport    varchar2(2) default ' ' not null,
  ibimprog    varchar2(8) default ' ' not null,
  ibimspar    varchar2(19) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ibaimen1 primary key( 
ibimuser,
ibimdate,
ibimtime,
ibimport)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index ibaimen2 on ibaimenf
(
ibimdate,
ibimtime,
ibimport
)
  tablespace pas_indx; 
create unique index ibaimen3 on ibaimenf
(
ibimport,
ibimdate,
ibimtime
)
  tablespace pas_indx; 
create unique index ibaimen4 on ibaimenf
(
ibimprog,
ibimdate,
ibimtime,
ibimport
)
  tablespace pas_indx; 
