create table mehaudda
(
  mhdlmdat    char(8) default ' ' not null,
  mhdlmtim    char(8) default ' ' not null,
  mhdlrtyp    char(1) default ' ' not null,
  mhdlmuid    char(10) default ' ' not null,
  mhdlurno    char(8) default ' ' not null,
  mhdluniq    char(8) default ' ' not null,
  mhdlsdat    char(8) default ' ' not null,
  mhdlstim    char(8) default ' ' not null,
  mhdlactv    char(1) default ' ' not null,
  mhdlscod    char(3) default ' ' not null,
  mhdlstat    char(3) default ' ' not null,
  mhdlrdat    char(8) default ' ' not null,
  mhdlrtim    char(8) default ' ' not null,
  mhdlhcpc    char(10) default ' ' not null,
  mhdlcase    char(10) default ' ' not null,
  mhdlpocc    char(3) default ' ' not null,
  mhdlremd    char(8) default ' ' not null,
  mhdldriv    char(1) default ' ' not null,
  mhdlresd    char(1) default ' ' not null,
  mhdlrcod    char(6) default ' ' not null,
  mhdlcuid    char(10) default ' ' not null,
  mhdlcdat    char(8) default ' ' not null,
  mhdlctim    char(8) default ' ' not null,
  mhdluuid    char(10) default ' ' not null,
  mhdludat    char(8) default ' ' not null,
  mhdlutim    char(8) default ' ' not null,
  mhdlcmnt    char(100) default ' ' not null,
  mhdlsent    char(1) default ' ' not null,
  mhdledat    char(8) default ' ' not null,
  mhdletim    char(8) default ' ' not null,
  mhdlsuls    char(3) default ' ' not null,
  mhdlslsd    char(8) default ' ' not null,
  mhdlrpdt    char(8) default ' ' not null,
  mhdlcnsd    char(8) default ' ' not null,
  mhdltrdt    char(8) default ' ' not null,
  mhdllwcd    char(8) default ' ' not null,
  mhdlctcd    char(3) default ' ' not null,
  mhdlcmn2    char(100) default ' ' not null,
  mhdldocg    char(3) default ' ' not null,
  mhdlspsy    char(10) default ' ' not null,
  mhdlresp    char(10) default ' ' not null,
  mhdlldoc    char(10) default ' ' not null,
  mhdlspre    char(57) default ' ' not null,
  lf          char(1)
);
create index mehaudda on mehaudda
(
mhdlurno,
mhdluniq,
mhdlmdat,
mhdlmtim
);
create index mehauddb on mehaudda
(
mhdlmdat,
mhdlmtim,
mhdlurno,
mhdluniq
);
revoke all on mehaudda from public ; 
grant select on mehaudda to public ; 
create table mehdlsaf
(
  mhdlurno    char(8) default ' ' not null,
  mhdluniq    char(8) default ' ' not null,
  mhdlsdat    char(8) default ' ' not null,
  mhdlstim    char(8) default ' ' not null,
  mhdlactv    char(1) default ' ' not null,
  mhdlscod    char(3) default ' ' not null,
  mhdlstat    char(3) default ' ' not null,
  mhdlrdat    char(8) default ' ' not null,
  mhdlrtim    char(8) default ' ' not null,
  mhdlhcpc    char(10) default ' ' not null,
  mhdlcase    char(10) default ' ' not null,
  mhdlpocc    char(3) default ' ' not null,
  mhdlremd    char(8) default ' ' not null,
  mhdldriv    char(1) default ' ' not null,
  mhdlresd    char(1) default ' ' not null,
  mhdlrcod    char(6) default ' ' not null,
  mhdlcuid    char(10) default ' ' not null,
  mhdlcdat    char(8) default ' ' not null,
  mhdlctim    char(8) default ' ' not null,
  mhdluuid    char(10) default ' ' not null,
  mhdludat    char(8) default ' ' not null,
  mhdlutim    char(8) default ' ' not null,
  mhdlcmnt    char(100) default ' ' not null,
  mhdlsent    char(1) default ' ' not null,
  mhdledat    char(8) default ' ' not null,
  mhdletim    char(8) default ' ' not null,
  mhdlsuls    char(3) default ' ' not null,
  mhdlslsd    char(8) default ' ' not null,
  mhdlrpdt    char(8) default ' ' not null,
  mhdlcnsd    char(8) default ' ' not null,
  mhdltrdt    char(8) default ' ' not null,
  mhdllwcd    char(8) default ' ' not null,
  mhdlctcd    char(3) default ' ' not null,
  mhdlcmn2    char(100) default ' ' not null,
  mhdldocg    char(3) default ' ' not null,
  mhdlspsy    char(10) default ' ' not null,
  mhdlresp    char(10) default ' ' not null,
  mhdlldoc    char(10) default ' ' not null,
  mhdlspre    char(57) default ' ' not null,
  lf          char(1)
);
create unique index mehdlsa1 on mehdlsaf
(
mhdlurno,
mhdluniq,
mhdlsdat,
mhdlstim
);
create unique index mehdlsa2 on mehdlsaf
(
mhdlremd,
mhdlurno,
mhdluniq,
mhdlsdat,
mhdlstim
);
revoke all on mehdlsaf from public ; 
grant select on mehdlsaf to public ; 
