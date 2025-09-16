create table patcfaaf
(
  ptcfclai    varchar2(3) default ' ' not null,
  ptcffacd    varchar2(3) default ' ' not null,
  ptcfndfp    varchar2(3) default ' ' not null,
  ptcfocgr    varchar2(3) default ' ' not null,
  ptcfcefr    varchar2(1) default ' ' not null,
  ptcfmcps    varchar2(1) default ' ' not null,
  ptcfhinv    varchar2(1) default ' ' not null,
  ptcfrhcd    varchar2(3) default ' ' not null,
  ptcfrhft    varchar2(80) default ' ' not null,
  ptcfhdat    varchar2(8) default ' ' not null,
  ptcfhfgc    varchar2(6) default ' ' not null,
  ptcfohdt    varchar2(8) default ' ' not null,
  ptcfohtm    varchar2(8) default ' ' not null,
  ptcfohui    varchar2(10) default ' ' not null,
  ptcfspar    varchar2(60) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patcfaa1 primary key( 
ptcfclai)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
