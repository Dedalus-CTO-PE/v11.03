create table comaudaf
(
  cmaurecn    varchar2(12) default ' ' not null,
  cmautcnt    varchar2(5) default ' ' not null,
  cmautdat    varchar2(8) default ' ' not null,
  cmauttim    varchar2(8) default ' ' not null,
  cmauurno    varchar2(8) default ' ' not null,
  cmaufadm    varchar2(8) default ' ' not null,
  cmautadm    varchar2(8) default ' ' not null,
  cmaufpra    varchar2(6) default ' ' not null,
  cmautpra    varchar2(6) default ' ' not null,
  cmaufsdr    varchar2(10) default ' ' not null,
  cmautsdr    varchar2(10) default ' ' not null,
  cmaufdty    varchar2(3) default ' ' not null,
  cmautdty    varchar2(3) default ' ' not null,
  cmaufvty    varchar2(1) default ' ' not null,
  cmautvty    varchar2(1) default ' ' not null,
  cmaufreg    varchar2(3) default ' ' not null,
  cmautreg    varchar2(3) default ' ' not null,
  cmaucuid    varchar2(10) default ' ' not null,
  cmauspar    varchar2(46) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint comauda1 primary key( 
cmaurecn,
cmautcnt,
cmautdat,
cmauttim)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index comauda2 on comaudaf
(
cmaurecn,
cmautdat,
cmauttim,
cmautcnt
)
  tablespace pas_indx; 
create unique index comauda3 on comaudaf
(
cmauurno,
cmaurecn,
cmautdat,
cmauttim,
cmautcnt
)
  tablespace pas_indx; 
create unique index comauda4 on comaudaf
(
cmautdat,
cmauttim,
cmauurno,
cmaurecn,
cmautcnt
)
  tablespace pas_indx; 
