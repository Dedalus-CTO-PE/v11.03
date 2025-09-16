create table tmpbdtaf
(
  tmbdtdat    varchar2(8) default ' ' not null,
  tmbdrecn    varchar2(12) default ' ' not null,
  tmbduniq    varchar2(3) default ' ' not null,
  tmbdmhos    varchar2(3) default ' ' not null,
  tmbdmdhs    varchar2(2) default ' ' not null,
  tmbdptyp    varchar2(1) default ' ' not null,
  tmbdpamt    number(14,2) default 0 not null,
  tmbdpayd    varchar2(50) default ' ' not null,
  tmbdchqn    varchar2(12) default ' ' not null,
  tmbddraw    varchar2(50) default ' ' not null,
  tmbdbank    varchar2(30) default ' ' not null,
  tmbdbrch    varchar2(30) default ' ' not null,
  tmbdcrdt    varchar2(3) default ' ' not null,
  tmbdstrf    varchar2(40) default ' ' not null,
  tmbdeftt    varchar2(1) default ' ' not null,
  tmbdcdat    varchar2(8) default ' ' not null,
  tmbdctim    varchar2(8) default ' ' not null,
  tmbdcuid    varchar2(10) default ' ' not null,
  tmbdudat    varchar2(8) default ' ' not null,
  tmbdutim    varchar2(8) default ' ' not null,
  tmbduuid    varchar2(10) default ' ' not null,
  tmbdpcod    varchar2(3) default ' ' not null,
  tmbdspar    varchar2(27) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint tmpbdta1 primary key( 
tmbdrecn,
tmbduniq)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index tmpbdta2 on tmpbdtaf
(
tmbdtdat,
tmbdrecn,
tmbduniq
)
  tablespace pas_indx; 
create unique index tmpbdta3 on tmpbdtaf
(
tmbdchqn,
tmbdrecn,
tmbduniq
)
  tablespace pas_indx; 
