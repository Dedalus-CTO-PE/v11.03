create table nzpcfnaf
(
  nzcfhosp    varchar2(3) default ' ' not null,
  nzcfclmc    varchar2(3) default ' ' not null,
  nzcfcntr    varchar2(6) default ' ' not null,
  nzcfcprc    varchar2(9) default ' ' not null,
  nzcfstyp    varchar2(1) default ' ' not null,
  nzcfsdat    varchar2(8) default ' ' not null,
  nzcfedat    varchar2(8) default ' ' not null,
  nzcfbdet    number(1,0) default 0 not null,
  nzcfhnam    varchar2(35) default ' ' not null,
  nzcfhad1    varchar2(35) default ' ' not null,
  nzcfhad2    varchar2(35) default ' ' not null,
  nzcfhad3    varchar2(35) default ' ' not null,
  nzcfhad4    varchar2(35) default ' ' not null,
  nzcfspri    number(5,2) default 0 not null,
  nzcfdpri    number(5,2) default 0 not null,
  nzcfrpro    varchar2(1) default ' ' not null,
  nzcfrefn    varchar2(15) default ' ' not null,
  nzcfvnid    varchar2(15) default ' ' not null,
  nzcfelos    number(4,0) default 0 not null,
  nzcfdocs    varchar2(1) default ' ' not null,
  nzcfcdat    varchar2(8) default ' ' not null,
  nzcfctim    varchar2(8) default ' ' not null,
  nzcfcuid    varchar2(10) default ' ' not null,
  nzcfudat    varchar2(8) default ' ' not null,
  nzcfutim    varchar2(8) default ' ' not null,
  nzcfuuid    varchar2(10) default ' ' not null,
  nzcfspar    varchar2(80) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint nzpcfna1 primary key( 
nzcfhosp,
nzcfclmc,
nzcfcntr,
nzcfcprc,
nzcfstyp,
nzcfsdat)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
