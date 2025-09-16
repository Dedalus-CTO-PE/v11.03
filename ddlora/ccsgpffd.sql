create table ccsgpfaf
(
  ccgphcd     varchar2(2) default ' ' not null,
  ccgpdpt     varchar2(8) default ' ' not null,
  ccgppcd     varchar2(8) default ' ' not null,
  ccgpghcd    varchar2(2) default ' ' not null,
  ccgpgdpt    varchar2(8) default ' ' not null,
  ccgpgpcd    varchar2(8) default ' ' not null,
  ccgpgqty    number(12,2) default 0 not null,
  ccgpgch     number(12,2) default 0 not null,
  ccgpspa     varchar2(23) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ccsgpfa1 primary key( 
ccgphcd,
ccgpdpt,
ccgppcd,
ccgpghcd,
ccgpgdpt,
ccgpgpcd)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
