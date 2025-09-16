create table pmstmdaf
(
  pmtddoct    varchar2(10) default ' ' not null,
  pmtdhosp    varchar2(3) default ' ' not null,
  pmtdunit    varchar2(3) default ' ' not null,
  pmtdteam    varchar2(5) default ' ' not null,
  pmtdactv    varchar2(1) default ' ' not null,
  pmtdhead    varchar2(1) default ' ' not null,
  pmtdprov    varchar2(10) default ' ' not null,
  pmtdcuid    varchar2(10) default ' ' not null,
  pmtdcdat    varchar2(8) default ' ' not null,
  pmtdctim    varchar2(8) default ' ' not null,
  pmtduuid    varchar2(10) default ' ' not null,
  pmtdudat    varchar2(8) default ' ' not null,
  pmtdutim    varchar2(8) default ' ' not null,
  pmtdspar    varchar2(30) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmstmda1 primary key( 
pmtddoct,
pmtdhosp,
pmtdunit,
pmtdteam)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index pmstmda2 on pmstmdaf
(
pmtdhosp,
pmtdunit,
pmtddoct,
pmtdteam
)
  tablespace pas_indx; 
