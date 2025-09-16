create table paticdgf
(
  gidcode     varchar2(1) default ' ' not null,
  ggpcode     varchar2(4) default ' ' not null,
  gdesc       varchar2(70) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint paticdg1 primary key( 
gidcode,
ggpcode)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
