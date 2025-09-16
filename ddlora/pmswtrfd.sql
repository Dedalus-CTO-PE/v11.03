create table pmswtraf
(
  pmwthosp    varchar2(3) default ' ' not null,
  pmwtvisn    varchar2(8) default ' ' not null,
  pmwtsdat    varchar2(8) default ' ' not null,
  pmwtmdat    varchar2(8) default ' ' not null,
  pmwtcdat    varchar2(8) default ' ' not null,
  pmwtctim    varchar2(8) default ' ' not null,
  pmwtwebc    varchar2(10) default ' ' not null,
  pmwtspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmswtra1 primary key( 
pmwthosp,
pmwtvisn,
pmwtsdat)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index pmswtra2 on pmswtraf
(
pmwthosp,
pmwtsdat,
pmwtvisn
)
  tablespace pas_indx; 
