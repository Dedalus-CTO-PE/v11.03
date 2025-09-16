create table pmsqeraf
(
  pmqehosp    varchar2(3) default ' ' not null,
  pmqeyear    varchar2(4) default ' ' not null,
  pmqerunn    varchar2(3) default ' ' not null,
  pmqeedat    varchar2(8) default ' ' not null,
  pmqespar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmsqera1 primary key( 
pmqehosp,
pmqeyear,
pmqerunn)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index pmsqera2 on pmsqeraf
(
pmqehosp,
pmqeedat,
pmqeyear,
pmqerunn
)
  tablespace pas_indx; 
