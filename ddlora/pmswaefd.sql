create table pmswaeaf
(
  pmwahosp    varchar2(3) default ' ' not null,
  pmwaprog    varchar2(8) default ' ' not null,
  pmwasdat    varchar2(8) default ' ' not null,
  pmwaedat    varchar2(8) default ' ' not null,
  pmwacdat    varchar2(8) default ' ' not null,
  pmwactim    varchar2(8) default ' ' not null,
  pmwawebc    varchar2(10) default ' ' not null,
  pmwaspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmswaea1 primary key( 
pmwahosp,
pmwaprog,
pmwasdat,
pmwaedat)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
