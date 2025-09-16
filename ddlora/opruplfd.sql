create table opruplaf
(
  opupdate    varchar2(8) default ' ' not null,
  opuptime    varchar2(8) default ' ' not null,
  opuppath    varchar2(40) default ' ' not null,
  opupfile    varchar2(15) default ' ' not null,
  opupmanf    varchar2(40) default ' ' not null,
  opuptype    number(1,0) default 0 not null,
  opupspar    varchar2(28) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint oprupla1 primary key( 
opupdate,
opuptime,
opuppath,
opupfile)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index oprupla2 on opruplaf
(
opuppath,
opupfile,
opupdate,
opuptime
)
  tablespace pas_indx; 
create unique index oprupla3 on opruplaf
(
opupmanf,
opupdate,
opuptime
)
  tablespace pas_indx; 
