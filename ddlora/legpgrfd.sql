create table legpgraf
(
  dlptpgad    varchar2(8) default ' ' not null,
  dlptpgep    varchar2(2) default ' ' not null,
  lptpggpv    varchar2(3) default ' ' not null,
  lptpgndr    varchar2(4) default ' ' not null,
  lptpgnmd    varchar2(4) default ' ' not null,
  lptpgnwg    number(10,4) default 0 not null,
  lptpgnal    number(6,2) default 0 not null,
  lptpgsdr    varchar2(4) default ' ' not null,
  lptpgsmd    varchar2(4) default ' ' not null,
  lptpgswg    number(10,4) default 0 not null,
  lptpgsal    number(6,2) default 0 not null,
  lptpgldr    varchar2(4) default ' ' not null,
  lptpglmd    varchar2(4) default ' ' not null,
  lptpglwg    number(10,4) default 0 not null,
  lptpglal    number(6,2) default 0 not null,
  lptpgpcc    varchar2(1) default ' ' not null,
  lptpgwfi    number(16,4) default 0 not null,
  lptpgwva    number(16,4) default 0 not null,
  lptpgwto    number(16,4) default 0 not null,
  lptpgwwu    number(10,4) default 0 not null,
  lptpgwwd    varchar2(13) default ' ' not null,
  lptpgspa    varchar2(35) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint legpgra1 primary key( 
dlptpgad,
dlptpgep,
lptpggpv)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index legpgra2 on legpgraf
(
dlptpgad,
lptpggpv,
dlptpgep
)
  tablespace pas_indx; 
