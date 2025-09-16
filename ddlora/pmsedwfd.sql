create table pmsedwaf
(
  pmewurno    varchar2(8) default ' ' not null,
  pmewtype    varchar2(3) default ' ' not null,
  pmewoldv    varchar2(250) default ' ' not null,
  pmewnewv    varchar2(250) default ' ' not null,
  pmewcdat    varchar2(8) default ' ' not null,
  pmewctim    varchar2(8) default ' ' not null,
  pmewcuid    varchar2(10) default ' ' not null,
  pmewspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmsedwa1 primary key( 
pmewcdat,
pmewctim,
pmewurno,
pmewtype)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index pmsedwa2 on pmsedwaf
(
pmewurno,
pmewtype,
pmewcdat,
pmewctim
)
  tablespace pas_indx; 
