create table pmsamhaf
(
  pmmhcntr    varchar2(6) default ' ' not null,
  pmmhamhc    varchar2(10) default ' ' not null,
  pmmhamhd    varchar2(80) default ' ' not null,
  pmmhavpl    number(8,2) default 0 not null,
  pmmhlowb    number(4,0) default 0 not null,
  pmmhuppb    number(4,0) default 0 not null,
  pmmhssob    number(14,4) default 0 not null,
  pmmhssop    number(14,4) default 0 not null,
  pmmhinli    number(14,4) default 0 not null,
  pmmhlsop    number(14,4) default 0 not null,
  pmmhppsa    number(5,2) default 0 not null,
  pmmhcdat    varchar2(8) default ' ' not null,
  pmmhctim    varchar2(8) default ' ' not null,
  pmmhcuid    varchar2(10) default ' ' not null,
  pmmhudat    varchar2(8) default ' ' not null,
  pmmhutim    varchar2(8) default ' ' not null,
  pmmhuuid    varchar2(10) default ' ' not null,
  pmmhspar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmsamha1 primary key( 
pmmhcntr,
pmmhamhc)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index pmsamha2 on pmsamhaf
(
pmmhamhc,
pmmhcntr
)
  tablespace pas_indx; 
