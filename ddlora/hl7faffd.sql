create table hl7fafaf
(
  hlafrsid    varchar2(64) default ' ' not null,
  hlafvrid    varchar2(10) default ' ' not null,
  hlafcnt1    varchar2(4) default ' ' not null,
  hlafrref    varchar2(200) default ' ' not null,
  hlafrtyp    varchar2(255) default ' ' not null,
  hlafrdis    varchar2(200) default ' ' not null,
  hlafridu    varchar2(50) default ' ' not null,
  hlafrsys    varchar2(255) default ' ' not null,
  hlafrivl    varchar2(200) default ' ' not null,
  hlafrids    varchar2(255) default ' ' not null,
  hlafridv    varchar2(200) default ' ' not null,
  hlafridc    varchar2(50) default ' ' not null,
  hlafridd    varchar2(200) default ' ' not null,
  hlafrius    varchar2(10) default ' ' not null,
  hlafridt    varchar2(200) default ' ' not null,
  hlafrips    varchar2(40) default ' ' not null,
  hlafripe    varchar2(40) default ' ' not null,
  hlafspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint hl7fafa1 primary key( 
hlafrsid,
hlafvrid,
hlafcnt1)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
