create table hl7fadaf
(
  hladrsid    varchar2(64) default ' ' not null,
  hladvrid    varchar2(10) default ' ' not null,
  hladcnt1    varchar2(4) default ' ' not null,
  hladeref    varchar2(200) default ' ' not null,
  hladetyp    varchar2(255) default ' ' not null,
  hladedis    varchar2(255) default ' ' not null,
  hladeidu    varchar2(20) default ' ' not null,
  hladesys    varchar2(255) default ' ' not null,
  hladeivl    varchar2(200) default ' ' not null,
  hladeids    varchar2(255) default ' ' not null,
  hladeidv    varchar2(50) default ' ' not null,
  hladeidc    varchar2(50) default ' ' not null,
  hladeidd    varchar2(200) default ' ' not null,
  hladeidl    varchar2(1) default ' ' not null,
  hladeidt    varchar2(200) default ' ' not null,
  hladeips    varchar2(40) default ' ' not null,
  hladeipe    varchar2(40) default ' ' not null,
  hladspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint hl7fada1 primary key( 
hladrsid,
hladvrid,
hladcnt1)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
