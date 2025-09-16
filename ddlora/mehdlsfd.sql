create table mehaudda
(
  mhdlmdat    varchar2(8) default ' ' not null,
  mhdlmtim    varchar2(8) default ' ' not null,
  mhdlrtyp    varchar2(1) default ' ' not null,
  mhdlmuid    varchar2(10) default ' ' not null,
  mhdlurno    varchar2(8) default ' ' not null,
  mhdluniq    varchar2(8) default ' ' not null,
  mhdlsdat    varchar2(8) default ' ' not null,
  mhdlstim    varchar2(8) default ' ' not null,
  mhdlactv    varchar2(1) default ' ' not null,
  mhdlscod    varchar2(3) default ' ' not null,
  mhdlstat    varchar2(3) default ' ' not null,
  mhdlrdat    varchar2(8) default ' ' not null,
  mhdlrtim    varchar2(8) default ' ' not null,
  mhdlhcpc    varchar2(10) default ' ' not null,
  mhdlcase    varchar2(10) default ' ' not null,
  mhdlpocc    varchar2(3) default ' ' not null,
  mhdlremd    varchar2(8) default ' ' not null,
  mhdldriv    varchar2(1) default ' ' not null,
  mhdlresd    varchar2(1) default ' ' not null,
  mhdlrcod    varchar2(6) default ' ' not null,
  mhdlcuid    varchar2(10) default ' ' not null,
  mhdlcdat    varchar2(8) default ' ' not null,
  mhdlctim    varchar2(8) default ' ' not null,
  mhdluuid    varchar2(10) default ' ' not null,
  mhdludat    varchar2(8) default ' ' not null,
  mhdlutim    varchar2(8) default ' ' not null,
  mhdlcmnt    varchar2(100) default ' ' not null,
  mhdlsent    varchar2(1) default ' ' not null,
  mhdledat    varchar2(8) default ' ' not null,
  mhdletim    varchar2(8) default ' ' not null,
  mhdlsuls    varchar2(3) default ' ' not null,
  mhdlslsd    varchar2(8) default ' ' not null,
  mhdlrpdt    varchar2(8) default ' ' not null,
  mhdlcnsd    varchar2(8) default ' ' not null,
  mhdltrdt    varchar2(8) default ' ' not null,
  mhdllwcd    varchar2(8) default ' ' not null,
  mhdlctcd    varchar2(3) default ' ' not null,
  mhdlcmn2    varchar2(100) default ' ' not null,
  mhdldocg    varchar2(3) default ' ' not null,
  mhdlspsy    varchar2(10) default ' ' not null,
  mhdlresp    varchar2(10) default ' ' not null,
  mhdlldoc    varchar2(10) default ' ' not null,
  mhdlspre    varchar2(57) default ' ' not null,
  lf          varchar2(1) default ' ' not null
)
tablespace pas_data; 
create index mehaudda on mehaudda
(
mhdlurno,
mhdluniq,
mhdlmdat,
mhdlmtim
)
tablespace pas_indx; 
create index mehauddb on mehaudda
(
mhdlmdat,
mhdlmtim,
mhdlurno,
mhdluniq
)
tablespace pas_indx; 
create table mehdlsaf
(
  mhdlurno    varchar2(8) default ' ' not null,
  mhdluniq    varchar2(8) default ' ' not null,
  mhdlsdat    varchar2(8) default ' ' not null,
  mhdlstim    varchar2(8) default ' ' not null,
  mhdlactv    varchar2(1) default ' ' not null,
  mhdlscod    varchar2(3) default ' ' not null,
  mhdlstat    varchar2(3) default ' ' not null,
  mhdlrdat    varchar2(8) default ' ' not null,
  mhdlrtim    varchar2(8) default ' ' not null,
  mhdlhcpc    varchar2(10) default ' ' not null,
  mhdlcase    varchar2(10) default ' ' not null,
  mhdlpocc    varchar2(3) default ' ' not null,
  mhdlremd    varchar2(8) default ' ' not null,
  mhdldriv    varchar2(1) default ' ' not null,
  mhdlresd    varchar2(1) default ' ' not null,
  mhdlrcod    varchar2(6) default ' ' not null,
  mhdlcuid    varchar2(10) default ' ' not null,
  mhdlcdat    varchar2(8) default ' ' not null,
  mhdlctim    varchar2(8) default ' ' not null,
  mhdluuid    varchar2(10) default ' ' not null,
  mhdludat    varchar2(8) default ' ' not null,
  mhdlutim    varchar2(8) default ' ' not null,
  mhdlcmnt    varchar2(100) default ' ' not null,
  mhdlsent    varchar2(1) default ' ' not null,
  mhdledat    varchar2(8) default ' ' not null,
  mhdletim    varchar2(8) default ' ' not null,
  mhdlsuls    varchar2(3) default ' ' not null,
  mhdlslsd    varchar2(8) default ' ' not null,
  mhdlrpdt    varchar2(8) default ' ' not null,
  mhdlcnsd    varchar2(8) default ' ' not null,
  mhdltrdt    varchar2(8) default ' ' not null,
  mhdllwcd    varchar2(8) default ' ' not null,
  mhdlctcd    varchar2(3) default ' ' not null,
  mhdlcmn2    varchar2(100) default ' ' not null,
  mhdldocg    varchar2(3) default ' ' not null,
  mhdlspsy    varchar2(10) default ' ' not null,
  mhdlresp    varchar2(10) default ' ' not null,
  mhdlldoc    varchar2(10) default ' ' not null,
  mhdlspre    varchar2(57) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint mehdlsa1 primary key( 
mhdlurno,
mhdluniq,
mhdlsdat,
mhdlstim)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index mehdlsa2 on mehdlsaf
(
mhdlremd,
mhdlurno,
mhdluniq,
mhdlsdat,
mhdlstim
)
  tablespace pas_indx; 
