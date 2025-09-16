create table pmstmdaf
(
  pmtddoct    char(10) default ' ' not null,
  pmtdhosp    char(3) default ' ' not null,
  pmtdunit    char(3) default ' ' not null,
  pmtdteam    char(5) default ' ' not null,
  pmtdactv    char(1) default ' ' not null,
  pmtdhead    char(1) default ' ' not null,
  pmtdprov    char(10) default ' ' not null,
  pmtdcuid    char(10) default ' ' not null,
  pmtdcdat    char(8) default ' ' not null,
  pmtdctim    char(8) default ' ' not null,
  pmtduuid    char(10) default ' ' not null,
  pmtdudat    char(8) default ' ' not null,
  pmtdutim    char(8) default ' ' not null,
  pmtdspar    char(30) default ' ' not null,
  lf          char(1)
);
create unique index pmstmda1 on pmstmdaf
(
pmtddoct,
pmtdhosp,
pmtdunit,
pmtdteam
);
create unique index pmstmda2 on pmstmdaf
(
pmtdhosp,
pmtdunit,
pmtddoct,
pmtdteam
);
revoke all on pmstmdaf from public ; 
grant select on pmstmdaf to public ; 
