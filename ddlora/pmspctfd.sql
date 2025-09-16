create table pmspctaf
(
  pmpcuniq    varchar2(10) default ' ' not null,
  pmpcadmn    varchar2(8) default ' ' not null,
  pmpcdate    varchar2(8) default ' ' not null,
  pmpctime    varchar2(8) default ' ' not null,
  pmpctype    varchar2(3) default ' ' not null,
  pmpcetyp    varchar2(3) default ' ' not null,
  pmpcesta    varchar2(3) default ' ' not null,
  pmpcdes1    varchar2(50) default ' ' not null,
  pmpcdes2    varchar2(50) default ' ' not null,
  pmpcwebc    varchar2(10) default ' ' not null,
  pmpcdatc    varchar2(8) default ' ' not null,
  pmpctimc    varchar2(8) default ' ' not null,
  pmpcwebu    varchar2(10) default ' ' not null,
  pmpcdatu    varchar2(8) default ' ' not null,
  pmpctimu    varchar2(8) default ' ' not null,
  pmpcrecs    varchar2(1) default ' ' not null,
  pmpcwebd    varchar2(10) default ' ' not null,
  pmpcdatd    varchar2(8) default ' ' not null,
  pmpctimd    varchar2(8) default ' ' not null,
  pmpcspar    varchar2(60) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmspcta1 primary key( 
pmpcuniq,
pmpcadmn,
pmpcdate,
pmpctime,
pmpctype,
pmpcetyp)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
