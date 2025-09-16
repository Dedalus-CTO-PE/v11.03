create table patmesgf
(
  pmcode      varchar2(3) default ' ' not null,
  pmline1     varchar2(65) default ' ' not null,
  pmline2     varchar2(65) default ' ' not null,
  pmspare     varchar2(10) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patmesg1 primary key( 
pmcode)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
