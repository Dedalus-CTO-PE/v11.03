create table mltcfnaf
(
  mlcfhosp    varchar2(3) default ' ' not null,
  mlcfclmc    varchar2(3) default ' ' not null,
  mlcfcntr    varchar2(6) default ' ' not null,
  mlcfproc    varchar2(9) default ' ' not null,
  mlcfstyp    varchar2(1) default ' ' not null,
  mlcfsdat    varchar2(8) default ' ' not null,
  mlcfhcpc    varchar2(10) default ' ' not null,
  mlcfspar    varchar2(60) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint mltcfna1 primary key( 
mlcfhosp,
mlcfclmc,
mlcfcntr,
mlcfproc,
mlcfstyp,
mlcfsdat,
mlcfhcpc)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index mltcfna2 on mltcfnaf
(
mlcfhcpc,
mlcfhosp,
mlcfclmc,
mlcfcntr,
mlcfproc,
mlcfstyp,
mlcfsdat
)
  tablespace pas_indx; 
