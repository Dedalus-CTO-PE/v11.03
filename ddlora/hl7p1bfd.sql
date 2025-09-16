create table hl7p1baf
(
  hl1brsid    varchar2(64) default ' ' not null,
  hl1bvrid    varchar2(10) default ' ' not null,
  hl1bcnt1    varchar2(4) default ' ' not null,
  hl1bmore    varchar2(200) default ' ' not null,
  hl1bmoty    varchar2(255) default ' ' not null,
  hl1bmodi    varchar2(200) default ' ' not null,
  hl1bmous    varchar2(50) default ' ' not null,
  hl1bmosy    varchar2(255) default ' ' not null,
  hl1bmova    varchar2(200) default ' ' not null,
  hl1bmotx    varchar2(200) default ' ' not null,
  hl1bmots    varchar2(255) default ' ' not null,
  hl1bmotv    varchar2(200) default ' ' not null,
  hl1bmotc    varchar2(50) default ' ' not null,
  hl1bmotd    varchar2(200) default ' ' not null,
  hl1bmotu    varchar2(10) default ' ' not null,
  hl1bmops    varchar2(40) default ' ' not null,
  hl1bmope    varchar2(40) default ' ' not null,
  hl1bspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint hl7p1ba1 primary key( 
hl1brsid,
hl1bvrid,
hl1bcnt1)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
