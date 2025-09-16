create table webomgaf
(
  wbogarid    varchar2(20) default ' ' not null,
  wbogrptc    varchar2(3) default ' ' not null,
  wbogctid    varchar2(24) default ' ' not null,
  wbogstat    varchar2(50) default ' ' not null,
  wbogmecd    varchar2(4) default ' ' not null,
  wbogmetx    varchar2(500) default ' ' not null,
  wbogmemn    varchar2(10) default ' ' not null,
  wbogmemr    varchar2(1) default ' ' not null,
  wbogmegn    varchar2(40) default ' ' not null,
  wbogflid    varchar2(8) default ' ' not null,
  wboglddt    varchar2(8) default ' ' not null,
  wbogcdte    varchar2(8) default ' ' not null,
  wbogctim    varchar2(8) default ' ' not null,
  wbogcuid    varchar2(10) default ' ' not null,
  wbogudte    varchar2(8) default ' ' not null,
  wbogutim    varchar2(8) default ' ' not null,
  wboguuid    varchar2(10) default ' ' not null,
  wbogmsid    varchar2(36) default ' ' not null,
  wbogspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint webomga1 primary key( 
wbogarid,
wbogrptc)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index webomga2 on webomgaf
(
wbogctid,
wbogarid,
wbogrptc
)
  tablespace pas_indx; 
create unique index webomga3 on webomgaf
(
wbogmsid,
wbogarid,
wbogrptc
)
  tablespace pas_indx; 
